// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

namespace odb
{
  // orders
  //

  inline
  access::object_traits< ::zango::northwind::orders >::id_type
  access::object_traits< ::zango::northwind::orders >::
  id (const object_type& o)
  {
    return o.order_id ();
  }

  inline
  void access::object_traits< ::zango::northwind::orders >::
  callback (database& db, object_type& x, callback_event e)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (x);
    ODB_POTENTIALLY_UNUSED (e);
  }

  inline
  void access::object_traits< ::zango::northwind::orders >::
  callback (database& db, const object_type& x, callback_event e)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (x);
    ODB_POTENTIALLY_UNUSED (e);
  }
}
