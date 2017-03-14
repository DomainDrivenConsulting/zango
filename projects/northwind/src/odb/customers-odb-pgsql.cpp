// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

#include "zango/northwind/odb/customers-odb-pgsql.hxx"

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
  // customers
  //

  const char access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  persist_statement_name[] = "PERSIST_ZANGO_NORTHWIND_CUSTOMERS";

  const char access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  find_statement_name[] = "FIND_ZANGO_NORTHWIND_CUSTOMERS";

  const char access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  update_statement_name[] = "UPDATE_ZANGO_NORTHWIND_CUSTOMERS";

  const char access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  erase_statement_name[] = "ERASE_ZANGO_NORTHWIND_CUSTOMERS";

  const char access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  query_statement_name[] = "QUERY_ZANGO_NORTHWIND_CUSTOMERS";

  const char access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  erase_query_statement_name[] = "ERASE_QUERY_ZANGO_NORTHWIND_CUSTOMERS";

  const unsigned int access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  persist_statement_types[] =
  {
    pgsql::int4_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid
  };

  const unsigned int access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  find_statement_types[] =
  {
    pgsql::int4_oid
  };

  const unsigned int access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  update_statement_types[] =
  {
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::text_oid,
    pgsql::int4_oid
  };

  struct access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::extra_statement_cache_type
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

  access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::id_type
  access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  id (const image_type& i)
  {
    pgsql::database* db (0);
    ODB_POTENTIALLY_UNUSED (db);

    id_type id;
    {
      composite_value_traits< ::zango::northwind::customer_id, id_pgsql >::init (
        id,
        i.customer_id_value,
        db);
    }

    return id;
  }

  bool access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  grow (image_type& i,
        bool* t)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (t);

    bool grew (false);

    // customer_id_
    //
    if (composite_value_traits< ::zango::northwind::customer_id, id_pgsql >::grow (
          i.customer_id_value, t + 0UL))
      grew = true;

    // company_name_
    //
    if (t[1UL])
    {
      i.company_name_value.capacity (i.company_name_size);
      grew = true;
    }

    // contact_name_
    //
    if (t[2UL])
    {
      i.contact_name_value.capacity (i.contact_name_size);
      grew = true;
    }

    // contact_title_
    //
    if (t[3UL])
    {
      i.contact_title_value.capacity (i.contact_title_size);
      grew = true;
    }

    // address_
    //
    if (t[4UL])
    {
      i.address_value.capacity (i.address_size);
      grew = true;
    }

    // city_
    //
    if (t[5UL])
    {
      i.city_value.capacity (i.city_size);
      grew = true;
    }

    // region_
    //
    if (t[6UL])
    {
      i.region_value.capacity (i.region_size);
      grew = true;
    }

    // postal_code_
    //
    if (t[7UL])
    {
      i.postal_code_value.capacity (i.postal_code_size);
      grew = true;
    }

    // country_
    //
    if (t[8UL])
    {
      i.country_value.capacity (i.country_size);
      grew = true;
    }

    // phone_
    //
    if (t[9UL])
    {
      i.phone_value.capacity (i.phone_size);
      grew = true;
    }

    // fax_
    //
    if (t[10UL])
    {
      i.fax_value.capacity (i.fax_size);
      grew = true;
    }

    return grew;
  }

  void access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  bind (pgsql::bind* b,
        image_type& i,
        pgsql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace pgsql;

    std::size_t n (0);

    // customer_id_
    //
    if (sk != statement_update)
    {
      composite_value_traits< ::zango::northwind::customer_id, id_pgsql >::bind (
        b + n, i.customer_id_value, sk);
      n += 1UL;
    }

    // company_name_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.company_name_value.data ();
    b[n].capacity = i.company_name_value.capacity ();
    b[n].size = &i.company_name_size;
    b[n].is_null = &i.company_name_null;
    n++;

    // contact_name_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.contact_name_value.data ();
    b[n].capacity = i.contact_name_value.capacity ();
    b[n].size = &i.contact_name_size;
    b[n].is_null = &i.contact_name_null;
    n++;

    // contact_title_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.contact_title_value.data ();
    b[n].capacity = i.contact_title_value.capacity ();
    b[n].size = &i.contact_title_size;
    b[n].is_null = &i.contact_title_null;
    n++;

    // address_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.address_value.data ();
    b[n].capacity = i.address_value.capacity ();
    b[n].size = &i.address_size;
    b[n].is_null = &i.address_null;
    n++;

    // city_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.city_value.data ();
    b[n].capacity = i.city_value.capacity ();
    b[n].size = &i.city_size;
    b[n].is_null = &i.city_null;
    n++;

    // region_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.region_value.data ();
    b[n].capacity = i.region_value.capacity ();
    b[n].size = &i.region_size;
    b[n].is_null = &i.region_null;
    n++;

    // postal_code_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.postal_code_value.data ();
    b[n].capacity = i.postal_code_value.capacity ();
    b[n].size = &i.postal_code_size;
    b[n].is_null = &i.postal_code_null;
    n++;

    // country_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.country_value.data ();
    b[n].capacity = i.country_value.capacity ();
    b[n].size = &i.country_size;
    b[n].is_null = &i.country_null;
    n++;

    // phone_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.phone_value.data ();
    b[n].capacity = i.phone_value.capacity ();
    b[n].size = &i.phone_size;
    b[n].is_null = &i.phone_null;
    n++;

    // fax_
    //
    b[n].type = pgsql::bind::text;
    b[n].buffer = i.fax_value.data ();
    b[n].capacity = i.fax_value.capacity ();
    b[n].size = &i.fax_size;
    b[n].is_null = &i.fax_null;
    n++;
  }

  void access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  bind (pgsql::bind* b, id_image_type& i)
  {
    std::size_t n (0);
    pgsql::statement_kind sk (pgsql::statement_select);
    composite_value_traits< ::zango::northwind::customer_id, id_pgsql >::bind (
      b + n, i.id_value, sk);
  }

  bool access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  init (image_type& i,
        const object_type& o,
        pgsql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace pgsql;

    bool grew (false);

    // customer_id_
    //
    if (sk == statement_insert)
    {
      ::zango::northwind::customer_id const& v =
        o.customer_id ();

      composite_value_traits< ::zango::northwind::customer_id, id_pgsql >::init (
        i.customer_id_value,
        v,
        sk);
    }

    // company_name_
    //
    {
      ::std::string const& v =
        o.company_name ();

      bool is_null (false);
      std::size_t size (0);
      std::size_t cap (i.company_name_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.company_name_value,
        size,
        is_null,
        v);
      i.company_name_null = is_null;
      i.company_name_size = size;
      grew = grew || (cap != i.company_name_value.capacity ());
    }

    // contact_name_
    //
    {
      ::std::string const& v =
        o.contact_name ();

      bool is_null (true);
      std::size_t size (0);
      std::size_t cap (i.contact_name_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.contact_name_value,
        size,
        is_null,
        v);
      i.contact_name_null = is_null;
      i.contact_name_size = size;
      grew = grew || (cap != i.contact_name_value.capacity ());
    }

    // contact_title_
    //
    {
      ::std::string const& v =
        o.contact_title ();

      bool is_null (true);
      std::size_t size (0);
      std::size_t cap (i.contact_title_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.contact_title_value,
        size,
        is_null,
        v);
      i.contact_title_null = is_null;
      i.contact_title_size = size;
      grew = grew || (cap != i.contact_title_value.capacity ());
    }

    // address_
    //
    {
      ::std::string const& v =
        o.address ();

      bool is_null (true);
      std::size_t size (0);
      std::size_t cap (i.address_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.address_value,
        size,
        is_null,
        v);
      i.address_null = is_null;
      i.address_size = size;
      grew = grew || (cap != i.address_value.capacity ());
    }

    // city_
    //
    {
      ::std::string const& v =
        o.city ();

      bool is_null (true);
      std::size_t size (0);
      std::size_t cap (i.city_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.city_value,
        size,
        is_null,
        v);
      i.city_null = is_null;
      i.city_size = size;
      grew = grew || (cap != i.city_value.capacity ());
    }

    // region_
    //
    {
      ::std::string const& v =
        o.region ();

      bool is_null (true);
      std::size_t size (0);
      std::size_t cap (i.region_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.region_value,
        size,
        is_null,
        v);
      i.region_null = is_null;
      i.region_size = size;
      grew = grew || (cap != i.region_value.capacity ());
    }

    // postal_code_
    //
    {
      ::std::string const& v =
        o.postal_code ();

      bool is_null (true);
      std::size_t size (0);
      std::size_t cap (i.postal_code_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.postal_code_value,
        size,
        is_null,
        v);
      i.postal_code_null = is_null;
      i.postal_code_size = size;
      grew = grew || (cap != i.postal_code_value.capacity ());
    }

    // country_
    //
    {
      ::std::string const& v =
        o.country ();

      bool is_null (true);
      std::size_t size (0);
      std::size_t cap (i.country_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.country_value,
        size,
        is_null,
        v);
      i.country_null = is_null;
      i.country_size = size;
      grew = grew || (cap != i.country_value.capacity ());
    }

    // phone_
    //
    {
      ::std::string const& v =
        o.phone ();

      bool is_null (true);
      std::size_t size (0);
      std::size_t cap (i.phone_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.phone_value,
        size,
        is_null,
        v);
      i.phone_null = is_null;
      i.phone_size = size;
      grew = grew || (cap != i.phone_value.capacity ());
    }

    // fax_
    //
    {
      ::std::string const& v =
        o.fax ();

      bool is_null (true);
      std::size_t size (0);
      std::size_t cap (i.fax_value.capacity ());
      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_image (
        i.fax_value,
        size,
        is_null,
        v);
      i.fax_null = is_null;
      i.fax_size = size;
      grew = grew || (cap != i.fax_value.capacity ());
    }

    return grew;
  }

  void access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  init (object_type& o,
        const image_type& i,
        database* db)
  {
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (db);

    // customer_id_
    //
    {
      ::zango::northwind::customer_id& v =
        o.customer_id ();

      composite_value_traits< ::zango::northwind::customer_id, id_pgsql >::init (
        v,
        i.customer_id_value,
        db);
    }

    // company_name_
    //
    {
      ::std::string& v =
        o.company_name ();

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.company_name_value,
        i.company_name_size,
        i.company_name_null);
    }

    // contact_name_
    //
    {
      ::std::string& v =
        o.contact_name ();

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.contact_name_value,
        i.contact_name_size,
        i.contact_name_null);
    }

    // contact_title_
    //
    {
      ::std::string& v =
        o.contact_title ();

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.contact_title_value,
        i.contact_title_size,
        i.contact_title_null);
    }

    // address_
    //
    {
      ::std::string& v =
        o.address ();

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.address_value,
        i.address_size,
        i.address_null);
    }

    // city_
    //
    {
      ::std::string& v =
        o.city ();

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.city_value,
        i.city_size,
        i.city_null);
    }

    // region_
    //
    {
      ::std::string& v =
        o.region ();

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.region_value,
        i.region_size,
        i.region_null);
    }

    // postal_code_
    //
    {
      ::std::string& v =
        o.postal_code ();

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.postal_code_value,
        i.postal_code_size,
        i.postal_code_null);
    }

    // country_
    //
    {
      ::std::string& v =
        o.country ();

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.country_value,
        i.country_size,
        i.country_null);
    }

    // phone_
    //
    {
      ::std::string& v =
        o.phone ();

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.phone_value,
        i.phone_size,
        i.phone_null);
    }

    // fax_
    //
    {
      ::std::string& v =
        o.fax ();

      pgsql::value_traits<
          ::std::string,
          pgsql::id_string >::set_value (
        v,
        i.fax_value,
        i.fax_size,
        i.fax_null);
    }
  }

  void access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  init (id_image_type& i, const id_type& id)
  {
    pgsql::statement_kind sk (pgsql::statement_select);
    {
      composite_value_traits< ::zango::northwind::customer_id, id_pgsql >::init (
        i.id_value,
        id,
        sk);
    }
  }

  const char access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::persist_statement[] =
  "INSERT INTO \"NORTHWIND\".\"CUSTOMERS\" "
  "(\"CUSTOMER_ID\", "
  "\"COMPANY_NAME\", "
  "\"CONTACT_NAME\", "
  "\"CONTACT_TITLE\", "
  "\"ADDRESS\", "
  "\"CITY\", "
  "\"REGION\", "
  "\"POSTAL_CODE\", "
  "\"COUNTRY\", "
  "\"PHONE\", "
  "\"FAX\") "
  "VALUES "
  "($1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11)";

  const char access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::find_statement[] =
  "SELECT "
  "\"NORTHWIND\".\"CUSTOMERS\".\"CUSTOMER_ID\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"COMPANY_NAME\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"CONTACT_NAME\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"CONTACT_TITLE\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"ADDRESS\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"CITY\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"REGION\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"POSTAL_CODE\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"COUNTRY\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"PHONE\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"FAX\" "
  "FROM \"NORTHWIND\".\"CUSTOMERS\" "
  "WHERE \"NORTHWIND\".\"CUSTOMERS\".\"CUSTOMER_ID\"=$1";

  const char access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::update_statement[] =
  "UPDATE \"NORTHWIND\".\"CUSTOMERS\" "
  "SET "
  "\"COMPANY_NAME\"=$1, "
  "\"CONTACT_NAME\"=$2, "
  "\"CONTACT_TITLE\"=$3, "
  "\"ADDRESS\"=$4, "
  "\"CITY\"=$5, "
  "\"REGION\"=$6, "
  "\"POSTAL_CODE\"=$7, "
  "\"COUNTRY\"=$8, "
  "\"PHONE\"=$9, "
  "\"FAX\"=$10 "
  "WHERE \"CUSTOMER_ID\"=$11";

  const char access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::erase_statement[] =
  "DELETE FROM \"NORTHWIND\".\"CUSTOMERS\" "
  "WHERE \"CUSTOMER_ID\"=$1";

  const char access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::query_statement[] =
  "SELECT "
  "\"NORTHWIND\".\"CUSTOMERS\".\"CUSTOMER_ID\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"COMPANY_NAME\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"CONTACT_NAME\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"CONTACT_TITLE\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"ADDRESS\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"CITY\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"REGION\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"POSTAL_CODE\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"COUNTRY\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"PHONE\", "
  "\"NORTHWIND\".\"CUSTOMERS\".\"FAX\" "
  "FROM \"NORTHWIND\".\"CUSTOMERS\"";

  const char access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::erase_query_statement[] =
  "DELETE FROM \"NORTHWIND\".\"CUSTOMERS\"";

  const char access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::table_name[] =
  "\"NORTHWIND\".\"CUSTOMERS\"";

  void access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
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

  void access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
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
      obj.customer_id ());
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

  void access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
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

  access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::pointer_type
  access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
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

  bool access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
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

  bool access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
  reload (database& db, object_type& obj)
  {
    using namespace pgsql;

    pgsql::connection& conn (
      pgsql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    const id_type& id  (
      obj.customer_id ());

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

  bool access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
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

  result< access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::object_type >
  access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
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

  unsigned long long access::object_traits_impl< ::zango::northwind::customers, id_pgsql >::
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
          db.execute ("DROP TABLE IF EXISTS \"NORTHWIND\".\"CUSTOMERS\" CASCADE");
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
          db.execute ("CREATE TABLE \"NORTHWIND\".\"CUSTOMERS\" (\n"
                      "  \"CUSTOMER_ID\" INTEGER NOT NULL PRIMARY KEY,\n"
                      "  \"COMPANY_NAME\" TEXT NOT NULL,\n"
                      "  \"CONTACT_NAME\" TEXT NULL,\n"
                      "  \"CONTACT_TITLE\" TEXT NULL,\n"
                      "  \"ADDRESS\" TEXT NULL,\n"
                      "  \"CITY\" TEXT NULL,\n"
                      "  \"REGION\" TEXT NULL,\n"
                      "  \"POSTAL_CODE\" TEXT NULL,\n"
                      "  \"COUNTRY\" TEXT NULL,\n"
                      "  \"PHONE\" TEXT NULL,\n"
                      "  \"FAX\" TEXT NULL)");
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
