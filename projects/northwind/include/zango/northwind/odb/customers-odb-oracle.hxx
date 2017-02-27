// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#ifndef ZANGO_NORTHWIND_ODB_CUSTOMERS_ODB_ORACLE_HXX
#define ZANGO_NORTHWIND_ODB_CUSTOMERS_ODB_ORACLE_HXX

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

#include "zango/northwind/types/customers.hpp"

#include "zango/northwind/odb/customer_id-odb-oracle.hxx"

#include "zango/northwind/odb/customers-odb.hxx"

#include <odb/details/buffer.hxx>

#include <odb/oracle/version.hxx>
#include <odb/oracle/forward.hxx>
#include <odb/oracle/binding.hxx>
#include <odb/oracle/oracle-types.hxx>
#include <odb/oracle/query.hxx>

namespace odb
{
  // customers
  //
  template <typename A>
  struct query_columns< ::zango::northwind::customers, id_oracle, A >
  {
    // customer_id
    //
    struct customer_id_class_
    {
      customer_id_class_ ()
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

    static const customer_id_class_ customer_id;

    // company_name
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        ::std::string,
        oracle::id_string >::query_type,
      oracle::id_string >
    company_name_type_;

    static const company_name_type_ company_name;

    // contact_name
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        ::std::string,
        oracle::id_string >::query_type,
      oracle::id_string >
    contact_name_type_;

    static const contact_name_type_ contact_name;

    // contact_title
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        ::std::string,
        oracle::id_string >::query_type,
      oracle::id_string >
    contact_title_type_;

    static const contact_title_type_ contact_title;

    // address
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        ::std::string,
        oracle::id_string >::query_type,
      oracle::id_string >
    address_type_;

    static const address_type_ address;

    // city
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        ::std::string,
        oracle::id_string >::query_type,
      oracle::id_string >
    city_type_;

    static const city_type_ city;

    // region
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        ::std::string,
        oracle::id_string >::query_type,
      oracle::id_string >
    region_type_;

    static const region_type_ region;

    // postal_code
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        ::std::string,
        oracle::id_string >::query_type,
      oracle::id_string >
    postal_code_type_;

    static const postal_code_type_ postal_code;

    // country
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        ::std::string,
        oracle::id_string >::query_type,
      oracle::id_string >
    country_type_;

    static const country_type_ country;

    // phone
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        ::std::string,
        oracle::id_string >::query_type,
      oracle::id_string >
    phone_type_;

    static const phone_type_ phone;

    // fax
    //
    typedef
    oracle::query_column<
      oracle::value_traits<
        ::std::string,
        oracle::id_string >::query_type,
      oracle::id_string >
    fax_type_;

    static const fax_type_ fax;
  };

  template <typename A>
  const typename query_columns< ::zango::northwind::customers, id_oracle, A >::customer_id_class_::value_type_
  query_columns< ::zango::northwind::customers, id_oracle, A >::customer_id_class_::
  value (A::table_name, "\"customer_id_customer_id\"", 0, 10);

  template <typename A>
  const typename query_columns< ::zango::northwind::customers, id_oracle, A >::customer_id_class_
  query_columns< ::zango::northwind::customers, id_oracle, A >::customer_id;

  template <typename A>
  const typename query_columns< ::zango::northwind::customers, id_oracle, A >::company_name_type_
  query_columns< ::zango::northwind::customers, id_oracle, A >::
  company_name (A::table_name, "\"company_name\"", 0, 512);

  template <typename A>
  const typename query_columns< ::zango::northwind::customers, id_oracle, A >::contact_name_type_
  query_columns< ::zango::northwind::customers, id_oracle, A >::
  contact_name (A::table_name, "\"contact_name\"", 0, 512);

  template <typename A>
  const typename query_columns< ::zango::northwind::customers, id_oracle, A >::contact_title_type_
  query_columns< ::zango::northwind::customers, id_oracle, A >::
  contact_title (A::table_name, "\"contact_title\"", 0, 512);

  template <typename A>
  const typename query_columns< ::zango::northwind::customers, id_oracle, A >::address_type_
  query_columns< ::zango::northwind::customers, id_oracle, A >::
  address (A::table_name, "\"address\"", 0, 512);

  template <typename A>
  const typename query_columns< ::zango::northwind::customers, id_oracle, A >::city_type_
  query_columns< ::zango::northwind::customers, id_oracle, A >::
  city (A::table_name, "\"city\"", 0, 512);

  template <typename A>
  const typename query_columns< ::zango::northwind::customers, id_oracle, A >::region_type_
  query_columns< ::zango::northwind::customers, id_oracle, A >::
  region (A::table_name, "\"region\"", 0, 512);

  template <typename A>
  const typename query_columns< ::zango::northwind::customers, id_oracle, A >::postal_code_type_
  query_columns< ::zango::northwind::customers, id_oracle, A >::
  postal_code (A::table_name, "\"postal_code\"", 0, 512);

  template <typename A>
  const typename query_columns< ::zango::northwind::customers, id_oracle, A >::country_type_
  query_columns< ::zango::northwind::customers, id_oracle, A >::
  country (A::table_name, "\"country\"", 0, 512);

  template <typename A>
  const typename query_columns< ::zango::northwind::customers, id_oracle, A >::phone_type_
  query_columns< ::zango::northwind::customers, id_oracle, A >::
  phone (A::table_name, "\"phone\"", 0, 512);

  template <typename A>
  const typename query_columns< ::zango::northwind::customers, id_oracle, A >::fax_type_
  query_columns< ::zango::northwind::customers, id_oracle, A >::
  fax (A::table_name, "\"fax\"", 0, 512);

  template <typename A>
  struct pointer_query_columns< ::zango::northwind::customers, id_oracle, A >:
    query_columns< ::zango::northwind::customers, id_oracle, A >
  {
  };

  template <>
  class access::object_traits_impl< ::zango::northwind::customers, id_oracle >:
    public access::object_traits< ::zango::northwind::customers >
  {
    public:
    static const std::size_t batch = 1UL;

    struct id_image_type
    {
      composite_value_traits< ::zango::northwind::customer_id, id_oracle >::image_type id_value;

      std::size_t version;
    };

    struct image_type
    {
      // customer_id_
      //
      composite_value_traits< ::zango::northwind::customer_id, id_oracle >::image_type customer_id_value;

      // company_name_
      //
      char company_name_value[512];
      ub2 company_name_size;
      sb2 company_name_indicator;

      // contact_name_
      //
      char contact_name_value[512];
      ub2 contact_name_size;
      sb2 contact_name_indicator;

      // contact_title_
      //
      char contact_title_value[512];
      ub2 contact_title_size;
      sb2 contact_title_indicator;

      // address_
      //
      char address_value[512];
      ub2 address_size;
      sb2 address_indicator;

      // city_
      //
      char city_value[512];
      ub2 city_size;
      sb2 city_indicator;

      // region_
      //
      char region_value[512];
      ub2 region_size;
      sb2 region_indicator;

      // postal_code_
      //
      char postal_code_value[512];
      ub2 postal_code_size;
      sb2 postal_code_indicator;

      // country_
      //
      char country_value[512];
      ub2 country_size;
      sb2 country_indicator;

      // phone_
      //
      char phone_value[512];
      ub2 phone_size;
      sb2 phone_indicator;

      // fax_
      //
      char fax_value[512];
      ub2 fax_size;
      sb2 fax_indicator;

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

    static const std::size_t column_count = 11UL;
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

  // customers
  //
}

#include "zango/northwind/odb/customers-odb-oracle.ixx"

#include <odb/post.hxx>

#endif // ZANGO_NORTHWIND_ODB_CUSTOMERS_ODB_ORACLE_HXX
