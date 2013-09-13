<?php
/**
 * @file
 * humanitarianresponse_assessments.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function humanitarianresponse_assessments_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments::field_asst_collection_method';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = '';
  $facet->facet = 'field_asst_collection_method';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'pretty_paths_alias' => 'collection_method',
  );
  $export['search_api@assessments::field_asst_collection_method'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments::field_asst_freq';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = '';
  $facet->facet = 'field_asst_freq';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'pretty_paths_alias' => 'frequency',
  );
  $export['search_api@assessments::field_asst_freq'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments::field_asst_level_representation';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = '';
  $facet->facet = 'field_asst_level_representation';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'pretty_paths_alias' => 'level_representation',
    'pretty_paths_taxonomy_pathauto' => 1,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'geographic_level',
  );
  $export['search_api@assessments::field_asst_level_representation'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments::field_asst_participating_org';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = '';
  $facet->facet = 'field_asst_participating_org';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'pretty_paths_alias' => 'participating_org',
    'pretty_paths_taxonomy_pathauto' => 1,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'organizations',
  );
  $export['search_api@assessments::field_asst_participating_org'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments::field_asst_status';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = '';
  $facet->facet = 'field_asst_status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'pretty_paths_alias' => 'status',
  );
  $export['search_api@assessments::field_asst_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments::field_clusters';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = '';
  $facet->facet = 'field_clusters';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'pretty_paths_alias' => 'clusters',
    'pretty_paths_taxonomy_pathauto' => 1,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'clusters',
  );
  $export['search_api@assessments::field_clusters'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments::field_locations';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = '';
  $facet->facet = 'field_locations';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'pretty_paths_alias' => 'locations',
    'pretty_paths_taxonomy_pathauto' => 1,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'locations',
  );
  $export['search_api@assessments::field_locations'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments::field_organizations';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = '';
  $facet->facet = 'field_organizations';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'pretty_paths_alias' => 'organizations',
    'pretty_paths_taxonomy_pathauto' => 1,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'organizations',
  );
  $export['search_api@assessments::field_organizations'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments::field_population_type';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = '';
  $facet->facet = 'field_population_type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'pretty_paths_alias' => 'population_type',
    'pretty_paths_taxonomy_pathauto' => 1,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'population_types',
  );
  $export['search_api@assessments::field_population_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments:block:field_asst_level_representation';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = 'block';
  $facet->facet = 'field_asst_level_representation';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'add_count' => 0,
    'remove_selected' => 0,
    'auto_submit' => 0,
    'default_option_label' => '',
    'submit_page' => '',
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@assessments:block:field_asst_level_representation'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments:block:field_asst_methodology';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = 'block';
  $facet->facet = 'field_asst_methodology';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@assessments:block:field_asst_methodology'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments:block:field_asst_participating_org';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = 'block';
  $facet->facet = 'field_asst_participating_org';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'add_count' => 0,
    'remove_selected' => 0,
    'auto_submit' => 0,
    'default_option_label' => '',
    'submit_page' => '',
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@assessments:block:field_asst_participating_org'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments:block:field_asst_status';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = 'block';
  $facet->facet = 'field_asst_status';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'add_count' => 0,
    'remove_selected' => 0,
    'auto_submit' => 0,
    'default_option_label' => '',
    'submit_page' => '',
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@assessments:block:field_asst_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments:block:field_clusters';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = 'block';
  $facet->facet = 'field_clusters';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'add_count' => 0,
    'remove_selected' => 0,
    'auto_submit' => 0,
    'default_option_label' => '',
    'submit_page' => '',
    'keep_open' => 0,
    'expand' => 1,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@assessments:block:field_clusters'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments:block:field_locations';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = 'block';
  $facet->facet = 'field_locations';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 1,
    'add_count' => 0,
    'remove_selected' => 0,
    'auto_submit' => 0,
    'default_option_label' => '',
    'submit_page' => '',
    'keep_open' => 0,
    'expand' => 1,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@assessments:block:field_locations'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments:block:field_organizations';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = 'block';
  $facet->facet = 'field_organizations';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'add_count' => 0,
    'remove_selected' => 0,
    'auto_submit' => 0,
    'default_option_label' => '',
    'submit_page' => '',
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@assessments:block:field_organizations'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@assessments:block:field_population_type';
  $facet->searcher = 'search_api@assessments';
  $facet->realm = 'block';
  $facet->facet = 'field_population_type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'collapsible',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'add_count' => 0,
    'remove_selected' => 0,
    'auto_submit' => 0,
    'default_option_label' => '',
    'submit_page' => '',
    'keep_open' => 0,
    'expand' => 0,
    'collapsible_children' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'simple',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@assessments:block:field_population_type'] = $facet;

  return $export;
}
