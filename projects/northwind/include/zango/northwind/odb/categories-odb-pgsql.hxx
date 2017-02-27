// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#ifndef ZANGO_NORTHWIND_ODB_CATEGORIES_ODB_PGSQL_HXX
#define ZANGO_NORTHWIND_ODB_CATEGORIES_ODB_PGSQL_HXX

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

#include "zango/northwind/types/categories.hpp"

#include "zango/northwind/odb/category_id-odb-pgsql.hxx"

#include "zango/northwind/odb/categories-odb.hxx"

#include <odb/details/buffer.hxx>

#include <odb/pgsql/version.hxx>
#include <odb/pgsql/forward.hxx>
#include <odb/pgsql/binding.hxx>
#include <odb/pgsql/pgsql-types.hxx>
#include <odb/pgsql/query.hxx>

namespace odb
{
  // categories
  //
  template <typename A>
  struct query_columns< ::zango::northwind::categories, id_pgsql, A >
  {
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
      pgsql::query_column<
        pgsql::value_traits<
          int,
          pgsql::id_integer >::query_type,
        pgsql::id_integer >
      value_type_;

      static const value_type_ value;
    };

    static const category_id_class_ category_id;

    // category_name
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    category_name_type_;

    static const category_name_type_ category_name;

    // description
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::string,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    description_type_;

    static const description_type_ description;

    // picutre
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::std::vector< char >,
        pgsql::id_bytea >::query_type,
      pgsql::id_bytea >
    picutre_type_;

    static const picutre_type_ picutre;
  };

  template <typename A>
  const typename query_columns< ::zango::northwind::categories, id_pgsql, A >::category_id_class_::value_type_
  query_columns< ::zango::northwind::categories, id_pgsql, A >::category_id_class_::
  value (A::table_name, "\"category_id\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::categories, id_pgsql, A >::category_id_class_
  query_columns< ::zango::northwind::categories, id_pgsql, A >::category_id;

  template <typename A>
  const typename query_columns< ::zango::northwind::categories, id_pgsql, A >::category_name_type_
  query_columns< ::zango::northwind::categories, id_pgsql, A >::
  category_name (A::table_name, "\"CATEGORY_NAME\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::categories, id_pgsql, A >::description_type_
  query_columns< ::zango::northwind::categories, id_pgsql, A >::
  description (A::table_name, "\"DESCRIPTION\"", 0);

  template <typename A>
  const typename query_columns< ::zango::northwind::categories, id_pgsql, A >::picutre_type_
  query_columns< ::zango::northwind::categories, id_pgsql, A >::
  picutre (A::table_name, "\"PICUTRE\"", 0);

  template <typename A>
  struct pointer_query_columns< ::zango::northwind::categories, id_pgsql, A >:
    query_columns< ::zango::northwind::categories, id_pgsql, A >
  {
  };

  template <>
  class access::object_traits_impl< ::zango::northwind::categories, id_pgsql >:
    public access::object_traits< ::zango::northwind::categories >
  {
    public:
    struct id_image_type
    {
      composite_value_traits< ::zango::northwind::category_id, id_pgsql >::image_type id_value;

      std::size_t version;
    };

    struct image_type
    {
      // category_id_
      //
      composite_value_traits< ::zango::northwind::category_id, id_pgsql >::image_type category_id_value;

      // category_name_
      //
      details::buffer category_name_value;
      std::size_t category_name_size;
      bool category_name_null;

      // description_
      //
      details::buffer description_value;
      std::size_t description_size;
      bool description_null;

      // picutre_
      //
      details::buffer picutre_value;
      std::size_t picutre_size;
      bool picutre_null;

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

    static const std::size_t column_count = 4UL;
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

  // categories
  //
}

#include "zango/northwind/odb/categories-odb-pgsql.ixx"

#include <odb/post.hxx>

#endif // ZANGO_NORTHWIND_ODB_CATEGORIES_ODB_PGSQL_HXX
