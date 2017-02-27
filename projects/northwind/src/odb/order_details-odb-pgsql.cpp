// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

#include "zango/northwind/odb/order_details-odb-pgsql.hxx"

#include <cassert>
#include <cstring>  // std::memcpy

#include <odb/schema-catalog-impl.hxx>

#include <odb/pgsql/traits.hxx>
#include <odb/pgsql/database.hxx>
#include <odb/pgsql/transaction.hxx>
#include <odb/pgsql/connection.hxx>
#include <odb/pgsql/statement.hxx>
#include <odb/pgsql/statement-cache.hxx>
#include <odb/pgsql/simple-object-statements.hxx>
#include <odb/pgsql/container-statements.hxx>
#include <odb/pgsql/exceptions.hxx>
#include <odb/pgsql/simple-object-result.hxx>

namespace odb
{
  // order_details
  //

  const char access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  persist_statement_name[] = "persist_zango_northwind_order_details";

  const char access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  find_statement_name[] = "find_zango_northwind_order_details";

  const char access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  update_statement_name[] = "update_zango_northwind_order_details";

  const char access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  erase_statement_name[] = "erase_zango_northwind_order_details";

  const char access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  query_statement_name[] = "query_zango_northwind_order_details";

  const char access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  erase_query_statement_name[] = "erase_query_zango_northwind_order_details";

  const unsigned int access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  persist_statement_types[] =
  {
    pgsql::int4_oid,
    pgsql::int4_oid,
    pgsql::float8_oid,
    pgsql::int4_oid,
    pgsql::float8_oid
  };

  const unsigned int access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  find_statement_types[] =
  {
    pgsql::int4_oid,
    pgsql::int4_oid
  };

  const unsigned int access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  update_statement_types[] =
  {
    pgsql::float8_oid,
    pgsql::int4_oid,
    pgsql::float8_oid,
    pgsql::int4_oid,
    pgsql::int4_oid
  };

  struct access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::extra_statement_cache_type
  {
    extra_statement_cache_type (
      pgsql::connection&,
      image_type&,
      id_image_type&,
      pgsql::binding&,
      pgsql::binding&,
      pgsql::native_binding&,
      const unsigned int*)
    {
    }
  };

  access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::id_type
  access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  id (const image_type& i)
  {
    pgsql::database* db (0);
    ODB_POTENTIALLY_UNUSED (db);

    id_type id;
    {
      composite_value_traits< ::zango::northwind::order_details_key, id_pgsql >::init (
        id,
        i.order_details_key_value,
        db);
    }

    return id;
  }

  bool access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  grow (image_type& i,
        bool* t)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (t);

    bool grew (false);

    // order_details_key_
    //
    if (composite_value_traits< ::zango::northwind::order_details_key, id_pgsql >::grow (
          i.order_details_key_value, t + 0UL))
      grew = true;

    // unit_price_
    //
    t[2UL] = 0;

    // quantity_
    //
    t[3UL] = 0;

    // discount_
    //
    t[4UL] = 0;

    return grew;
  }

  void access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  bind (pgsql::bind* b,
        image_type& i,
        pgsql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace pgsql;

    std::size_t n (0);

    // order_details_key_
    //
    if (sk != statement_update)
    {
      composite_value_traits< ::zango::northwind::order_details_key, id_pgsql >::bind (
        b + n, i.order_details_key_value, sk);
      n += 2UL;
    }

    // unit_price_
    //
    b[n].type = pgsql::bind::double_;
    b[n].buffer = &i.unit_price_value;
    b[n].is_null = &i.unit_price_null;
    n++;

    // quantity_
    //
    b[n].type = pgsql::bind::integer;
    b[n].buffer = &i.quantity_value;
    b[n].is_null = &i.quantity_null;
    n++;

    // discount_
    //
    b[n].type = pgsql::bind::double_;
    b[n].buffer = &i.discount_value;
    b[n].is_null = &i.discount_null;
    n++;
  }

  void access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  bind (pgsql::bind* b, id_image_type& i)
  {
    std::size_t n (0);
    pgsql::statement_kind sk (pgsql::statement_select);
    composite_value_traits< ::zango::northwind::order_details_key, id_pgsql >::bind (
      b + n, i.id_value, sk);
  }

  bool access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  init (image_type& i,
        const object_type& o,
        pgsql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace pgsql;

    bool grew (false);

    // order_details_key_
    //
    if (sk == statement_insert)
    {
      ::zango::northwind::order_details_key const& v =
        o.order_details_key ();

      composite_value_traits< ::zango::northwind::order_details_key, id_pgsql >::init (
        i.order_details_key_value,
        v,
        sk);
    }

    // unit_price_
    //
    {
      double const& v =
        o.unit_price ();

      bool is_null (false);
      pgsql::value_traits<
          double,
          pgsql::id_double >::set_image (
        i.unit_price_value, is_null, v);
      i.unit_price_null = is_null;
    }

    // quantity_
    //
    {
      int const& v =
        o.quantity ();

      bool is_null (false);
      pgsql::value_traits<
          int,
          pgsql::id_integer >::set_image (
        i.quantity_value, is_null, v);
      i.quantity_null = is_null;
    }

    // discount_
    //
    {
      double const& v =
        o.discount ();

      bool is_null (false);
      pgsql::value_traits<
          double,
          pgsql::id_double >::set_image (
        i.discount_value, is_null, v);
      i.discount_null = is_null;
    }

    return grew;
  }

  void access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  init (object_type& o,
        const image_type& i,
        database* db)
  {
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (db);

    // order_details_key_
    //
    {
      ::zango::northwind::order_details_key& v =
        o.order_details_key ();

      composite_value_traits< ::zango::northwind::order_details_key, id_pgsql >::init (
        v,
        i.order_details_key_value,
        db);
    }

    // unit_price_
    //
    {
      double v;

      pgsql::value_traits<
          double,
          pgsql::id_double >::set_value (
        v,
        i.unit_price_value,
        i.unit_price_null);

      o.unit_price (v);
    }

    // quantity_
    //
    {
      int v;

      pgsql::value_traits<
          int,
          pgsql::id_integer >::set_value (
        v,
        i.quantity_value,
        i.quantity_null);

      o.quantity (v);
    }

    // discount_
    //
    {
      double v;

      pgsql::value_traits<
          double,
          pgsql::id_double >::set_value (
        v,
        i.discount_value,
        i.discount_null);

      o.discount (v);
    }
  }

  void access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  init (id_image_type& i, const id_type& id)
  {
    pgsql::statement_kind sk (pgsql::statement_select);
    {
      composite_value_traits< ::zango::northwind::order_details_key, id_pgsql >::init (
        i.id_value,
        id,
        sk);
    }
  }

  const char access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::persist_statement[] =
  "INSERT INTO \"northwind\".\"order_details\" "
  "(\"product_id\", "
  "\"order_id\", "
  "\"unit_price\", "
  "\"quantity\", "
  "\"discount\") "
  "VALUES "
  "($1, $2, $3, $4, $5)";

  const char access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::find_statement[] =
  "SELECT "
  "\"northwind\".\"order_details\".\"product_id\", "
  "\"northwind\".\"order_details\".\"order_id\", "
  "\"northwind\".\"order_details\".\"unit_price\", "
  "\"northwind\".\"order_details\".\"quantity\", "
  "\"northwind\".\"order_details\".\"discount\" "
  "FROM \"northwind\".\"order_details\" "
  "WHERE \"northwind\".\"order_details\".\"product_id\"=$1 AND \"northwind\".\"order_details\".\"order_id\"=$2";

  const char access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::update_statement[] =
  "UPDATE \"northwind\".\"order_details\" "
  "SET "
  "\"unit_price\"=$1, "
  "\"quantity\"=$2, "
  "\"discount\"=$3 "
  "WHERE \"product_id\"=$4 AND \"order_id\"=$5";

  const char access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::erase_statement[] =
  "DELETE FROM \"northwind\".\"order_details\" "
  "WHERE \"product_id\"=$1 AND \"order_id\"=$2";

  const char access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::query_statement[] =
  "SELECT "
  "\"northwind\".\"order_details\".\"product_id\", "
  "\"northwind\".\"order_details\".\"order_id\", "
  "\"northwind\".\"order_details\".\"unit_price\", "
  "\"northwind\".\"order_details\".\"quantity\", "
  "\"northwind\".\"order_details\".\"discount\" "
  "FROM \"northwind\".\"order_details\"";

  const char access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::erase_query_statement[] =
  "DELETE FROM \"northwind\".\"order_details\"";

  const char access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::table_name[] =
  "\"northwind\".\"order_details\"";

  void access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  persist (database& db, const object_type& obj)
  {
    ODB_POTENTIALLY_UNUSED (db);

    using namespace pgsql;

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    callback (db,
              obj,
              callback_event::pre_persist);

    image_type& im (sts.image ());
    binding& imb (sts.insert_image_binding ());

    if (init (im, obj, statement_insert))
      im.version++;

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

  void access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  update (database& db, const object_type& obj)
  {
    ODB_POTENTIALLY_UNUSED (db);

    using namespace pgsql;
    using pgsql::update_statement;

    callback (db, obj, callback_event::pre_update);

    pgsql::transaction& tr (pgsql::transaction::current ());
    pgsql::connection& conn (tr.connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    const id_type& id (
      obj.order_details_key ());
    id_image_type& idi (sts.id_image ());
    init (idi, id);

    image_type& im (sts.image ());
    if (init (im, obj, statement_update))
      im.version++;

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

  void access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  erase (database& db, const id_type& id)
  {
    using namespace pgsql;

    ODB_POTENTIALLY_UNUSED (db);

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());
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

  access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::pointer_type
  access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  find (database& db, const id_type& id)
  {
    using namespace pgsql;

    {
      pointer_type p (pointer_cache_traits::find (db, id));

      if (!pointer_traits::null_ptr (p))
        return p;
    }

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());
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

  bool access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  find (database& db, const id_type& id, object_type& obj)
  {
    using namespace pgsql;

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());
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
    load_ (sts, obj, false);
    sts.load_delayed (0);
    l.unlock ();
    callback (db, obj, callback_event::post_load);
    reference_cache_traits::load (pos);
    ig.release ();
    return true;
  }

  bool access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  reload (database& db, object_type& obj)
  {
    using namespace pgsql;

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    const id_type& id  (
      obj.order_details_key ());

    if (!find_ (sts, &id))
      return false;

    select_statement& st (sts.find_statement ());
    ODB_POTENTIALLY_UNUSED (st);

    callback (db, obj, callback_event::pre_load);
    init (obj, sts.image (), &db);
    load_ (sts, obj, true);
    sts.load_delayed (0);
    l.unlock ();
    callback (db, obj, callback_event::post_load);
    return true;
  }

  bool access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  find_ (statements_type& sts,
         const id_type* id)
  {
    using namespace pgsql;

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

  result< access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::object_type >
  access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  query (database&, const query_base_type& q)
  {
    using namespace pgsql;
    using odb::details::shared;
    using odb::details::shared_ptr;

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());

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
        sts.connection (),
        query_statement_name,
        text,
        false,
        true,
        q.parameter_types (),
        q.parameter_count (),
        q.parameters_binding (),
        imb));

    st->execute ();
    st->deallocate ();

    shared_ptr< odb::object_result_impl<object_type> > r (
      new (shared) pgsql::object_result_impl<object_type> (
        q, st, sts, 0));

    return result<object_type> (r);
  }

  unsigned long long access::object_traits_impl< ::zango::northwind::order_details, id_pgsql >::
  erase_query (database&, const query_base_type& q)
  {
    using namespace pgsql;

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());

    std::string text (erase_query_statement);
    if (!q.empty ())
    {
      text += ' ';
      text += q.clause ();
    }

    q.init_parameters ();
    delete_statement st (
      conn,
      erase_query_statement_name,
      text,
      q.parameter_types (),
      q.parameter_count (),
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
          db.execute ("DROP TABLE IF EXISTS \"northwind\".\"order_details\" CASCADE");
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
          db.execute ("CREATE TABLE \"northwind\".\"order_details\" (\n"
                      "  \"product_id\" INTEGER NOT NULL,\n"
                      "  \"order_id\" INTEGER NOT NULL,\n"
                      "  \"unit_price\" DOUBLE PRECISION NOT NULL,\n"
                      "  \"quantity\" INTEGER NOT NULL,\n"
                      "  \"discount\" DOUBLE PRECISION NOT NULL,\n"
                      "  PRIMARY KEY (\"product_id\",\n"
                      "               \"order_id\"))");
          return false;
        }
      }
    }

    return false;
  }

  static const schema_catalog_create_entry
  create_schema_entry_ (
    id_pgsql,
    "",
    &create_schema);
}

#include <odb/post.hxx>
