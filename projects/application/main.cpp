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
#include <odb/oracle/database.hxx>
#include <odb/schema-catalog.hxx>
#include "zango/northwind/types/customers.hpp"

int main() {
    std::unique_ptr<odb::database> db(
        new odb::oracle::database("northwind", "", "", "localhost"));
    odb::transaction t(db->begin());
    odb::schema_catalog::create_schema(*db);
    t.commit();
    return 0;
}
