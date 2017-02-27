// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

#include "zango/northwind/odb/customer_customer_demo_key-odb-oracle.hxx"

#include <cassert>
#include <cstring>  // std::memcpy

#include <odb/schema-catalog-impl.hxx>

#include <odb/oracle/traits.hxx>
#include <odb/oracle/database.hxx>
#include <odb/oracle/transaction.hxx>
#include <odb/oracle/connection.hxx>
#include <odb/oracle/statement.hxx>
#include <odb/oracle/statement-cache.hxx>
#include <odb/oracle/container-statements.hxx>
#include <odb/oracle/exceptions.hxx>

namespace odb
{
  // customer_customer_demo_key
  //

  void access::composite_value_traits< ::zango::northwind::customer_customer_demo_key, id_oracle >::
  bind (oracle::bind* b,
        image_type& i,
        oracle::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (b);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace oracle;

    std::size_t n (0);
    ODB_POTENTIALLY_UNUSED (n);

    // customer_id_
    //
    composite_value_traits< ::zango::northwind::customer_id, id_oracle >::bind (
      b + n, i.customer_id_value, sk);
    n += 1UL;

    // customer_type_id_
    //
    composite_value_traits< ::zango::northwind::customer_type_id, id_oracle >::bind (
      b + n, i.customer_type_id_value, sk);
    n += 1UL;
  }

  void access::composite_value_traits< ::zango::northwind::customer_customer_demo_key, id_oracle >::
  init (image_type& i,
        const value_type& o,
        oracle::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace oracle;

    // customer_id_
    //
    {
      ::zango::northwind::customer_id const& v =
        o.customer_id ();

      composite_value_traits< ::zango::northwind::customer_id, id_oracle >::init (
        i.customer_id_value,
        v,
        sk);
    }

    // customer_type_id_
    //
    {
      ::zango::northwind::customer_type_id const& v =
        o.customer_type_id ();

      composite_value_traits< ::zango::northwind::customer_type_id, id_oracle >::init (
        i.customer_type_id_value,
        v,
        sk);
    }
  }

  void access::composite_value_traits< ::zango::northwind::customer_customer_demo_key, id_oracle >::
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

      composite_value_traits< ::zango::northwind::customer_id, id_oracle >::init (
        v,
        i.customer_id_value,
        db);
    }

    // customer_type_id_
    //
    {
      ::zango::northwind::customer_type_id& v =
        o.customer_type_id ();

      composite_value_traits< ::zango::northwind::customer_type_id, id_oracle >::init (
        v,
        i.customer_type_id_value,
        db);
    }
  }
}

#include <odb/post.hxx>
