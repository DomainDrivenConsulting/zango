// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

namespace odb
{
  // order_details_key
  //

  inline
  bool access::composite_value_traits< ::zango::northwind::order_details_key, id_pgsql >::
  get_null (const image_type& i)
  {
    bool r (true);
    r = r && composite_value_traits< ::zango::northwind::order_id, id_pgsql >::get_null (i.order_id_value);
    r = r && composite_value_traits< ::zango::northwind::product_id, id_pgsql >::get_null (i.product_id_value);
    return r;
  }

  inline
  void access::composite_value_traits< ::zango::northwind::order_details_key, id_pgsql >::
  set_null (image_type& i,
            pgsql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace pgsql;

    composite_value_traits< ::zango::northwind::order_id, id_pgsql >::set_null (i.order_id_value, sk);
    composite_value_traits< ::zango::northwind::product_id, id_pgsql >::set_null (i.product_id_value, sk);
  }
}

