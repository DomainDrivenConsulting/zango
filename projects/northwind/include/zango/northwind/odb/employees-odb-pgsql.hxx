// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#ifndef ZANGO_NORTHWIND_ODB_EMPLOYEES_ODB_PGSQL_HXX
#define ZANGO_NORTHWIND_ODB_EMPLOYEES_ODB_PGSQL_HXX

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
#include <odb/boost/date-time/pgsql/gregorian-traits.hxx>
#include <odb/boost/date-time/pgsql/posix-time-traits.hxx>
#include <odb/boost/multi-index/container-traits.hxx>
#include <odb/boost/uuid/pgsql/uuid-traits.hxx>
//
// End prologue.

#include <odb/version.hxx>

#if (ODB_VERSION != 20400UL)
#error ODB runtime version mismatch
#endif

#include <odb/pre.hxx>

#include "zango/northwind/types/employees.hpp"

#include "zango/northwind/odb/employee_id-odb-pgsql.hxx"

#include "zango/northwind/odb/employees-odb.hxx"

#include <odb/details/buffer.hxx>

#include <odb/pgsql/version.hxx>
#include <odb/pgsql/forward.hxx>
#include <odb/pgsql/binding.hxx>
#include <odb/pgsql/pgsql-types.hxx>
#include <odb/pgsql/query.hxx>

namespace odb
{
  // employees
  //
  template <typename A>
  struct query_columns< ::zango::northwind::employees, id_pgsql, A >
  {
    // employee_id
    //
    struct employee_id_class_
    {
      employee_id_class_ ()
      {
      }

      // value
      //
      typedef
      pgsql::query_column<
        pgsql::value_traits<
          int,
          pgsql::id_integer >::query_type,
        pgsql::id_integer >
      value_type_;

      static const value_type_ value;
    };

    static const employee_id_class_ employee_id;

    // last_name
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    last_name_type_;

    static const last_name_type_ last_name;

    // first_name
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    first_name_type_;

    static const first_name_type_ first_name;

    // title
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    title_type_;

    static const title_type_ title;

    // title_of_courtesy
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    title_of_courtesy_type_;

    static const title_of_courtesy_type_ title_of_courtesy;

    // birth_date
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::boost::gregorian::date,
        pgsql::id_date >::query_type,
      pgsql::id_date >
    birth_date_type_;

    static const birth_date_type_ birth_date;

    // hire_date
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::boost::gregorian::date,
        pgsql::id_date >::query_type,
      pgsql::id_date >
    hire_date_type_;

    static const hire_date_type_ hire_date;

    // address
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    address_type_;

    static const address_type_ address;

    // city
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    city_type_;

    static const city_type_ city;

    // region
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    region_type_;

    static const region_type_ region;

    // postal_code
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    postal_code_type_;

    static const postal_code_type_ postal_code;

    // country
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    country_type_;

    static const country_type_ country;

    // home_phone
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    home_phone_type_;

    static const home_phone_type_ home_phone;

    // extension
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    extension_type_;

    static const extension_type_ extension;

    // photo
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::vector< char >,
        pgsql::id_bytea >::query_type,
      pgsql::id_bytea >
    photo_type_;

    static const photo_type_ photo;

    // notes
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    notes_type_;

    static const notes_type_ notes;

    // reports_to
    //
    struct reports_to_class_
    {
      reports_to_class_ ()
      {
      }

      // value
      //
      typedef
      pgsql::query_column<
        pgsql::value_traits<
          int,
          pgsql::id_integer >::query_type,
        pgsql::id_integer >
      value_type_;

      static const value_type_ value;
    };

    static const reports_to_class_ reports_to;

    // photo_path
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    photo_path_type_;

    static const photo_path_type_ photo_path;
  };

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::employee_id_class_::value_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::employee_id_class_::
  value (A::table_name, "\"EMPLOYEE_ID\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::employee_id_class_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::employee_id;

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::last_name_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  last_name (A::table_name, "\"LAST_NAME\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::first_name_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  first_name (A::table_name, "\"FIRST_NAME\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::title_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  title (A::table_name, "\"TITLE\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::title_of_courtesy_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  title_of_courtesy (A::table_name, "\"TITLE_OF_COURTESY\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::birth_date_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  birth_date (A::table_name, "\"BIRTH_DATE\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::hire_date_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  hire_date (A::table_name, "\"HIRE_DATE\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::address_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  address (A::table_name, "\"ADDRESS\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::city_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  city (A::table_name, "\"CITY\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::region_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  region (A::table_name, "\"REGION\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::postal_code_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  postal_code (A::table_name, "\"POSTAL_CODE\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::country_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  country (A::table_name, "\"COUNTRY\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::home_phone_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  home_phone (A::table_name, "\"HOME_PHONE\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::extension_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  extension (A::table_name, "\"EXTENSION\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::photo_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  photo (A::table_name, "\"PHOTO\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::notes_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  notes (A::table_name, "\"NOTES\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::reports_to_class_::value_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::reports_to_class_::
  value (A::table_name, "\"REPORTS_TO\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::reports_to_class_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::reports_to;

  template <typename A>
  const typename query_columns< ::zango::northwind::employees, id_pgsql, A >::photo_path_type_
  query_columns< ::zango::northwind::employees, id_pgsql, A >::
  photo_path (A::table_name, "\"PHOTO_PATH\"", 0);

  template <typename A>
  struct pointer_query_columns< ::zango::northwind::employees, id_pgsql, A >:
    query_columns< ::zango::northwind::employees, id_pgsql, A >
  {
  };

  template <>
  class access::object_traits_impl< ::zango::northwind::employees, id_pgsql >:
    public access::object_traits< ::zango::northwind::employees >
  {
    public:
    struct id_image_type
    {
      composite_value_traits< ::zango::northwind::employee_id, id_pgsql >::image_type id_value;

      std::size_t version;
    };

    struct image_type
    {
      // employee_id_
      //
      composite_value_traits< ::zango::northwind::employee_id, id_pgsql >::image_type employee_id_value;

      // last_name_
      //
      details::buffer last_name_value;
      std::size_t last_name_size;
      bool last_name_null;

      // first_name_
      //
      details::buffer first_name_value;
      std::size_t first_name_size;
      bool first_name_null;

      // title_
      //
      details::buffer title_value;
      std::size_t title_size;
      bool title_null;

      // title_of_courtesy_
      //
      details::buffer title_of_courtesy_value;
      std::size_t title_of_courtesy_size;
      bool title_of_courtesy_null;

      // birth_date_
      //
      int birth_date_value;
      bool birth_date_null;

      // hire_date_
      //
      int hire_date_value;
      bool hire_date_null;

      // address_
      //
      details::buffer address_value;
      std::size_t address_size;
      bool address_null;

      // city_
      //
      details::buffer city_value;
      std::size_t city_size;
      bool city_null;

      // region_
      //
      details::buffer region_value;
      std::size_t region_size;
      bool region_null;

      // postal_code_
      //
      details::buffer postal_code_value;
      std::size_t postal_code_size;
      bool postal_code_null;

      // country_
      //
      details::buffer country_value;
      std::size_t country_size;
      bool country_null;

      // home_phone_
      //
      details::buffer home_phone_value;
      std::size_t home_phone_size;
      bool home_phone_null;

      // extension_
      //
      details::buffer extension_value;
      std::size_t extension_size;
      bool extension_null;

      // photo_
      //
      details::buffer photo_value;
      std::size_t photo_size;
      bool photo_null;

      // notes_
      //
      details::buffer notes_value;
      std::size_t notes_size;
      bool notes_null;

      // reports_to_
      //
      composite_value_traits< ::zango::northwind::employee_id, id_pgsql >::image_type reports_to_value;

      // photo_path_
      //
      details::buffer photo_path_value;
      std::size_t photo_path_size;
      bool photo_path_null;

      std::size_t version;
    };

    struct extra_statement_cache_type;

    using object_traits<object_type>::id;

    static id_type
    id (const image_type&);

    static bool
    grow (image_type&,
          bool*);

    static void
    bind (pgsql::bind*,
          image_type&,
          pgsql::statement_kind);

    static void
    bind (pgsql::bind*, id_image_type&);

    static bool
    init (image_type&,
          const object_type&,
          pgsql::statement_kind);

    static void
    init (object_type&,
          const image_type&,
          database*);

    static void
    init (id_image_type&, const id_type&);

    typedef pgsql::object_statements<object_type> statements_type;

    typedef pgsql::query_base query_base_type;

    static const std::size_t column_count = 18UL;
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

    static const char persist_statement_name[];
    static const char find_statement_name[];
    static const char update_statement_name[];
    static const char erase_statement_name[];
    static const char query_statement_name[];
    static const char erase_query_statement_name[];

    static const unsigned int persist_statement_types[];
    static const unsigned int find_statement_types[];
    static const unsigned int update_statement_types[];

    public:
    static bool
    find_ (statements_type&,
           const id_type*);

    static void
    load_ (statements_type&,
           object_type&,
           bool reload);
  };

  // employees
  //
}

#include "zango/northwind/odb/employees-odb-pgsql.ixx"

#include <odb/post.hxx>

#endif // ZANGO_NORTHWIND_ODB_EMPLOYEES_ODB_PGSQL_HXX
