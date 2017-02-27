// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

namespace odb
{
  // employee_territories_key
  //

  inline
  bool access::composite_value_traits< ::zango::northwind::employee_territories_key, id_oracle >::
  get_null (const image_type& i)
  {
    bool r (true);
    r = r && composite_value_traits< ::zango::northwind::employee_id, id_oracle >::get_null (i.employee_id_value);
    r = r && composite_value_traits< ::zango::northwind::territory_id, id_oracle >::get_null (i.territory_id_value);
    return r;
  }

  inline
  void access::composite_value_traits< ::zango::northwind::employee_territories_key, id_oracle >::
  set_null (image_type& i,
            oracle::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace oracle;

    composite_value_traits< ::zango::northwind::employee_id, id_oracle >::set_null (i.employee_id_value, sk);
    composite_value_traits< ::zango::northwind::territory_id, id_oracle >::set_null (i.territory_id_value, sk);
  }
}

