/* -*- mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 *
 * Copyright (C) 2012-2015 Marco Craveiro <marco.craveiro@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 */
#include <list>
#include <chrono>
#include <vector>
#include <sstream>
#include <iostream>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/serialization/list.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/binary_iarchive.hpp>
#include <odb/database.hxx>
#include <odb/transaction.hxx>
#include <odb/result.hxx>
#include <odb/oracle/database.hxx>
#include <hiredis/hiredis.h>
#include "zango/northwind/types/customers.hpp"
#include "zango/northwind/io/customers_io.hpp"
#include "zango/northwind/test_data/customers_td.hpp"
#include "zango/northwind/serialization/customers_ser.hpp"
#include "zango/northwind/test_data/customers_td.hpp"
#include "zango/northwind/odb/customers-odb-oracle.hxx"
#include "zango/northwind/odb/customers-odb.hxx"

std::vector<zango::northwind::customers> generate_customers() {
    std::vector<zango::northwind::customers> r;
    const auto total(10 * 1000);
    r.reserve(total);

    zango::northwind::customers_generator g;
    for (int i = 0; i < total; ++i) {
        const auto c(g());
        if (i > 100)
            r.push_back(g());
    }

    return r;
}

void save_customers(odb::oracle::database& db,
    const std::vector<zango::northwind::customers>& customers) {

    odb::transaction t(db.begin());
    for (const auto c : customers)
        db.persist(c);
    t.commit();
}

std::list<zango::northwind::customers>
load_customers(odb::oracle::database& db) {
    odb::oracle::transaction t(db.begin());

    std::list<zango::northwind::customers> r;
    auto rs(db.query<zango::northwind::customers>());
    for (auto i(rs.begin ()); i != rs.end (); ++i)
        r.push_back(*i);
    return r;
}

void serialise_to_file(
    const std::list<zango::northwind::customers>& customers) {

    boost::filesystem::path file("a_file.bin");
    {
        boost::filesystem::ofstream os(file);
        boost::archive::binary_oarchive oa(os);
        oa << customers;
    }

    std::cout << "Wrote customers to file: "
              << file.generic_string() << std::endl;

    std::list<zango::northwind::customers> customers_from_file;
    {
        boost::filesystem::ifstream is(file);
        boost::archive::binary_iarchive ia(is);
        ia >> customers_from_file;
    }

    std::cout << "Front customer (file): "
              << customers_from_file.front() << std::endl;
}

void from_test_data_generation(odb::oracle::database& db) {
    std::cout << "Generating customers..." << std::endl;
    const auto generated_customers(generate_customers());
    std::cout << "Generated customers. Size: "
              << generated_customers.size() << std::endl;

    std::cout << "Saving customers..." << std::endl;
    save_customers(db, generated_customers);
    std::cout << "Saved customers." << std::endl;

    auto start = std::chrono::steady_clock::now();
    const auto oracle_generated_customers(load_customers(db));
    auto end = std::chrono::steady_clock::now();
    auto diff = end - start;
    std::cout << "Read generated customers. Size: "
              << oracle_generated_customers.size() << " time (ms): "
              << std::chrono::duration<double, std::milli>(diff).count()
              << std::endl;
}

int from_redis(const std::list<zango::northwind::customers>& customers) {
    redisContext *c;
    redisReply *reply;
    const char *hostname = "localhost";
    int port = 6379;
    struct timeval timeout = { 1, 500000 }; // 1.5 seconds
    c = redisConnectWithTimeout(hostname, port, timeout);
    if (c == NULL || c->err) {
        if (c) {
            std::cerr << "Connection error: " << c->errstr << std::endl;
            redisFree(c);
        } else {
            std::cerr << "Connection error: can't allocate redis context"
                      << std::endl;
        }
        return 1;
    }

    std::ostringstream os;
    boost::archive::binary_oarchive oa(os);
    oa << customers;
    const auto value(os.str());
    const std::string key("customers");
    reply = (redisReply*)redisCommand(c, "SET %b %b", key.c_str(),
        (size_t) key.size(), value.c_str(), (size_t) value.size());
    if (!reply)
        return REDIS_ERR;
    freeReplyObject(reply);

    reply = (redisReply*)redisCommand(c, "GET %b", key.c_str(),
        (size_t) key.size());
    if (!reply)
        return REDIS_ERR;

    if ( reply->type != REDIS_REPLY_STRING ) {
        std::cerr << "ERROR: " << reply->str << std::endl;
        return 1;
    }

    const std::string redis_value(reply->str, reply->len);
    std::istringstream is(redis_value);
    std::list<zango::northwind::customers> customers_from_redis;
    boost::archive::binary_iarchive ia(is);
    ia >> customers_from_redis;
    std::cout << "Read from redis: " << customers_from_redis.size()
              << std::endl;
    std::cout << "Front customer (redis): "
              << customers_from_redis.front() << std::endl;
    freeReplyObject(reply);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Expected password." << std::endl;
        return 1;
    }

    const std::string password(argv[1]);
    using odb::oracle::database;
    std::unique_ptr<database>
        db(new database("northwind", password, "XE", "localhost", 1521));

    std::cout << "Reading customers." << std::endl;
    const auto customers(load_customers(*db));
    std::cout << "Total customers read: " << customers.size() << std::endl;
    // for (auto i(r.begin ()); i != r.end (); ++i) {
    //     std::cout << "Customer: " << *i << std::endl;

    std::cout << "Front customer (database): "
              << customers.front() << std::endl;

    serialise_to_file(customers);
    from_test_data_generation(*db);
    from_redis(customers);

    return 0;
}
