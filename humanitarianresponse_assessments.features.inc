<?php
/**
 * @file
 * humanitarianresponse_assessments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_assessments_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_assessments_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function humanitarianresponse_assessments_node_info() {
  $items = array(
    'assessment' => array(
      'name' => t('Assessment'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Assessment Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function humanitarianresponse_assessments_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_assessment_registry'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_assessment_registry",
    "name" : "Assessment Registry",
    "index_id" : "assessments",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : { "result count" : true, "fields" : [] },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function humanitarianresponse_assessments_default_search_api_index() {
  $items = array();
  $items['assessments'] = entity_import('search_api_index', '{
    "name" : "Assessments",
    "machine_name" : "assessments",
    "description" : null,
    "server" : "solr_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "title" : { "type" : "text" },
        "language" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "status" : { "type" : "boolean" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_organizations" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_clusters" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_locations" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_population_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_asst_collection_method" : { "type" : "list\\u003Cstring\\u003E" },
        "field_asst_freq" : { "type" : "string" },
        "field_asst_key_findings" : { "type" : "text", "boost" : "0.5" },
        "field_asst_level_representation" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_asst_methodology" : { "type" : "text", "boost" : "0.5" },
        "field_asst_other_location" : { "type" : "text", "boost" : "0.5" },
        "field_asst_participating_org" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_asst_sample_size" : { "type" : "text", "boost" : "0.5" },
        "field_asst_status" : { "type" : "string" },
        "field_asst_subject" : { "type" : "text", "boost" : "0.5" },
        "field_asst_unit" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "field_asst_start_date:value" : { "type" : "date" },
        "field_asst_start_date:value2" : { "type" : "date" },
        "field_asst_start_date:duration" : { "type" : "duration" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "assessment" : "assessment" } }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_locations:parent" : "field_locations:parent" } }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_asst_key_findings" : true,
              "field_asst_methodology" : true,
              "field_asst_other_location" : true,
              "field_asst_sample_size" : true,
              "field_asst_subject" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_asst_key_findings" : true,
              "field_asst_methodology" : true,
              "field_asst_other_location" : true,
              "field_asst_sample_size" : true,
              "field_asst_subject" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_asst_key_findings" : true,
              "field_asst_methodology" : true,
              "field_asst_other_location" : true,
              "field_asst_sample_size" : true,
              "field_asst_subject" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_asst_key_findings" : true,
              "field_asst_methodology" : true,
              "field_asst_other_location" : true,
              "field_asst_sample_size" : true,
              "field_asst_subject" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_sort().
 */
function humanitarianresponse_assessments_default_search_api_sort() {
  $items = array();
  $items['assessments__field_asst_start_date:duration'] = entity_import('search_api_sort', '{
    "index_id" : "assessments",
    "field" : "field_asst_start_date:duration",
    "name" : "Assessment Duration",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "assessments__field_asst_start_date:duration",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Assessment Start Date \\u00bb Duration" },
    "rdf_mapping" : []
  }');
  $items['assessments__field_asst_start_date:value'] = entity_import('search_api_sort', '{
    "index_id" : "assessments",
    "field" : "field_asst_start_date:value",
    "name" : "Assessment Start Date",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "assessments__field_asst_start_date:value",
    "default_sort" : "0",
    "default_sort_no_terms" : "1",
    "default_order" : "desc",
    "options" : { "field_name" : "Assessment Start Date \\u00bb Start date" },
    "rdf_mapping" : []
  }');
  $items['assessments__field_asst_start_date:value2'] = entity_import('search_api_sort', '{
    "index_id" : "assessments",
    "field" : "field_asst_start_date:value2",
    "name" : "Assessment End Date",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "assessments__field_asst_start_date:value2",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Assessment Start Date \\u00bb End date" },
    "rdf_mapping" : []
  }');
  $items['assessments__search_api_relevance'] = entity_import('search_api_sort', '{
    "index_id" : "assessments",
    "field" : "search_api_relevance",
    "name" : "Relevance",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "assessments__search_api_relevance",
    "default_sort" : "1",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "search_api_relevance" },
    "rdf_mapping" : []
  }');
  return $items;
}
