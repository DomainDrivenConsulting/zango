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
#ifndef ZANGO_NORTHWIND_TYPES_TERRITORY_ID_HPP
#define ZANGO_NORTHWIND_TYPES_TERRITORY_ID_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma once
#endif

#include <string>
#include <algorithm>
#include "zango/northwind/serialization/territory_id_fwd_ser.hpp"

namespace zango {
namespace northwind {
class territory_id final {
public:
    territory_id() = default;
    territory_id(const territory_id&) = default;
    territory_id(territory_id&&) = default;
    ~territory_id() = default;
public:
    explicit territory_id(const std::string& value);

private:
    template<typename Archive>
    friend void boost::serialization::save(Archive& ar, const zango::northwind::territory_id& v, unsigned int version);

    template<typename Archive>
    friend void boost::serialization::load(Archive& ar, zango::northwind::territory_id& v, unsigned int version);

public:
    /**
     * @brief Obtain the underlying value.
     */
    /**@{*/
    const std::string& value() const;
    std::string& value();
    void value(const std::string& v);
    void value(const std::string&& v);
    /**@}*/

public:
    explicit operator std::string() const {
        return value_;
    }

public:
    bool operator==(const territory_id& rhs) const;
    bool operator!=(const territory_id& rhs) const {
        return !this->operator==(rhs);
    }

public:
    void swap(territory_id& other) noexcept;
    territory_id& operator=(territory_id other);

private:
    std::string value_;
};

} }

namespace std {

template<>
inline void swap(
    zango::northwind::territory_id& lhs,
    zango::northwind::territory_id& rhs) {
    lhs.swap(rhs);
}

}

#endif
