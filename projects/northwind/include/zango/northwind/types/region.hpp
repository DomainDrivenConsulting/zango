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
#ifndef ZANGO_NORTHWIND_TYPES_REGION_HPP
#define ZANGO_NORTHWIND_TYPES_REGION_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma once
#endif

#include <string>
#include <algorithm>
#include "zango/northwind/types/region_id.hpp"
#include "zango/northwind/serialization/region_fwd_ser.hpp"

namespace zango {
namespace northwind {

class region final {
public:
    region() = default;
    region(const region&) = default;
    region(region&&) = default;
    ~region() = default;

public:
    region(
        const zango::northwind::region_id& region_id,
        const std::string& region_description);

private:
    template<typename Archive>
    friend void boost::serialization::save(Archive& ar, const zango::northwind::region& v, unsigned int version);

    template<typename Archive>
    friend void boost::serialization::load(Archive& ar, zango::northwind::region& v, unsigned int version);

public:
    const zango::northwind::region_id& region_id() const;
    zango::northwind::region_id& region_id();
    void region_id(const zango::northwind::region_id& v);
    void region_id(const zango::northwind::region_id&& v);

    const std::string& region_description() const;
    std::string& region_description();
    void region_description(const std::string& v);
    void region_description(const std::string&& v);

public:
    bool operator==(const region& rhs) const;
    bool operator!=(const region& rhs) const {
        return !this->operator==(rhs);
    }

public:
    void swap(region& other) noexcept;
    region& operator=(region other);

private:
    zango::northwind::region_id region_id_;
    std::string region_description_;
};

} }

namespace std {

template<>
inline void swap(
    zango::northwind::region& lhs,
    zango::northwind::region& rhs) {
    lhs.swap(rhs);
}

}

#endif
