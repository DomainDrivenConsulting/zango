// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

namespace odb
{
  // product_id
  //

  inline
  bool access::composite_value_traits< ::zango::northwind::product_id, id_oracle >::
  get_null (const image_type& i)
  {
    bool r (true);
    r = r && i.value_indicator == -1;
    return r;
  }

  inline
  void access::composite_value_traits< ::zango::northwind::product_id, id_oracle >::
  set_null (image_type& i,
            oracle::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace oracle;

    i.value_indicator = -1;
  }
}

