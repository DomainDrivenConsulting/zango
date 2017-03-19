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
#include <iostream>
#include <boost/exception/diagnostic_information.hpp>
#include <odb/database.hxx>
#include <odb/transaction.hxx>
#include <odb/result.hxx>
#include <odb/oracle/database.hxx>
#include "zango/northwind/types/customers.hpp"
#include "zango/northwind/io/customers_io.hpp"
#include "zango/northwind/test_data/customers_td.hpp"
#include "zango/northwind/odb/customers-odb-oracle.hxx"
#include "zango/northwind/odb/customers-odb.hxx"

namespace odb {

extern bool create_schema (database& db, unsigned short pass, bool drop);

}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Expected password." << std::endl;
        return 1;
    }

    const auto password(argv[1]);
    std::unique_ptr<odb::oracle::database> db(
        new odb::oracle::database("northwind", password, "XE", "lorenz", 1521));

    {
        odb::oracle::transaction t(db->begin());

        auto r(db->query<zango::northwind::customers>());
        for (auto i(r.begin ()); i != r.end (); ++i) {
            std::cout << "Customer: " << *i << std::endl;
        }
    }

    return 0;
}
