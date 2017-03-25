# -*- mode: cmake; cmake-tab-width: 4; indent-tabs-mode: nil -*-
#
# Copyright (C) 2016 Domain Driven Consulting Plc
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
# MA 02110-1301, USA.
#
cmake_minimum_required(VERSION 3.4 FATAL_ERROR)

project(zango)

#
# Add our private CMake modules to path.
#
list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/build/cmake)

#
# Boost
#
find_package(Boost 1.62 REQUIRED COMPONENTS
    system
    serialization
    log
    date_time
    filesystem
    program_options
    )

#
# Oracle (OCI)
#
find_package(Oracle REQUIRED)

#
# ODB
#
find_package(ODB REQUIRED COMPONENTS boost oracle OPTIONAL_COMPONENTS pgsql)

#
# Dogen
#
find_package(Dogen REQUIRED)

#
# Hiredis
#
find_package(Hiredis REQUIRED)

#
# Add all dependencies to the include and library directories.
#
include_directories(SYSTEM ${ORACLE_INCLUDE_DIR} ${ODB_INCLUDE_DIRS}
    ${LIBHIREDIS_INCLUDE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/projects/northwind/include)
set(LIBS ${LIBS} ${ORACLE_LIBRARY} ${ODB_LIBRARIES} ${Boost_LIBRARIES}
    ${LIBHIREDIS_LIBRARIES})
message(STATUS "${ODB_INCLUDE_DIRS}")

#
# Use C++-14
#
set(CMAKE_CXX_STANDARD 14)

#
# Add the Dogen model for northwind.
#
add_subdirectory(${CMAKE_SOURCE_DIR}/projects/northwind)

#
# Target for the application.
#
add_executable(application projects/application/main.cpp)
target_link_libraries(application
    -Wl,--whole-archive northwind -Wl,--no-whole-archive
    ${ORACLE_LIBRARY} ${ODB_LIBRARIES} ${Boost_LIBRARIES}
    ${LIBHIREDIS_LIBRARIES})

add_custom_target(knit_northwind
    COMMENT "Knitting Northwind model" VERBATIM
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMAND ${DOGEN_KNITTER_EXECUTABLE}
    --target ${CMAKE_SOURCE_DIR}/projects/input_models/northwind.dia
    --delete-extra-files --output-dir ${CMAKE_SOURCE_DIR}/projects
    --ignore-files-matching-regex .*sql --ignore-files-matching-regex .*-odb.*)
