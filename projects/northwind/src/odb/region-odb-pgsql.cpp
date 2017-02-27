// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

#include "zango/northwind/odb/region-odb-pgsql.hxx"

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
  // region
  //

  const char access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  persist_statement_name[] = "PERSIST_ZANGO_NORTHWIND_REGION";

  const char access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  find_statement_name[] = "FIND_ZANGO_NORTHWIND_REGION";

  const char access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  update_statement_name[] = "UPDATE_ZANGO_NORTHWIND_REGION";

  const char access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  erase_statement_name[] = "ERASE_ZANGO_NORTHWIND_REGION";

  const char access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  query_statement_name[] = "QUERY_ZANGO_NORTHWIND_REGION";

  const char access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  erase_query_statement_name[] = "ERASE_QUERY_ZANGO_NORTHWIND_REGION";

  const unsigned int access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  persist_statement_types[] =
  {
    pgsql::int4_oid,
    pgsql::text_oid
  };

  const unsigned int access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  find_statement_types[] =
  {
    pgsql::int4_oid
  };

  const unsigned int access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  update_statement_types[] =
  {
    pgsql::text_oid,
    pgsql::int4_oid
  };

  struct access::object_traits_impl< ::zango::northwind::region, id_pgsql >::extra_statement_cache_type
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

  access::object_traits_impl< ::zango::northwind::region, id_pgsql >::id_type
  access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  id (const image_type& i)
  {
    pgsql::database* db (0);
    ODB_POTENTIALLY_UNUSED (db);

    id_type id;
    {
      composite_value_traits< ::zango::northwind::region_id, id_pgsql >::init (
        id,
        i.region_id_value,
        db);
    }

    return id;
  }

  bool access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  grow (image_type& i,
        bool* t)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (t);

    bool grew (false);

    // region_id_
    //
    if (composite_value_traits< ::zango::northwind::region_id, id_pgsql >::grow (
          i.region_id_value, t + 0UL))
      grew = true;

    // region_description_
    //
    if (t[1UL])
    {
      i.region_description_value.capacity (i.region_description_size);
      grew = true;
    }

    return grew;
  }

  void access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  bind (pgsql::bind* b,
        image_type& i,
        pgsql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace pgsql;

    std::size_t n (0);

    // region_id_
    //
    if (sk != statement_update)
    {
      composite_value_traits< ::zango::northwind::region_id, id_pgsql >::bind (
        b + n, i.region_id_value, sk);
      n += 1UL;
    }

    // region_description_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.region_description_value.data ();
    b[n].capacity = i.region_description_value.capacity ();
    b[n].size = &i.region_description_size;
    b[n].is_null = &i.region_description_null;
    n++;
  }

  void access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  bind (pgsql::bind* b, id_image_type& i)
  {
    std::size_t n (0);
    pgsql::statement_kind sk (pgsql::statement_select);
    composite_value_traits< ::zango::northwind::region_id, id_pgsql >::bind (
      b + n, i.id_value, sk);
  }

  bool access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  init (image_type& i,
        const object_type& o,
        pgsql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace pgsql;

    bool grew (false);

    // region_id_
    //
    if (sk == statement_insert)
    {
      ::zango::northwind::region_id const& v =
        o.region_id ();

      composite_value_traits< ::zango::northwind::region_id, id_pgsql >::init (
        i.region_id_value,
        v,
        sk);
    }

    // region_description_
    //
    {
      ::std::string const& v =
        o.region_description ();

      bool is_null (false);
      std::size_t size (0);
      std::size_t cap (i.region_description_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.region_description_value,
        size,
        is_null,
        v);
      i.region_description_null = is_null;
      i.region_description_size = size;
      grew = grew || (cap != i.region_description_value.capacity ());
    }

    return grew;
  }

  void access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  init (object_type& o,
        const image_type& i,
        database* db)
  {
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (db);

    // region_id_
    //
    {
      ::zango::northwind::region_id& v =
        o.region_id ();

      composite_value_traits< ::zango::northwind::region_id, id_pgsql >::init (
        v,
        i.region_id_value,
        db);
    }

    // region_description_
    //
    {
      ::std::string& v =
        o.region_description ();

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.region_description_value,
        i.region_description_size,
        i.region_description_null);
    }
  }

  void access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  init (id_image_type& i, const id_type& id)
  {
    pgsql::statement_kind sk (pgsql::statement_select);
    {
      composite_value_traits< ::zango::northwind::region_id, id_pgsql >::init (
        i.id_value,
        id,
        sk);
    }
  }

  const char access::object_traits_impl< ::zango::northwind::region, id_pgsql >::persist_statement[] =
  "INSERT INTO \"NORTHWIND\".\"REGION\" "
  "(\"region_id\", "
  "\"REGION_DESCRIPTION\") "
  "VALUES "
  "($1, $2)";

  const char access::object_traits_impl< ::zango::northwind::region, id_pgsql >::find_statement[] =
  "SELECT "
  "\"NORTHWIND\".\"REGION\".\"region_id\", "
  "\"NORTHWIND\".\"REGION\".\"REGION_DESCRIPTION\" "
  "FROM \"NORTHWIND\".\"REGION\" "
  "WHERE \"NORTHWIND\".\"REGION\".\"region_id\"=$1";

  const char access::object_traits_impl< ::zango::northwind::region, id_pgsql >::update_statement[] =
  "UPDATE \"NORTHWIND\".\"REGION\" "
  "SET "
  "\"REGION_DESCRIPTION\"=$1 "
  "WHERE \"region_id\"=$2";

  const char access::object_traits_impl< ::zango::northwind::region, id_pgsql >::erase_statement[] =
  "DELETE FROM \"NORTHWIND\".\"REGION\" "
  "WHERE \"region_id\"=$1";

  const char access::object_traits_impl< ::zango::northwind::region, id_pgsql >::query_statement[] =
  "SELECT "
  "\"NORTHWIND\".\"REGION\".\"region_id\", "
  "\"NORTHWIND\".\"REGION\".\"REGION_DESCRIPTION\" "
  "FROM \"NORTHWIND\".\"REGION\"";

  const char access::object_traits_impl< ::zango::northwind::region, id_pgsql >::erase_query_statement[] =
  "DELETE FROM \"NORTHWIND\".\"REGION\"";

  const char access::object_traits_impl< ::zango::northwind::region, id_pgsql >::table_name[] =
  "\"NORTHWIND\".\"REGION\"";

  void access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
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

  void access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
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
      obj.region_id ());
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

  void access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
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

  access::object_traits_impl< ::zango::northwind::region, id_pgsql >::pointer_type
  access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
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

  bool access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
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

  bool access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
  reload (database& db, object_type& obj)
  {
    using namespace pgsql;

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    const id_type& id  (
      obj.region_id ());

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

  bool access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
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

    if (r == select_statement::truncated)
    {
      if (grow (im, sts.select_image_truncated ()))
        im.version++;

      if (im.version != sts.select_image_version ())
      {
        bind (imb.bind, im, statement_select);
        sts.select_image_version (im.version);
        imb.version++;
        st.refetch ();
      }
    }

    return r != select_statement::no_data;
  }

  result< access::object_traits_impl< ::zango::northwind::region, id_pgsql >::object_type >
  access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
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

  unsigned long long access::object_traits_impl< ::zango::northwind::region, id_pgsql >::
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
          db.execute ("DROP TABLE IF EXISTS \"NORTHWIND\".\"REGION\" CASCADE");
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
          db.execute ("CREATE TABLE \"NORTHWIND\".\"REGION\" (\n"
                      "  \"region_id\" INTEGER NOT NULL PRIMARY KEY,\n"
                      "  \"REGION_DESCRIPTION\" TEXT NOT NULL)");
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
