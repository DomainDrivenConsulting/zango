// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

#include "zango/northwind/odb/supplier-odb-oracle.hxx"

#include <cassert>
#include <cstring>  // std::memcpy

#include <odb/schema-catalog-impl.hxx>

#include <odb/oracle/traits.hxx>
#include <odb/oracle/database.hxx>
#include <odb/oracle/transaction.hxx>
#include <odb/oracle/connection.hxx>
#include <odb/oracle/statement.hxx>
#include <odb/oracle/statement-cache.hxx>
#include <odb/oracle/simple-object-statements.hxx>
#include <odb/oracle/container-statements.hxx>
#include <odb/oracle/exceptions.hxx>
#include <odb/oracle/simple-object-result.hxx>

namespace odb
{
  // supplier
  //

  struct access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::extra_statement_cache_type
  {
    extra_statement_cache_type (
      oracle::connection&,
      image_type&,
      id_image_type&,
      oracle::binding&,
      oracle::binding&)
    {
    }
  };

  access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::id_type
  access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  id (const image_type& i)
  {
    oracle::database* db (0);
    ODB_POTENTIALLY_UNUSED (db);

    id_type id;
    {
      composite_value_traits< ::zango::northwind::supplier_id, id_oracle >::init (
        id,
        i.supplier_id_value,
        db);
    }

    return id;
  }

  void access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  bind (oracle::bind* b,
        image_type& i,
        oracle::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace oracle;

    std::size_t n (0);

    // supplier_id_
    //
    if (sk != statement_update)
    {
      composite_value_traits< ::zango::northwind::supplier_id, id_oracle >::bind (
        b + n, i.supplier_id_value, sk);
      n += 1UL;
    }

    // company_name_
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = i.company_name_value;
    b[n].capacity = static_cast<ub4> (sizeof (i.company_name_value));
    b[n].size = &i.company_name_size;
    b[n].indicator = &i.company_name_indicator;
    n++;

    // contact_name_
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = i.contact_name_value;
    b[n].capacity = static_cast<ub4> (sizeof (i.contact_name_value));
    b[n].size = &i.contact_name_size;
    b[n].indicator = &i.contact_name_indicator;
    n++;

    // contact_title_
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = i.contact_title_value;
    b[n].capacity = static_cast<ub4> (sizeof (i.contact_title_value));
    b[n].size = &i.contact_title_size;
    b[n].indicator = &i.contact_title_indicator;
    n++;

    // address_
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = i.address_value;
    b[n].capacity = static_cast<ub4> (sizeof (i.address_value));
    b[n].size = &i.address_size;
    b[n].indicator = &i.address_indicator;
    n++;

    // city_
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = i.city_value;
    b[n].capacity = static_cast<ub4> (sizeof (i.city_value));
    b[n].size = &i.city_size;
    b[n].indicator = &i.city_indicator;
    n++;

    // region_
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = i.region_value;
    b[n].capacity = static_cast<ub4> (sizeof (i.region_value));
    b[n].size = &i.region_size;
    b[n].indicator = &i.region_indicator;
    n++;

    // postal_code_
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = i.postal_code_value;
    b[n].capacity = static_cast<ub4> (sizeof (i.postal_code_value));
    b[n].size = &i.postal_code_size;
    b[n].indicator = &i.postal_code_indicator;
    n++;

    // country_
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = i.country_value;
    b[n].capacity = static_cast<ub4> (sizeof (i.country_value));
    b[n].size = &i.country_size;
    b[n].indicator = &i.country_indicator;
    n++;

    // phone_
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = i.phone_value;
    b[n].capacity = static_cast<ub4> (sizeof (i.phone_value));
    b[n].size = &i.phone_size;
    b[n].indicator = &i.phone_indicator;
    n++;

    // fax_
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = i.fax_value;
    b[n].capacity = static_cast<ub4> (sizeof (i.fax_value));
    b[n].size = &i.fax_size;
    b[n].indicator = &i.fax_indicator;
    n++;

    // home_page_
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = i.home_page_value;
    b[n].capacity = static_cast<ub4> (sizeof (i.home_page_value));
    b[n].size = &i.home_page_size;
    b[n].indicator = &i.home_page_indicator;
    n++;
  }

  void access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  bind (oracle::bind* b, id_image_type& i)
  {
    std::size_t n (0);
    oracle::statement_kind sk (oracle::statement_select);
    composite_value_traits< ::zango::northwind::supplier_id, id_oracle >::bind (
      b + n, i.id_value, sk);
  }

  void access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  init (image_type& i,
        const object_type& o,
        oracle::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace oracle;

    if (i.change_callback_.callback != 0)
      (i.change_callback_.callback) (i.change_callback_.context);

    // supplier_id_
    //
    if (sk == statement_insert)
    {
      ::zango::northwind::supplier_id const& v =
        o.supplier_id ();

      composite_value_traits< ::zango::northwind::supplier_id, id_oracle >::init (
        i.supplier_id_value,
        v,
        sk);
    }

    // company_name_
    //
    {
      ::std::string const& v =
        o.company_name ();

      bool is_null (true);
      std::size_t size (0);
      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_image (
        i.company_name_value,
        sizeof (i.company_name_value),
        size,
        is_null,
        v);
      i.company_name_indicator = is_null ? -1 : 0;
      i.company_name_size = static_cast<ub2> (size);
    }

    // contact_name_
    //
    {
      ::std::string const& v =
        o.contact_name ();

      bool is_null (true);
      std::size_t size (0);
      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_image (
        i.contact_name_value,
        sizeof (i.contact_name_value),
        size,
        is_null,
        v);
      i.contact_name_indicator = is_null ? -1 : 0;
      i.contact_name_size = static_cast<ub2> (size);
    }

    // contact_title_
    //
    {
      ::std::string const& v =
        o.contact_title ();

      bool is_null (true);
      std::size_t size (0);
      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_image (
        i.contact_title_value,
        sizeof (i.contact_title_value),
        size,
        is_null,
        v);
      i.contact_title_indicator = is_null ? -1 : 0;
      i.contact_title_size = static_cast<ub2> (size);
    }

    // address_
    //
    {
      ::std::string const& v =
        o.address ();

      bool is_null (true);
      std::size_t size (0);
      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_image (
        i.address_value,
        sizeof (i.address_value),
        size,
        is_null,
        v);
      i.address_indicator = is_null ? -1 : 0;
      i.address_size = static_cast<ub2> (size);
    }

    // city_
    //
    {
      ::std::string const& v =
        o.city ();

      bool is_null (true);
      std::size_t size (0);
      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_image (
        i.city_value,
        sizeof (i.city_value),
        size,
        is_null,
        v);
      i.city_indicator = is_null ? -1 : 0;
      i.city_size = static_cast<ub2> (size);
    }

    // region_
    //
    {
      ::std::string const& v =
        o.region ();

      bool is_null (true);
      std::size_t size (0);
      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_image (
        i.region_value,
        sizeof (i.region_value),
        size,
        is_null,
        v);
      i.region_indicator = is_null ? -1 : 0;
      i.region_size = static_cast<ub2> (size);
    }

    // postal_code_
    //
    {
      ::std::string const& v =
        o.postal_code ();

      bool is_null (true);
      std::size_t size (0);
      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_image (
        i.postal_code_value,
        sizeof (i.postal_code_value),
        size,
        is_null,
        v);
      i.postal_code_indicator = is_null ? -1 : 0;
      i.postal_code_size = static_cast<ub2> (size);
    }

    // country_
    //
    {
      ::std::string const& v =
        o.country ();

      bool is_null (true);
      std::size_t size (0);
      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_image (
        i.country_value,
        sizeof (i.country_value),
        size,
        is_null,
        v);
      i.country_indicator = is_null ? -1 : 0;
      i.country_size = static_cast<ub2> (size);
    }

    // phone_
    //
    {
      ::std::string const& v =
        o.phone ();

      bool is_null (true);
      std::size_t size (0);
      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_image (
        i.phone_value,
        sizeof (i.phone_value),
        size,
        is_null,
        v);
      i.phone_indicator = is_null ? -1 : 0;
      i.phone_size = static_cast<ub2> (size);
    }

    // fax_
    //
    {
      ::std::string const& v =
        o.fax ();

      bool is_null (true);
      std::size_t size (0);
      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_image (
        i.fax_value,
        sizeof (i.fax_value),
        size,
        is_null,
        v);
      i.fax_indicator = is_null ? -1 : 0;
      i.fax_size = static_cast<ub2> (size);
    }

    // home_page_
    //
    {
      ::std::string const& v =
        o.home_page ();

      bool is_null (true);
      std::size_t size (0);
      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_image (
        i.home_page_value,
        sizeof (i.home_page_value),
        size,
        is_null,
        v);
      i.home_page_indicator = is_null ? -1 : 0;
      i.home_page_size = static_cast<ub2> (size);
    }
  }

  void access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  init (object_type& o,
        const image_type& i,
        database* db)
  {
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (db);

    // supplier_id_
    //
    {
      ::zango::northwind::supplier_id& v =
        o.supplier_id ();

      composite_value_traits< ::zango::northwind::supplier_id, id_oracle >::init (
        v,
        i.supplier_id_value,
        db);
    }

    // company_name_
    //
    {
      ::std::string& v =
        o.company_name ();

      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_value (
        v,
        i.company_name_value,
        i.company_name_size,
        i.company_name_indicator == -1);
    }

    // contact_name_
    //
    {
      ::std::string& v =
        o.contact_name ();

      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_value (
        v,
        i.contact_name_value,
        i.contact_name_size,
        i.contact_name_indicator == -1);
    }

    // contact_title_
    //
    {
      ::std::string& v =
        o.contact_title ();

      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_value (
        v,
        i.contact_title_value,
        i.contact_title_size,
        i.contact_title_indicator == -1);
    }

    // address_
    //
    {
      ::std::string& v =
        o.address ();

      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_value (
        v,
        i.address_value,
        i.address_size,
        i.address_indicator == -1);
    }

    // city_
    //
    {
      ::std::string& v =
        o.city ();

      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_value (
        v,
        i.city_value,
        i.city_size,
        i.city_indicator == -1);
    }

    // region_
    //
    {
      ::std::string& v =
        o.region ();

      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_value (
        v,
        i.region_value,
        i.region_size,
        i.region_indicator == -1);
    }

    // postal_code_
    //
    {
      ::std::string& v =
        o.postal_code ();

      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_value (
        v,
        i.postal_code_value,
        i.postal_code_size,
        i.postal_code_indicator == -1);
    }

    // country_
    //
    {
      ::std::string& v =
        o.country ();

      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_value (
        v,
        i.country_value,
        i.country_size,
        i.country_indicator == -1);
    }

    // phone_
    //
    {
      ::std::string& v =
        o.phone ();

      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_value (
        v,
        i.phone_value,
        i.phone_size,
        i.phone_indicator == -1);
    }

    // fax_
    //
    {
      ::std::string& v =
        o.fax ();

      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_value (
        v,
        i.fax_value,
        i.fax_size,
        i.fax_indicator == -1);
    }

    // home_page_
    //
    {
      ::std::string& v =
        o.home_page ();

      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_value (
        v,
        i.home_page_value,
        i.home_page_size,
        i.home_page_indicator == -1);
    }
  }

  void access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  init (id_image_type& i, const id_type& id)
  {
    oracle::statement_kind sk (oracle::statement_select);
    {
      composite_value_traits< ::zango::northwind::supplier_id, id_oracle >::init (
        i.id_value,
        id,
        sk);
    }
  }

  const char access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::persist_statement[] =
  "INSERT INTO \"northwind\".\"supplier\" "
  "(\"supplier_id_supplier_id\", "
  "\"company_name\", "
  "\"contact_name\", "
  "\"contact_title\", "
  "\"address\", "
  "\"city\", "
  "\"region\", "
  "\"postal_code\", "
  "\"country\", "
  "\"phone\", "
  "\"fax\", "
  "\"home_page\") "
  "VALUES "
  "(:1, :2, :3, :4, :5, :6, :7, :8, :9, :10, :11, :12)";

  const char access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::find_statement[] =
  "SELECT "
  "\"northwind\".\"supplier\".\"supplier_id_supplier_id\", "
  "\"northwind\".\"supplier\".\"company_name\", "
  "\"northwind\".\"supplier\".\"contact_name\", "
  "\"northwind\".\"supplier\".\"contact_title\", "
  "\"northwind\".\"supplier\".\"address\", "
  "\"northwind\".\"supplier\".\"city\", "
  "\"northwind\".\"supplier\".\"region\", "
  "\"northwind\".\"supplier\".\"postal_code\", "
  "\"northwind\".\"supplier\".\"country\", "
  "\"northwind\".\"supplier\".\"phone\", "
  "\"northwind\".\"supplier\".\"fax\", "
  "\"northwind\".\"supplier\".\"home_page\" "
  "FROM \"northwind\".\"supplier\" "
  "WHERE \"northwind\".\"supplier\".\"supplier_id_supplier_id\"=:1";

  const char access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::update_statement[] =
  "UPDATE \"northwind\".\"supplier\" "
  "SET "
  "\"company_name\"=:1, "
  "\"contact_name\"=:2, "
  "\"contact_title\"=:3, "
  "\"address\"=:4, "
  "\"city\"=:5, "
  "\"region\"=:6, "
  "\"postal_code\"=:7, "
  "\"country\"=:8, "
  "\"phone\"=:9, "
  "\"fax\"=:10, "
  "\"home_page\"=:11 "
  "WHERE \"supplier_id_supplier_id\"=:12";

  const char access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::erase_statement[] =
  "DELETE FROM \"northwind\".\"supplier\" "
  "WHERE \"supplier_id_supplier_id\"=:1";

  const char access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::query_statement[] =
  "SELECT "
  "\"northwind\".\"supplier\".\"supplier_id_supplier_id\", "
  "\"northwind\".\"supplier\".\"company_name\", "
  "\"northwind\".\"supplier\".\"contact_name\", "
  "\"northwind\".\"supplier\".\"contact_title\", "
  "\"northwind\".\"supplier\".\"address\", "
  "\"northwind\".\"supplier\".\"city\", "
  "\"northwind\".\"supplier\".\"region\", "
  "\"northwind\".\"supplier\".\"postal_code\", "
  "\"northwind\".\"supplier\".\"country\", "
  "\"northwind\".\"supplier\".\"phone\", "
  "\"northwind\".\"supplier\".\"fax\", "
  "\"northwind\".\"supplier\".\"home_page\" "
  "FROM \"northwind\".\"supplier\"";

  const char access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::erase_query_statement[] =
  "DELETE FROM \"northwind\".\"supplier\"";

  const char access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::table_name[] =
  "\"northwind\".\"supplier\"";

  void access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  persist (database& db, const object_type& obj)
  {
    ODB_POTENTIALLY_UNUSED (db);

    using namespace oracle;

    oracle::connection& conn (
      oracle::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    callback (db,
              obj,
              callback_event::pre_persist);

    image_type& im (sts.image ());
    binding& imb (sts.insert_image_binding ());

    init (im, obj, statement_insert);

    if (im.version != sts.insert_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_insert);
      sts.insert_image_version (im.version);
      imb.version++;
    }

    insert_statement& st (sts.persist_statement ());
    if (!st.execute ())
      throw object_already_persistent ();

    callback (db,
              obj,
              callback_event::post_persist);
  }

  void access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  update (database& db, const object_type& obj)
  {
    ODB_POTENTIALLY_UNUSED (db);

    using namespace oracle;
    using oracle::update_statement;

    callback (db, obj, callback_event::pre_update);

    oracle::transaction& tr (oracle::transaction::current ());
    oracle::connection& conn (tr.connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    const id_type& id (
      obj.supplier_id ());
    id_image_type& idi (sts.id_image ());
    init (idi, id);

    image_type& im (sts.image ());
    init (im, obj, statement_update);

    bool u (false);
    binding& imb (sts.update_image_binding ());
    if (im.version != sts.update_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_update);
      sts.update_image_version (im.version);
      imb.version++;
      u = true;
    }

    binding& idb (sts.id_image_binding ());
    if (idi.version != sts.update_id_image_version () ||
        idb.version == 0)
    {
      if (idi.version != sts.id_image_version () ||
          idb.version == 0)
      {
        bind (idb.bind, idi);
        sts.id_image_version (idi.version);
        idb.version++;
      }

      sts.update_id_image_version (idi.version);

      if (!u)
        imb.version++;
    }

    update_statement& st (sts.update_statement ());
    if (st.execute () == 0)
      throw object_not_persistent ();

    callback (db, obj, callback_event::post_update);
    pointer_cache_traits::update (db, obj);
  }

  void access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  erase (database& db, const id_type& id)
  {
    using namespace oracle;

    ODB_POTENTIALLY_UNUSED (db);

    oracle::connection& conn (
      oracle::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    id_image_type& i (sts.id_image ());
    init (i, id);

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    if (sts.erase_statement ().execute () != 1)
      throw object_not_persistent ();

    pointer_cache_traits::erase (db, id);
  }

  access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::pointer_type
  access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  find (database& db, const id_type& id)
  {
    using namespace oracle;

    {
      pointer_type p (pointer_cache_traits::find (db, id));

      if (!pointer_traits::null_ptr (p))
        return p;
    }

    oracle::connection& conn (
      oracle::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    if (l.locked ())
    {
      if (!find_ (sts, &id))
        return pointer_type ();
    }

    pointer_type p (
      access::object_factory<object_type, pointer_type>::create ());
    pointer_traits::guard pg (p);

    pointer_cache_traits::insert_guard ig (
      pointer_cache_traits::insert (db, id, p));

    object_type& obj (pointer_traits::get_ref (p));

    if (l.locked ())
    {
      select_statement& st (sts.find_statement ());
      ODB_POTENTIALLY_UNUSED (st);

      callback (db, obj, callback_event::pre_load);
      init (obj, sts.image (), &db);
      st.stream_result ();
      load_ (sts, obj, false);
      sts.load_delayed (0);
      l.unlock ();
      callback (db, obj, callback_event::post_load);
      pointer_cache_traits::load (ig.position ());
    }
    else
      sts.delay_load (id, obj, ig.position ());

    ig.release ();
    pg.release ();
    return p;
  }

  bool access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  find (database& db, const id_type& id, object_type& obj)
  {
    using namespace oracle;

    oracle::connection& conn (
      oracle::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    if (!find_ (sts, &id))
      return false;

    select_statement& st (sts.find_statement ());
    ODB_POTENTIALLY_UNUSED (st);

    reference_cache_traits::position_type pos (
      reference_cache_traits::insert (db, id, obj));
    reference_cache_traits::insert_guard ig (pos);

    callback (db, obj, callback_event::pre_load);
    init (obj, sts.image (), &db);
    st.stream_result ();
    load_ (sts, obj, false);
    sts.load_delayed (0);
    l.unlock ();
    callback (db, obj, callback_event::post_load);
    reference_cache_traits::load (pos);
    ig.release ();
    return true;
  }

  bool access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  reload (database& db, object_type& obj)
  {
    using namespace oracle;

    oracle::connection& conn (
      oracle::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    const id_type& id  (
      obj.supplier_id ());

    if (!find_ (sts, &id))
      return false;

    select_statement& st (sts.find_statement ());
    ODB_POTENTIALLY_UNUSED (st);

    callback (db, obj, callback_event::pre_load);
    init (obj, sts.image (), &db);
    st.stream_result ();
    load_ (sts, obj, true);
    sts.load_delayed (0);
    l.unlock ();
    callback (db, obj, callback_event::post_load);
    return true;
  }

  bool access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  find_ (statements_type& sts,
         const id_type* id)
  {
    using namespace oracle;

    id_image_type& i (sts.id_image ());
    init (i, *id);

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    image_type& im (sts.image ());
    binding& imb (sts.select_image_binding ());

    if (im.version != sts.select_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_select);
      sts.select_image_version (im.version);
      imb.version++;
    }

    select_statement& st (sts.find_statement ());

    st.execute ();
    auto_result ar (st);
    select_statement::result r (st.fetch ());

    return r != select_statement::no_data;
  }

  result< access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::object_type >
  access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  query (database&, const query_base_type& q)
  {
    using namespace oracle;
    using odb::details::shared;
    using odb::details::shared_ptr;

    oracle::connection& conn (
      oracle::transaction::current ().connection ());

    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    image_type& im (sts.image ());
    binding& imb (sts.select_image_binding ());

    if (im.version != sts.select_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_select);
      sts.select_image_version (im.version);
      imb.version++;
    }

    std::string text (query_statement);
    if (!q.empty ())
    {
      text += " ";
      text += q.clause ();
    }

    q.init_parameters ();
    shared_ptr<select_statement> st (
      new (shared) select_statement (
        conn,
        text,
        false,
        true,
        q.parameters_binding (),
        imb));

    st->execute ();

    shared_ptr< odb::object_result_impl<object_type> > r (
      new (shared) oracle::object_result_impl<object_type> (
        q, st, sts, 0));

    return result<object_type> (r);
  }

  unsigned long long access::object_traits_impl< ::zango::northwind::supplier, id_oracle >::
  erase_query (database&, const query_base_type& q)
  {
    using namespace oracle;

    oracle::connection& conn (
      oracle::transaction::current ().connection ());

    std::string text (erase_query_statement);
    if (!q.empty ())
    {
      text += ' ';
      text += q.clause ();
    }

    q.init_parameters ();
    delete_statement st (
      conn,
      text,
      q.parameters_binding ());

    return st.execute ();
  }
}

namespace odb
{
  static bool
  create_schema (database& db, unsigned short pass, bool drop)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (pass);
    ODB_POTENTIALLY_UNUSED (drop);

    if (drop)
    {
      switch (pass)
      {
        case 1:
        {
          return true;
        }
        case 2:
        {
          db.execute ("BEGIN\n"
                      "  BEGIN\n"
                      "    EXECUTE IMMEDIATE 'DROP TABLE \"northwind\".\"supplier\" CASCADE CONSTRAINTS';\n"
                      "  EXCEPTION\n"
                      "    WHEN OTHERS THEN\n"
                      "      IF SQLCODE != -942 THEN RAISE; END IF;\n"
                      "  END;\n"
                      "END;");
          return false;
        }
      }
    }
    else
    {
      switch (pass)
      {
        case 1:
        {
          db.execute ("CREATE TABLE \"northwind\".\"supplier\" (\n"
                      "  \"supplier_id_supplier_id\" NUMBER(10) NOT NULL PRIMARY KEY,\n"
                      "  \"company_name\" VARCHAR2(512) NULL,\n"
                      "  \"contact_name\" VARCHAR2(512) NULL,\n"
                      "  \"contact_title\" VARCHAR2(512) NULL,\n"
                      "  \"address\" VARCHAR2(512) NULL,\n"
                      "  \"city\" VARCHAR2(512) NULL,\n"
                      "  \"region\" VARCHAR2(512) NULL,\n"
                      "  \"postal_code\" VARCHAR2(512) NULL,\n"
                      "  \"country\" VARCHAR2(512) NULL,\n"
                      "  \"phone\" VARCHAR2(512) NULL,\n"
                      "  \"fax\" VARCHAR2(512) NULL,\n"
                      "  \"home_page\" VARCHAR2(512) NULL)");
          return false;
        }
      }
    }

    return false;
  }

  static const schema_catalog_create_entry
  create_schema_entry_ (
    id_oracle,
    "",
    &create_schema);
}

#include <odb/post.hxx>
