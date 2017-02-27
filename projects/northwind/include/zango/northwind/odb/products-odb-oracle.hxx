// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#ifndef ZANGO_NORTHWIND_ODB_PRODUCTS_ODB_ORACLE_HXX
#define ZANGO_NORTHWIND_ODB_PRODUCTS_ODB_ORACLE_HXX

// Begin prologue.
//
#include <odb/boost/version.hxx>
#if ODB_BOOST_VERSION != 2040000 // 2.4.0
#  error ODB and C++ compilers see different libodb-boost interface versions
#endif
#include <boost/shared_ptr.hpp>
#include <odb/boost/smart-ptr/pointer-traits.hxx>
#include <odb/boost/smart-ptr/wrapper-traits.hxx>
#include <odb/boost/optional/wrapper-traits.hxx>
#include <odb/boost/unordered/container-traits.hxx>
#include <odb/boost/date-time/oracle/gregorian-traits.hxx>
#include <odb/boost/date-time/oracle/posix-time-traits.hxx>
#include <odb/boost/multi-index/container-traits.hxx>
#include <odb/boost/uuid/oracle/uuid-traits.hxx>
//
// End prologue.

#include <odb/version.hxx>

#if (ODB_VERSION != 20400UL)
#error ODB runtime version mismatch
#endif

#include <odb/pre.hxx>

#include "zango/northwind/types/products.hpp"

#include "zango/northwind/odb/category_id-odb-oracle.hxx"
#include "zango/northwind/odb/product_id-odb-oracle.hxx"
#include "zango/northwind/odb/supplier_id-odb-oracle.hxx"

#include "zango/northwind/odb/products-odb.hxx"

#include <odb/details/buffer.hxx>

#include <odb/oracle/version.hxx>
#include <odb/oracle/forward.hxx>
#include <odb/oracle/binding.hxx>
#include <odb/oracle/oracle-types.hxx>
#include <odb/oracle/query.hxx>

namespace odb
{
  // products
  //
  template <typename A>
  struct query_columns< ::zango::northwind::products, id_oracle, A >
  {
    // product_id
    //
    struct product_id_class_
    {
      product_id_class_ ()
      {
      }

      // value
      //
      typedef
      oracle::query_column<
        oracle::value_traits<
          int,
          oracle::id_int32 >::query_type,
        oracle::id_int32 >
      value_type_;

      static const value_type_ value;
    };

    static const product_id_class_ product_id;

    // product_name
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        ::std::string,
        oracle::id_string >::query_type,
      oracle::id_string >
    product_name_type_;

    static const product_name_type_ product_name;

    // supplier_id
    //
    struct supplier_id_class_
    {
      supplier_id_class_ ()
      {
      }

      // value
      //
      typedef
      oracle::query_column<
        oracle::value_traits<
          int,
          oracle::id_int32 >::query_type,
        oracle::id_int32 >
      value_type_;

      static const value_type_ value;
    };

    static const supplier_id_class_ supplier_id;

    // category_id
    //
    struct category_id_class_
    {
      category_id_class_ ()
      {
      }

      // value
      //
      typedef
      oracle::query_column<
        oracle::value_traits<
          int,
          oracle::id_int32 >::query_type,
        oracle::id_int32 >
      value_type_;

      static const value_type_ value;
    };

    static const category_id_class_ category_id;

    // quantity_per_unit
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        ::std::string,
        oracle::id_string >::query_type,
      oracle::id_string >
    quantity_per_unit_type_;

    static const quantity_per_unit_type_ quantity_per_unit;

    // unit_price
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        double,
        oracle::id_double >::query_type,
      oracle::id_double >
    unit_price_type_;

    static const unit_price_type_ unit_price;

    // units_in_stock
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        int,
        oracle::id_int32 >::query_type,
      oracle::id_int32 >
    units_in_stock_type_;

    static const units_in_stock_type_ units_in_stock;

    // units_in_order
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        int,
        oracle::id_int32 >::query_type,
      oracle::id_int32 >
    units_in_order_type_;

    static const units_in_order_type_ units_in_order;

    // reorder_level
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        int,
        oracle::id_int32 >::query_type,
      oracle::id_int32 >
    reorder_level_type_;

    static const reorder_level_type_ reorder_level;

    // discontinued
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        bool,
        oracle::id_int32 >::query_type,
      oracle::id_int32 >
    discontinued_type_;

    static const discontinued_type_ discontinued;
  };

  template <typename A>
  const typename query_columns< ::zango::northwind::products, id_oracle, A >::product_id_class_::value_type_
  query_columns< ::zango::northwind::products, id_oracle, A >::product_id_class_::
  value (A::table_name, "\"product_id\"", 0, 10);

  template <typename A>
  const typename query_columns< ::zango::northwind::products, id_oracle, A >::product_id_class_
  query_columns< ::zango::northwind::products, id_oracle, A >::product_id;

  template <typename A>
  const typename query_columns< ::zango::northwind::products, id_oracle, A >::product_name_type_
  query_columns< ::zango::northwind::products, id_oracle, A >::
  product_name (A::table_name, "\"PRODUCT_NAME\"", 0, 512);

  template <typename A>
  const typename query_columns< ::zango::northwind::products, id_oracle, A >::supplier_id_class_::value_type_
  query_columns< ::zango::northwind::products, id_oracle, A >::supplier_id_class_::
  value (A::table_name, "\"supplier_id\"", 0, 10);

  template <typename A>
  const typename query_columns< ::zango::northwind::products, id_oracle, A >::supplier_id_class_
  query_columns< ::zango::northwind::products, id_oracle, A >::supplier_id;

  template <typename A>
  const typename query_columns< ::zango::northwind::products, id_oracle, A >::category_id_class_::value_type_
  query_columns< ::zango::northwind::products, id_oracle, A >::category_id_class_::
  value (A::table_name, "\"category_id\"", 0, 10);

  template <typename A>
  const typename query_columns< ::zango::northwind::products, id_oracle, A >::category_id_class_
  query_columns< ::zango::northwind::products, id_oracle, A >::category_id;

  template <typename A>
  const typename query_columns< ::zango::northwind::products, id_oracle, A >::quantity_per_unit_type_
  query_columns< ::zango::northwind::products, id_oracle, A >::
  quantity_per_unit (A::table_name, "\"QUANTITY_PER_UNIT\"", 0, 512);

  template <typename A>
  const typename query_columns< ::zango::northwind::products, id_oracle, A >::unit_price_type_
  query_columns< ::zango::northwind::products, id_oracle, A >::
  unit_price (A::table_name, "\"UNIT_PRICE\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::products, id_oracle, A >::units_in_stock_type_
  query_columns< ::zango::northwind::products, id_oracle, A >::
  units_in_stock (A::table_name, "\"UNITS_IN_STOCK\"", 0, 10);

  template <typename A>
  const typename query_columns< ::zango::northwind::products, id_oracle, A >::units_in_order_type_
  query_columns< ::zango::northwind::products, id_oracle, A >::
  units_in_order (A::table_name, "\"UNITS_IN_ORDER\"", 0, 10);

  template <typename A>
  const typename query_columns< ::zango::northwind::products, id_oracle, A >::reorder_level_type_
  query_columns< ::zango::northwind::products, id_oracle, A >::
  reorder_level (A::table_name, "\"REORDER_LEVEL\"", 0, 10);

  template <typename A>
  const typename query_columns< ::zango::northwind::products, id_oracle, A >::discontinued_type_
  query_columns< ::zango::northwind::products, id_oracle, A >::
  discontinued (A::table_name, "\"DISCONTINUED\"", 0, 1);

  template <typename A>
  struct pointer_query_columns< ::zango::northwind::products, id_oracle, A >:
    query_columns< ::zango::northwind::products, id_oracle, A >
  {
  };

  template <>
  class access::object_traits_impl< ::zango::northwind::products, id_oracle >:
    public access::object_traits< ::zango::northwind::products >
  {
    public:
    static const std::size_t batch = 1UL;

    struct id_image_type
    {
      composite_value_traits< ::zango::northwind::product_id, id_oracle >::image_type id_value;

      std::size_t version;
    };

    struct image_type
    {
      // product_id_
      //
      composite_value_traits< ::zango::northwind::product_id, id_oracle >::image_type product_id_value;

      // product_name_
      //
      char product_name_value[512];
      ub2 product_name_size;
      sb2 product_name_indicator;

      // supplier_id_
      //
      composite_value_traits< ::zango::northwind::supplier_id, id_oracle >::image_type supplier_id_value;

      // category_id_
      //
      composite_value_traits< ::zango::northwind::category_id, id_oracle >::image_type category_id_value;

      // quantity_per_unit_
      //
      char quantity_per_unit_value[512];
      ub2 quantity_per_unit_size;
      sb2 quantity_per_unit_indicator;

      // unit_price_
      //
      double unit_price_value;
      sb2 unit_price_indicator;

      // units_in_stock_
      //
      int units_in_stock_value;
      sb2 units_in_stock_indicator;

      // units_in_order_
      //
      int units_in_order_value;
      sb2 units_in_order_indicator;

      // reorder_level_
      //
      int reorder_level_value;
      sb2 reorder_level_indicator;

      // discontinued_
      //
      unsigned int discontinued_value;
      sb2 discontinued_indicator;

      std::size_t version;

      oracle::change_callback change_callback_;

      oracle::change_callback*
      change_callback ()
      {
        return &change_callback_;
      }
    };

    struct extra_statement_cache_type;

    using object_traits<object_type>::id;

    static id_type
    id (const image_type&);

    static void
    bind (oracle::bind*,
          image_type&,
          oracle::statement_kind);

    static void
    bind (oracle::bind*, id_image_type&);

    static void
    init (image_type&,
          const object_type&,
          oracle::statement_kind);

    static void
    init (object_type&,
          const image_type&,
          database*);

    static void
    init (id_image_type&, const id_type&);

    typedef oracle::object_statements<object_type> statements_type;

    typedef oracle::query_base query_base_type;

    static const std::size_t column_count = 10UL;
    static const std::size_t id_column_count = 1UL;
    static const std::size_t inverse_column_count = 0UL;
    static const std::size_t readonly_column_count = 0UL;
    static const std::size_t managed_optimistic_column_count = 0UL;

    static const std::size_t separate_load_column_count = 0UL;
    static const std::size_t separate_update_column_count = 0UL;

    static const bool versioned = false;

    static const char persist_statement[];
    static const char find_statement[];
    static const char update_statement[];
    static const char erase_statement[];
    static const char query_statement[];
    static const char erase_query_statement[];

    static const char table_name[];

    static void
    persist (database&, const object_type&);

    static pointer_type
    find (database&, const id_type&);

    static bool
    find (database&, const id_type&, object_type&);

    static bool
    reload (database&, object_type&);

    static void
    update (database&, const object_type&);

    static void
    erase (database&, const id_type&);

    static void
    erase (database&, const object_type&);

    static result<object_type>
    query (database&, const query_base_type&);

    static unsigned long long
    erase_query (database&, const query_base_type&);

    public:
    static bool
    find_ (statements_type&,
           const id_type*);

    static void
    load_ (statements_type&,
           object_type&,
           bool reload);
  };

  // products
  //
}

#include "zango/northwind/odb/products-odb-oracle.ixx"

#include <odb/post.hxx>

#endif // ZANGO_NORTHWIND_ODB_PRODUCTS_ODB_ORACLE_HXX
