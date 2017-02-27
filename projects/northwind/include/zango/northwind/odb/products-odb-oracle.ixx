// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

namespace odb
{
  // products
  //

  inline
  void access::object_traits_impl< ::zango::northwind::products, id_oracle >::
  erase (database& db, const object_type& obj)
  {
    callback (db, obj, callback_event::pre_erase);
    erase (db, id (obj));
    callback (db, obj, callback_event::post_erase);
  }

  inline
  void access::object_traits_impl< ::zango::northwind::products, id_oracle >::
  load_ (statements_type& sts,
         object_type& obj,
         bool)
  {
    ODB_POTENTIALLY_UNUSED (sts);
    ODB_POTENTIALLY_UNUSED (obj);
  }
}

