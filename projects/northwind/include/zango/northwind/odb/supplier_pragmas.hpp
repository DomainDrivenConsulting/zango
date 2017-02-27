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
#ifndef ZANGO_NORTHWIND_ODB_SUPPLIER_PRAGMAS_HPP
#define ZANGO_NORTHWIND_ODB_SUPPLIER_PRAGMAS_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma once
#endif

#include "zango/northwind/types/supplier.hpp"
#include "zango/northwind/odb/supplier_id_pragmas.hpp"

namespace zango {
namespace northwind {

#ifdef ODB_COMPILER

#pragma db object(supplier) schema("northwind")

#pragma db member(supplier::supplier_id_) id
#pragma db member(supplier::contact_name_) null
#pragma db member(supplier::contact_title_) null
#pragma db member(supplier::address_) null
#pragma db member(supplier::city_) null
#pragma db member(supplier::region_) null
#pragma db member(supplier::postal_code_) null
#pragma db member(supplier::country_) null
#pragma db member(supplier::phone_) null
#pragma db member(supplier::fax_) null
#pragma db member(supplier::home_page_) null

#endif

} }

#endif
