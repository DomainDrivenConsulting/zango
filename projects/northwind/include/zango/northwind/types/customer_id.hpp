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
#ifndef ZANGO_NORTHWIND_TYPES_CUSTOMER_ID_HPP
#define ZANGO_NORTHWIND_TYPES_CUSTOMER_ID_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma once
#endif

#include <algorithm>
#include "zango/northwind/serialization/customer_id_fwd_ser.hpp"

namespace zango {
namespace northwind {
class customer_id final {
public:
    customer_id() = default;
    customer_id(const customer_id&) = default;
    customer_id(customer_id&&) = default;
    ~customer_id() = default;
public:
    explicit customer_id(const int value);

private:
    template<typename Archive>
    friend void boost::serialization::save(Archive& ar, const zango::northwind::customer_id& v, unsigned int version);

    template<typename Archive>
    friend void boost::serialization::load(Archive& ar, zango::northwind::customer_id& v, unsigned int version);

public:
    /**
     * @brief Obtain the underlying value.
     */
    /**@{*/
    int value() const;
    void value(const int v);
    /**@}*/

public:
    explicit operator int() const {
        return value_;
    }

public:
    bool operator==(const customer_id& rhs) const;
    bool operator!=(const customer_id& rhs) const {
        return !this->operator==(rhs);
    }

public:
    void swap(customer_id& other) noexcept;
    customer_id& operator=(customer_id other);

private:
    int value_;
};

} }

namespace std {

template<>
inline void swap(
    zango::northwind::customer_id& lhs,
    zango::northwind::customer_id& rhs) {
    lhs.swap(rhs);
}

}

#endif
