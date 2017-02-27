// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

#include "zango/northwind/odb/customer_customer_demo_key-odb-pgsql.hxx"

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
  // customer_customer_demo_key
  //

  bool access::composite_value_traits< ::zango::northwind::customer_customer_demo_key, id_pgsql >::
  grow (image_type& i,
        bool* t)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (t);

    bool grew (false);

    // customer_id_
    //
    if (composite_value_traits< ::zango::northwind::customer_id, id_pgsql >::grow (
          i.customer_id_value, t + 0UL))
      grew = true;

    // customer_type_
    //
    if (composite_value_traits< ::zango::northwind::customer_type_id, id_pgsql >::grow (
          i.customer_type_value, t + 1UL))
      grew = true;

    return grew;
  }

  void access::composite_value_traits< ::zango::northwind::customer_customer_demo_key, id_pgsql >::
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

    // customer_id_
    //
    composite_value_traits< ::zango::northwind::customer_id, id_pgsql >::bind (
      b + n, i.customer_id_value, sk);
    n += 1UL;

    // customer_type_
    //
    composite_value_traits< ::zango::northwind::customer_type_id, id_pgsql >::bind (
      b + n, i.customer_type_value, sk);
    n += 1UL;
  }

  bool access::composite_value_traits< ::zango::northwind::customer_customer_demo_key, id_pgsql >::
  init (image_type& i,
        const value_type& o,
        pgsql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace pgsql;

    bool grew (false);

    // customer_id_
    //
    {
      ::zango::northwind::customer_id const& v =
        o.customer_id ();

      composite_value_traits< ::zango::northwind::customer_id, id_pgsql >::init (
        i.customer_id_value,
        v,
        sk);
    }

    // customer_type_
    //
    {
      ::zango::northwind::customer_type_id const& v =
        o.customer_type ();

      if (composite_value_traits< ::zango::northwind::customer_type_id, id_pgsql >::init (
            i.customer_type_value,
            v,
            sk))
        grew = true;
    }

    return grew;
  }

  void access::composite_value_traits< ::zango::northwind::customer_customer_demo_key, id_pgsql >::
  init (value_type& o,
        const image_type&  i,
        database* db)
  {
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (db);

    // customer_id_
    //
    {
      ::zango::northwind::customer_id& v =
        o.customer_id ();

      composite_value_traits< ::zango::northwind::customer_id, id_pgsql >::init (
        v,
        i.customer_id_value,
        db);
    }

    // customer_type_
    //
    {
      ::zango::northwind::customer_type_id& v =
        o.customer_type ();

      composite_value_traits< ::zango::northwind::customer_type_id, id_pgsql >::init (
        v,
        i.customer_type_value,
        db);
    }
  }
}

#include <odb/post.hxx>
