// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

namespace odb
{
  // employee_territories
  //

  inline
  access::object_traits< ::zango::northwind::employee_territories >::id_type
  access::object_traits< ::zango::northwind::employee_territories >::
  id (const object_type& o)
  {
    return o.employee_territories_key ();
  }

  inline
  void access::object_traits< ::zango::northwind::employee_territories >::
  callback (database& db, object_type& x, callback_event e)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (x);
    ODB_POTENTIALLY_UNUSED (e);
  }

  inline
  void access::object_traits< ::zango::northwind::employee_territories >::
  callback (database& db, const object_type& x, callback_event e)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (x);
    ODB_POTENTIALLY_UNUSED (e);
  }
}
