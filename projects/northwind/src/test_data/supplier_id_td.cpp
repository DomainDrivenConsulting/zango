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
#include "zango/northwind/test_data/supplier_id_td.hpp"

namespace {

int create_int(const unsigned int position) {
    return static_cast<int>(position);
}

}

namespace zango {
namespace northwind {

supplier_id_generator::supplier_id_generator() : position_(0) { }

void supplier_id_generator::
populate(const unsigned int position, result_type& v) {
    v.value(create_int(position + 1));
}

supplier_id_generator::result_type
supplier_id_generator::create(const unsigned int position) {
    supplier_id r;
    supplier_id_generator::populate(position, r);
    return r;
}

supplier_id_generator::result_type*
supplier_id_generator::create_ptr(const unsigned int position) {
    supplier_id* r = new supplier_id();
    supplier_id_generator::populate(position, *r);
    return r;
}

supplier_id_generator::result_type
supplier_id_generator::operator()() {
    return create(position_++);
}

} }
