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
#ifndef ZANGO_NORTHWIND_TYPES_CUSTOMER_CUSTOMER_DEMO_HPP
#define ZANGO_NORTHWIND_TYPES_CUSTOMER_CUSTOMER_DEMO_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma once
#endif

#include <algorithm>
#include "zango/northwind/types/customer_customer_demo_key.hpp"
#include "zango/northwind/serialization/customer_customer_demo_fwd_ser.hpp"

namespace zango {
namespace northwind {

class customer_customer_demo final {
public:
    customer_customer_demo() = default;
    customer_customer_demo(const customer_customer_demo&) = default;
    customer_customer_demo(customer_customer_demo&&) = default;
    ~customer_customer_demo() = default;

public:
    explicit customer_customer_demo(const zango::northwind::customer_customer_demo_key& customer_customer_demo_key);

private:
    template<typename Archive>
    friend void boost::serialization::save(Archive& ar, const zango::northwind::customer_customer_demo& v, unsigned int version);

    template<typename Archive>
    friend void boost::serialization::load(Archive& ar, zango::northwind::customer_customer_demo& v, unsigned int version);

public:
    const zango::northwind::customer_customer_demo_key& customer_customer_demo_key() const;
    zango::northwind::customer_customer_demo_key& customer_customer_demo_key();
    void customer_customer_demo_key(const zango::northwind::customer_customer_demo_key& v);
    void customer_customer_demo_key(const zango::northwind::customer_customer_demo_key&& v);

public:
    bool operator==(const customer_customer_demo& rhs) const;
    bool operator!=(const customer_customer_demo& rhs) const {
        return !this->operator==(rhs);
    }

public:
    void swap(customer_customer_demo& other) noexcept;
    customer_customer_demo& operator=(customer_customer_demo other);

private:
    zango::northwind::customer_customer_demo_key customer_customer_demo_key_;
};

} }

namespace std {

template<>
inline void swap(
    zango::northwind::customer_customer_demo& lhs,
    zango::northwind::customer_customer_demo& rhs) {
    lhs.swap(rhs);
}

}

#endif
