// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

#include "zango/northwind/odb/employee_id-odb-pgsql.hxx"

#include <cassert>
#include <cstring>  // std::memcpy

#include <odb/schema-catalog-impl.hxx>

#include <odb/pgsql/traits.hxx>
#include <odb/pgsql/database.hxx>
#include <odb/pgsql/transaction.hxx>
#include <odb/pgsql/connection.hxx>
#include <odb/pgsql/statement.hxx>
#include <odb/pgsql/statement-cache.hxx>
#include <odb/pgsql/container-statements.hxx>
#include <odb/pgsql/exceptions.hxx>

namespace odb
{
  // employee_id
  //

  bool access::composite_value_traits< ::zango::northwind::employee_id, id_pgsql >::
  grow (image_type& i,
        bool* t)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (t);

    bool grew (false);

    // value_
    //
    t[0UL] = 0;

    return grew;
  }

  void access::composite_value_traits< ::zango::northwind::employee_id, id_pgsql >::
  bind (pgsql::bind* b,
        image_type& i,
        pgsql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (b);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace pgsql;

    std::size_t n (0);
    ODB_POTENTIALLY_UNUSED (n);

    // value_
    //
    b[n].type = pgsql::bind::integer;
    b[n].buffer = &i.value_value;
    b[n].is_null = &i.value_null;
    n++;
  }

  bool access::composite_value_traits< ::zango::northwind::employee_id, id_pgsql >::
  init (image_type& i,
        const value_type& o,
        pgsql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace pgsql;

    bool grew (false);

    // value_
    //
    {
      int const& v =
        o.value ();

      bool is_null (false);
      pgsql::value_traits<
          int,
          pgsql::id_integer >::set_image (
        i.value_value, is_null, v);
      i.value_null = is_null;
    }

    return grew;
  }

  void access::composite_value_traits< ::zango::northwind::employee_id, id_pgsql >::
  init (value_type& o,
        const image_type&  i,
        database* db)
  {
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (db);

    // value_
    //
    {
      int v;

      pgsql::value_traits<
          int,
          pgsql::id_integer >::set_value (
        v,
        i.value_value,
        i.value_null);

      o.value (v);
    }
  }
}

#include <odb/post.hxx>
