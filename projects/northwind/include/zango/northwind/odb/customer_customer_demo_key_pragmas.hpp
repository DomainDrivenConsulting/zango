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
#ifndef ZANGO_NORTHWIND_ODB_CUSTOMER_CUSTOMER_DEMO_KEY_PRAGMAS_HPP
#define ZANGO_NORTHWIND_ODB_CUSTOMER_CUSTOMER_DEMO_KEY_PRAGMAS_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma once
#endif

#include "zango/northwind/odb/customer_id_pragmas.hpp"
#include "zango/northwind/odb/customer_type_id_pragmas.hpp"
#include "zango/northwind/types/customer_customer_demo_key.hpp"

namespace zango {
namespace northwind {

#ifdef ODB_COMPILER

#pragma db value(customer_customer_demo_key) schema("northwind")

#pragma db member(customer_customer_demo_key::customer_id_) column("customer_id")
#pragma db member(customer_customer_demo_key::customer_type_) column("customer_type")

#endif

} }

#endif