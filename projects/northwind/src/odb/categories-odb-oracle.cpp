// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

#include "zango/northwind/odb/categories-odb-oracle.hxx"

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
  // categories
  //

  struct access::object_traits_impl< ::zango::northwind::categories, id_oracle >::extra_statement_cache_type
  {
    oracle::container_statements_impl< picutre_traits > picutre_;

    extra_statement_cache_type (
      oracle::connection& c,
      image_type&,
      id_image_type&,
      oracle::binding& id,
      oracle::binding&)
    : picutre_ (c, id)
    {
    }
  };

  // picutre_
  //

  const char access::object_traits_impl< ::zango::northwind::categories, id_oracle >::picutre_traits::
  select_statement[] =
  "SELECT "
  "\"northwind\".\"categories_picutre\".\"index\", "
  "\"northwind\".\"categories_picutre\".\"value\" "
  "FROM \"northwind\".\"categories_picutre\" "
  "WHERE \"northwind\".\"categories_picutre\".\"object_id_category_id\"=:1 ORDER BY \"northwind\".\"categories_picutre\".\"index\"";

  const char access::object_traits_impl< ::zango::northwind::categories, id_oracle >::picutre_traits::
  insert_statement[] =
  "INSERT INTO \"northwind\".\"categories_picutre\" "
  "(\"object_id_category_id\", "
  "\"index\", "
  "\"value\") "
  "VALUES "
  "(:1, :2, :3)";

  const char access::object_traits_impl< ::zango::northwind::categories, id_oracle >::picutre_traits::
  delete_statement[] =
  "DELETE FROM \"northwind\".\"categories_picutre\" "
  "WHERE \"object_id_category_id\"=:1";

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::picutre_traits::
  bind (oracle::bind* b,
        const oracle::bind* id,
        std::size_t id_size,
        data_image_type& d)
  {
    using namespace oracle;

    statement_kind sk (statement_select);
    ODB_POTENTIALLY_UNUSED (sk);

    size_t n (0);

    // object_id
    //
    if (id != 0)
      std::memcpy (&b[n], id, id_size * sizeof (id[0]));
    n += id_size;

    // index
    //
    b[n].type = oracle::bind::number;
    b[n].buffer = d.index_value;
    b[n].capacity = static_cast<ub4> (sizeof (d.index_value));
    b[n].size = &d.index_size;
    b[n].indicator = &d.index_indicator;
    n++;

    // value
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = d.value_value;
    b[n].capacity = static_cast<ub4> (sizeof (d.value_value));
    b[n].size = &d.value_size;
    b[n].indicator = &d.value_indicator;
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::picutre_traits::
  init (data_image_type& i,
        index_type* j,
        const value_type& v)
  {
    using namespace oracle;

    statement_kind sk (statement_insert);
    ODB_POTENTIALLY_UNUSED (sk);

    // index
    //
    if (j != 0)
    {
      bool is_null (false);
      std::size_t size (0);
      oracle::value_traits<
          index_type,
          oracle::id_big_int >::set_image (
        i.index_value,
        size,
        is_null,
        *j);
      i.index_indicator = is_null ? -1 : 0;
      i.index_size = static_cast<ub2> (size);
    }

    // value
    //
    {
      bool is_null (false);
      std::size_t size (0);
      oracle::value_traits<
          value_type,
          oracle::id_string >::set_image (
        i.value_value,
        sizeof (i.value_value),
        size,
        is_null,
        v);
      i.value_indicator = is_null ? -1 : 0;
      i.value_size = static_cast<ub2> (size);
    }
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::picutre_traits::
  init (index_type& j,
        value_type& v,
        const data_image_type& i,
        database* db)
  {
    ODB_POTENTIALLY_UNUSED (db);

    // index
    //
    {
      oracle::value_traits<
          index_type,
          oracle::id_big_int >::set_value (
        j,
        i.index_value,
        i.index_size,
        i.index_indicator == -1);
    }

    // value
    //
    {
      oracle::value_traits<
          value_type,
          oracle::id_string >::set_value (
        v,
        i.value_value,
        i.value_size,
        i.value_indicator == -1);
    }
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::picutre_traits::
  insert (index_type i, const value_type& v, void* d)
  {
    using namespace oracle;

    statements_type& sts (*static_cast< statements_type* > (d));
    data_image_type& di (sts.data_image ());

    init (di, &i, v);

    if (sts.data_binding_test_version ())
    {
      const binding& id (sts.id_binding ());
      bind (sts.data_bind (), id.bind, id.count, di);
      sts.data_binding_update_version ();
    }

    if (!sts.insert_statement ().execute ())
      throw object_already_persistent ();
  }

  bool access::object_traits_impl< ::zango::northwind::categories, id_oracle >::picutre_traits::
  select (index_type& i, value_type& v, void* d)
  {
    using namespace oracle;
    using oracle::select_statement;

    statements_type& sts (*static_cast< statements_type* > (d));
    data_image_type& di (sts.data_image ());

    init (i, v, di, &sts.connection ().database ());

    sts.select_statement ().stream_result ();

    select_statement& st (sts.select_statement ());
    select_statement::result r (st.fetch ());
    return r != select_statement::no_data;
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::picutre_traits::
  delete_ (void* d)
  {
    using namespace oracle;

    statements_type& sts (*static_cast< statements_type* > (d));
    sts.delete_statement ().execute ();
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::picutre_traits::
  persist (const container_type& c,
           statements_type& sts)
  {
    using namespace oracle;

    functions_type& fs (sts.functions ());
    fs.ordered_ = true;
    container_traits_type::persist (c, fs);
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::picutre_traits::
  load (container_type& c,
        statements_type& sts)
  {
    using namespace oracle;
    using oracle::select_statement;

    const binding& id (sts.id_binding ());

    if (sts.data_binding_test_version ())
    {
      bind (sts.data_bind (), id.bind, id.count, sts.data_image ());
      sts.data_binding_update_version ();
    }

    select_statement& st (sts.select_statement ());
    st.execute ();
    auto_result ar (st);
    select_statement::result r (st.fetch ());
    bool more (r != select_statement::no_data);

    functions_type& fs (sts.functions ());
    fs.ordered_ = true;
    container_traits_type::load (c, more, fs);
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::picutre_traits::
  update (const container_type& c,
          statements_type& sts)
  {
    using namespace oracle;

    functions_type& fs (sts.functions ());
    fs.ordered_ = true;
    container_traits_type::update (c, fs);
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::picutre_traits::
  erase (statements_type& sts)
  {
    using namespace oracle;

    functions_type& fs (sts.functions ());
    fs.ordered_ = true;
    container_traits_type::erase (fs);
  }

  access::object_traits_impl< ::zango::northwind::categories, id_oracle >::id_type
  access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
  id (const image_type& i)
  {
    oracle::database* db (0);
    ODB_POTENTIALLY_UNUSED (db);

    id_type id;
    {
      composite_value_traits< ::zango::northwind::category_id, id_oracle >::init (
        id,
        i.category_id_value,
        db);
    }

    return id;
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
  bind (oracle::bind* b,
        image_type& i,
        oracle::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace oracle;

    std::size_t n (0);

    // category_id_
    //
    if (sk != statement_update)
    {
      composite_value_traits< ::zango::northwind::category_id, id_oracle >::bind (
        b + n, i.category_id_value, sk);
      n += 1UL;
    }

    // category_name_
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = i.category_name_value;
    b[n].capacity = static_cast<ub4> (sizeof (i.category_name_value));
    b[n].size = &i.category_name_size;
    b[n].indicator = &i.category_name_indicator;
    n++;

    // description_
    //
    b[n].type = oracle::bind::string;
    b[n].buffer = i.description_value;
    b[n].capacity = static_cast<ub4> (sizeof (i.description_value));
    b[n].size = &i.description_size;
    b[n].indicator = &i.description_indicator;
    n++;
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
  bind (oracle::bind* b, id_image_type& i)
  {
    std::size_t n (0);
    oracle::statement_kind sk (oracle::statement_select);
    composite_value_traits< ::zango::northwind::category_id, id_oracle >::bind (
      b + n, i.id_value, sk);
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
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

    // category_id_
    //
    if (sk == statement_insert)
    {
      ::zango::northwind::category_id const& v =
        o.category_id ();

      composite_value_traits< ::zango::northwind::category_id, id_oracle >::init (
        i.category_id_value,
        v,
        sk);
    }

    // category_name_
    //
    {
      ::std::string const& v =
        o.category_name ();

      bool is_null (true);
      std::size_t size (0);
      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_image (
        i.category_name_value,
        sizeof (i.category_name_value),
        size,
        is_null,
        v);
      i.category_name_indicator = is_null ? -1 : 0;
      i.category_name_size = static_cast<ub2> (size);
    }

    // description_
    //
    {
      ::std::string const& v =
        o.description ();

      bool is_null (true);
      std::size_t size (0);
      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_image (
        i.description_value,
        sizeof (i.description_value),
        size,
        is_null,
        v);
      i.description_indicator = is_null ? -1 : 0;
      i.description_size = static_cast<ub2> (size);
    }
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
  init (object_type& o,
        const image_type& i,
        database* db)
  {
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (db);

    // category_id_
    //
    {
      ::zango::northwind::category_id& v =
        o.category_id ();

      composite_value_traits< ::zango::northwind::category_id, id_oracle >::init (
        v,
        i.category_id_value,
        db);
    }

    // category_name_
    //
    {
      ::std::string& v =
        o.category_name ();

      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_value (
        v,
        i.category_name_value,
        i.category_name_size,
        i.category_name_indicator == -1);
    }

    // description_
    //
    {
      ::std::string& v =
        o.description ();

      oracle::value_traits<
          ::std::string,
          oracle::id_string >::set_value (
        v,
        i.description_value,
        i.description_size,
        i.description_indicator == -1);
    }
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
  init (id_image_type& i, const id_type& id)
  {
    oracle::statement_kind sk (oracle::statement_select);
    {
      composite_value_traits< ::zango::northwind::category_id, id_oracle >::init (
        i.id_value,
        id,
        sk);
    }
  }

  const char access::object_traits_impl< ::zango::northwind::categories, id_oracle >::persist_statement[] =
  "INSERT INTO \"northwind\".\"categories\" "
  "(\"category_id_category_id\", "
  "\"category_name\", "
  "\"description\") "
  "VALUES "
  "(:1, :2, :3)";

  const char access::object_traits_impl< ::zango::northwind::categories, id_oracle >::find_statement[] =
  "SELECT "
  "\"northwind\".\"categories\".\"category_id_category_id\", "
  "\"northwind\".\"categories\".\"category_name\", "
  "\"northwind\".\"categories\".\"description\" "
  "FROM \"northwind\".\"categories\" "
  "WHERE \"northwind\".\"categories\".\"category_id_category_id\"=:1";

  const char access::object_traits_impl< ::zango::northwind::categories, id_oracle >::update_statement[] =
  "UPDATE \"northwind\".\"categories\" "
  "SET "
  "\"category_name\"=:1, "
  "\"description\"=:2 "
  "WHERE \"category_id_category_id\"=:3";

  const char access::object_traits_impl< ::zango::northwind::categories, id_oracle >::erase_statement[] =
  "DELETE FROM \"northwind\".\"categories\" "
  "WHERE \"category_id_category_id\"=:1";

  const char access::object_traits_impl< ::zango::northwind::categories, id_oracle >::query_statement[] =
  "SELECT "
  "\"northwind\".\"categories\".\"category_id_category_id\", "
  "\"northwind\".\"categories\".\"category_name\", "
  "\"northwind\".\"categories\".\"description\" "
  "FROM \"northwind\".\"categories\"";

  const char access::object_traits_impl< ::zango::northwind::categories, id_oracle >::erase_query_statement[] =
  "DELETE FROM \"northwind\".\"categories\"";

  const char access::object_traits_impl< ::zango::northwind::categories, id_oracle >::table_name[] =
  "\"northwind\".\"categories\"";

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
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

    id_image_type& i (sts.id_image ());
    init (i, obj.category_id ());

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    extra_statement_cache_type& esc (sts.extra_statement_cache ());

    // picutre_
    //
    {
      ::std::vector< char > const& v =
        obj.picutre ();

      picutre_traits::persist (
        v,
        esc.picutre_);
    }

    callback (db,
              obj,
              callback_event::post_persist);
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
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
      obj.category_id ());
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

    extra_statement_cache_type& esc (sts.extra_statement_cache ());

    // picutre_
    //
    {
      ::std::vector< char > const& v =
        obj.picutre ();

      picutre_traits::update (
        v,
        esc.picutre_);
    }

    callback (db, obj, callback_event::post_update);
    pointer_cache_traits::update (db, obj);
  }

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
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

    extra_statement_cache_type& esc (sts.extra_statement_cache ());

    // picutre_
    //
    picutre_traits::erase (
      esc.picutre_);

    if (sts.erase_statement ().execute () != 1)
      throw object_not_persistent ();

    pointer_cache_traits::erase (db, id);
  }

  access::object_traits_impl< ::zango::northwind::categories, id_oracle >::pointer_type
  access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
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

  bool access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
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

  bool access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
  reload (database& db, object_type& obj)
  {
    using namespace oracle;

    oracle::connection& conn (
      oracle::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    const id_type& id  (
      obj.category_id ());

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

  bool access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
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

  void access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
  load_ (statements_type& sts,
         object_type& obj,
         bool reload)
  {
    ODB_POTENTIALLY_UNUSED (reload);

    extra_statement_cache_type& esc (sts.extra_statement_cache ());

    // picutre_
    //
    {
      ::std::vector< char >& v =
        obj.picutre ();

      picutre_traits::load (
        v,
        esc.picutre_);
    }
  }

  result< access::object_traits_impl< ::zango::northwind::categories, id_oracle >::object_type >
  access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
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

  unsigned long long access::object_traits_impl< ::zango::northwind::categories, id_oracle >::
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
                      "    EXECUTE IMMEDIATE 'DROP TABLE \"northwind\".\"categories_picutre\" CASCADE CONSTRAINTS';\n"
                      "  EXCEPTION\n"
                      "    WHEN OTHERS THEN\n"
                      "      IF SQLCODE != -942 THEN RAISE; END IF;\n"
                      "  END;\n"
                      "END;");
          db.execute ("BEGIN\n"
                      "  BEGIN\n"
                      "    EXECUTE IMMEDIATE 'DROP TABLE \"northwind\".\"categories\" CASCADE CONSTRAINTS';\n"
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
          db.execute ("CREATE TABLE \"northwind\".\"categories\" (\n"
                      "  \"category_id_category_id\" NUMBER(10) NOT NULL PRIMARY KEY,\n"
                      "  \"category_name\" VARCHAR2(512) NULL,\n"
                      "  \"description\" VARCHAR2(512) NULL)");
          db.execute ("CREATE TABLE \"northwind\".\"categories_picutre\" (\n"
                      "  \"object_id_category_id\" NUMBER(10) NOT NULL,\n"
                      "  \"index\" NUMBER(20) NOT NULL,\n"
                      "  \"value\" CHAR(1) NOT NULL,\n"
                      "  CONSTRAINT \"categories_picutre_object_id_f\"\n"
                      "    FOREIGN KEY (\"object_id_category_id\")\n"
                      "    REFERENCES \"northwind\".\"categories\" (\"category_id_category_id\")\n"
                      "    ON DELETE CASCADE)");
          db.execute ("CREATE INDEX \"northwind\".\"categories_picutre_object_id_i\"\n"
                      "  ON \"northwind\".\"categories_picutre\" (\"object_id_category_id\")");
          db.execute ("CREATE INDEX \"northwind\".\"categories_picutre_index_i\"\n"
                      "  ON \"northwind\".\"categories_picutre\" (\"index\")");
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
