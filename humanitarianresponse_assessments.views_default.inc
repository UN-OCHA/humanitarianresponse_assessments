<?php
/**
 * @file
 * humanitarianresponse_assessments.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_assessments_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'assessment_registry';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Assessment Registry';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Assessment Registry';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_locations' => 'field_locations',
    'field_organizations' => 'field_organizations',
    'field_clusters' => 'field_clusters',
    'field_asst_start_date' => 'field_asst_start_date',
    'field_asst_status' => 'field_asst_status',
    'field_asst_report' => 'field_asst_report',
    'field_asst_questionnaire' => 'field_asst_questionnaire',
    'field_asst_data' => 'field_asst_data',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organizations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_clusters' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asst_start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asst_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asst_report' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asst_questionnaire' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asst_data' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There are no results for this request';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'clusters' => 'clusters',
    'locations' => 'locations',
    'organizations' => 'organizations',
    'map_types' => 0,
    'coordination_hubs' => 0,
    'disaster_types' => 0,
    'display_properties' => 0,
    'document_types' => 0,
    'emergencies' => 0,
    'event_categories' => 0,
    'funding' => 0,
    'gallery_collections' => 0,
    'tags' => 0,
    'themes' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Assessment Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locations']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_locations']['multi_type'] = 'ul';
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Leading/Coordinating Organizations';
  $handler->display->display_options['fields']['field_organizations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_organizations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_organizations']['multi_type'] = 'ul';
  /* Field: Content: Participating Organization(s) */
  $handler->display->display_options['fields']['field_asst_participating_org']['id'] = 'field_asst_participating_org';
  $handler->display->display_options['fields']['field_asst_participating_org']['table'] = 'field_data_field_asst_participating_org';
  $handler->display->display_options['fields']['field_asst_participating_org']['field'] = 'field_asst_participating_org';
  $handler->display->display_options['fields']['field_asst_participating_org']['label'] = 'Participating Organizations';
  $handler->display->display_options['fields']['field_asst_participating_org']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_asst_participating_org']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_asst_participating_org']['multi_type'] = 'ul';
  /* Field: Content: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clusters']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_clusters']['multi_type'] = 'ul';
  /* Field: Content: Assessment Start Date */
  $handler->display->display_options['fields']['field_asst_start_date']['id'] = 'field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['table'] = 'field_data_field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['field'] = 'field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_asst_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asst_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Assessment Status */
  $handler->display->display_options['fields']['field_asst_status']['id'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['table'] = 'field_data_field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['field'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['element_label_colon'] = FALSE;
  /* Field: Content: Assessment Report */
  $handler->display->display_options['fields']['field_asst_report']['id'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['table'] = 'field_data_field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['field'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['label'] = 'Report';
  $handler->display->display_options['fields']['field_asst_report']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asst_report']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_asst_report']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: Assessment Questionnaire */
  $handler->display->display_options['fields']['field_asst_questionnaire']['id'] = 'field_asst_questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['table'] = 'field_data_field_asst_questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['field'] = 'field_asst_questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['label'] = 'Questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asst_questionnaire']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_asst_questionnaire']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: Assessment Data */
  $handler->display->display_options['fields']['field_asst_data']['id'] = 'field_asst_data';
  $handler->display->display_options['fields']['field_asst_data']['table'] = 'field_data_field_asst_data';
  $handler->display->display_options['fields']['field_asst_data']['field'] = 'field_asst_data';
  $handler->display->display_options['fields']['field_asst_data']['label'] = 'Data';
  $handler->display->display_options['fields']['field_asst_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asst_data']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_asst_data']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'assessment' => 'assessment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Clusters (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  /* Filter criterion: Content: Source (field_organizations) */
  $handler->display->display_options['filters']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organizations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator_id'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['label'] = 'Organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['identifier'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organizations_tid']['vocabulary'] = 'organizations';
  /* Filter criterion: Content: Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['value'] = '';
  $handler->display->display_options['filters']['field_locations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  /* Filter criterion: Content: Assessment Status (field_asst_status) */
  $handler->display->display_options['filters']['field_asst_status_value']['id'] = 'field_asst_status_value';
  $handler->display->display_options['filters']['field_asst_status_value']['table'] = 'field_data_field_asst_status';
  $handler->display->display_options['filters']['field_asst_status_value']['field'] = 'field_asst_status_value';
  $handler->display->display_options['filters']['field_asst_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_asst_status_value']['expose']['operator_id'] = 'field_asst_status_value_op';
  $handler->display->display_options['filters']['field_asst_status_value']['expose']['label'] = 'Assessment Status';
  $handler->display->display_options['filters']['field_asst_status_value']['expose']['operator'] = 'field_asst_status_value_op';
  $handler->display->display_options['filters']['field_asst_status_value']['expose']['identifier'] = 'field_asst_status_value';
  $handler->display->display_options['filters']['field_asst_status_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_asst_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'resources/assessment-registry';

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'xls');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'assessments.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'clusters' => 'clusters',
    'locations' => 'locations',
    'organizations' => 'organizations',
    'map_types' => 0,
    'coordination_hubs' => 0,
    'disaster_types' => 0,
    'display_properties' => 0,
    'document_types' => 0,
    'emergencies' => 0,
    'event_categories' => 0,
    'funding' => 0,
    'gallery_collections' => 0,
    'tags' => 0,
    'themes' => 0,
  );
  /* Relationship: Content: Assessment Data (field_asst_data) */
  $handler->display->display_options['relationships']['field_asst_data_value']['id'] = 'field_asst_data_value';
  $handler->display->display_options['relationships']['field_asst_data_value']['table'] = 'field_data_field_asst_data';
  $handler->display->display_options['relationships']['field_asst_data_value']['field'] = 'field_asst_data_value';
  $handler->display->display_options['relationships']['field_asst_data_value']['delta'] = '-1';
  /* Relationship: Content: Assessment Questionnaire (field_asst_questionnaire) */
  $handler->display->display_options['relationships']['field_asst_questionnaire_value']['id'] = 'field_asst_questionnaire_value';
  $handler->display->display_options['relationships']['field_asst_questionnaire_value']['table'] = 'field_data_field_asst_questionnaire';
  $handler->display->display_options['relationships']['field_asst_questionnaire_value']['field'] = 'field_asst_questionnaire_value';
  $handler->display->display_options['relationships']['field_asst_questionnaire_value']['delta'] = '-1';
  /* Relationship: Content: Assessment Report (field_asst_report) */
  $handler->display->display_options['relationships']['field_asst_report_value']['id'] = 'field_asst_report_value';
  $handler->display->display_options['relationships']['field_asst_report_value']['table'] = 'field_data_field_asst_report';
  $handler->display->display_options['relationships']['field_asst_report_value']['field'] = 'field_asst_report_value';
  $handler->display->display_options['relationships']['field_asst_report_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_locations']['separator'] = '; ';
  /* Field: Content: Other location */
  $handler->display->display_options['fields']['field_asst_other_location']['id'] = 'field_asst_other_location';
  $handler->display->display_options['fields']['field_asst_other_location']['table'] = 'field_data_field_asst_other_location';
  $handler->display->display_options['fields']['field_asst_other_location']['field'] = 'field_asst_other_location';
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Leading Organizations';
  $handler->display->display_options['fields']['field_organizations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_organizations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_organizations']['separator'] = ';';
  /* Field: Content: Participating Organization(s) */
  $handler->display->display_options['fields']['field_asst_participating_org']['id'] = 'field_asst_participating_org';
  $handler->display->display_options['fields']['field_asst_participating_org']['table'] = 'field_data_field_asst_participating_org';
  $handler->display->display_options['fields']['field_asst_participating_org']['field'] = 'field_asst_participating_org';
  $handler->display->display_options['fields']['field_asst_participating_org']['label'] = 'Participating Organizations';
  $handler->display->display_options['fields']['field_asst_participating_org']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_asst_participating_org']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_asst_participating_org']['separator'] = ';';
  /* Field: Content: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clusters']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_clusters']['separator'] = ';';
  /* Field: Content: Assessment Start Date */
  $handler->display->display_options['fields']['field_asst_start_date']['id'] = 'field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['table'] = 'field_data_field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['field'] = 'field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_asst_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asst_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Assessment Status */
  $handler->display->display_options['fields']['field_asst_status']['id'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['table'] = 'field_data_field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['field'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['element_label_colon'] = FALSE;
  /* Field: Content: Collection Method */
  $handler->display->display_options['fields']['field_asst_collection_method']['id'] = 'field_asst_collection_method';
  $handler->display->display_options['fields']['field_asst_collection_method']['table'] = 'field_data_field_asst_collection_method';
  $handler->display->display_options['fields']['field_asst_collection_method']['field'] = 'field_asst_collection_method';
  $handler->display->display_options['fields']['field_asst_collection_method']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_asst_collection_method']['separator'] = ';';
  /* Field: Content: Frequency */
  $handler->display->display_options['fields']['field_asst_freq']['id'] = 'field_asst_freq';
  $handler->display->display_options['fields']['field_asst_freq']['table'] = 'field_data_field_asst_freq';
  $handler->display->display_options['fields']['field_asst_freq']['field'] = 'field_asst_freq';
  /* Field: Content: Key findings */
  $handler->display->display_options['fields']['field_asst_key_findings']['id'] = 'field_asst_key_findings';
  $handler->display->display_options['fields']['field_asst_key_findings']['table'] = 'field_data_field_asst_key_findings';
  $handler->display->display_options['fields']['field_asst_key_findings']['field'] = 'field_asst_key_findings';
  /* Field: Content: Methodology */
  $handler->display->display_options['fields']['field_asst_methodology']['id'] = 'field_asst_methodology';
  $handler->display->display_options['fields']['field_asst_methodology']['table'] = 'field_data_field_asst_methodology';
  $handler->display->display_options['fields']['field_asst_methodology']['field'] = 'field_asst_methodology';
  /* Field: Content: Sample Size */
  $handler->display->display_options['fields']['field_asst_sample_size']['id'] = 'field_asst_sample_size';
  $handler->display->display_options['fields']['field_asst_sample_size']['table'] = 'field_data_field_asst_sample_size';
  $handler->display->display_options['fields']['field_asst_sample_size']['field'] = 'field_asst_sample_size';
  /* Field: Content: Level of Representation */
  $handler->display->display_options['fields']['field_asst_level_representation']['id'] = 'field_asst_level_representation';
  $handler->display->display_options['fields']['field_asst_level_representation']['table'] = 'field_data_field_asst_level_representation';
  $handler->display->display_options['fields']['field_asst_level_representation']['field'] = 'field_asst_level_representation';
  $handler->display->display_options['fields']['field_asst_level_representation']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Subject/Objective */
  $handler->display->display_options['fields']['field_asst_subject']['id'] = 'field_asst_subject';
  $handler->display->display_options['fields']['field_asst_subject']['table'] = 'field_data_field_asst_subject';
  $handler->display->display_options['fields']['field_asst_subject']['field'] = 'field_asst_subject';
  /* Field: Content: Type of Population */
  $handler->display->display_options['fields']['field_population_type']['id'] = 'field_population_type';
  $handler->display->display_options['fields']['field_population_type']['table'] = 'field_data_field_population_type';
  $handler->display->display_options['fields']['field_population_type']['field'] = 'field_population_type';
  $handler->display->display_options['fields']['field_population_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_population_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_population_type']['separator'] = ';';
  /* Field: Content: Unit of Measurement */
  $handler->display->display_options['fields']['field_asst_unit']['id'] = 'field_asst_unit';
  $handler->display->display_options['fields']['field_asst_unit']['table'] = 'field_data_field_asst_unit';
  $handler->display->display_options['fields']['field_asst_unit']['field'] = 'field_asst_unit';
  $handler->display->display_options['fields']['field_asst_unit']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_asst_unit']['separator'] = ';';
  /* Field: Field collection item: Report Accessibility */
  $handler->display->display_options['fields']['field_report_accessibility']['id'] = 'field_report_accessibility';
  $handler->display->display_options['fields']['field_report_accessibility']['table'] = 'field_data_field_report_accessibility';
  $handler->display->display_options['fields']['field_report_accessibility']['field'] = 'field_report_accessibility';
  $handler->display->display_options['fields']['field_report_accessibility']['relationship'] = 'field_asst_report_value';
  /* Field: Field collection item: Assessment Report File */
  $handler->display->display_options['fields']['field_asst_report_file']['id'] = 'field_asst_report_file';
  $handler->display->display_options['fields']['field_asst_report_file']['table'] = 'field_data_field_asst_report_file';
  $handler->display->display_options['fields']['field_asst_report_file']['field'] = 'field_asst_report_file';
  $handler->display->display_options['fields']['field_asst_report_file']['relationship'] = 'field_asst_report_value';
  $handler->display->display_options['fields']['field_asst_report_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_asst_report_file']['type'] = 'file_url_plain';
  /* Field: Field collection item: Assessment Report URL */
  $handler->display->display_options['fields']['field_asst_report_url']['id'] = 'field_asst_report_url';
  $handler->display->display_options['fields']['field_asst_report_url']['table'] = 'field_data_field_asst_report_url';
  $handler->display->display_options['fields']['field_asst_report_url']['field'] = 'field_asst_report_url';
  $handler->display->display_options['fields']['field_asst_report_url']['relationship'] = 'field_asst_report_value';
  $handler->display->display_options['fields']['field_asst_report_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_asst_report_url']['type'] = 'link_plain';
  /* Field: Field collection item: Report Instructions */
  $handler->display->display_options['fields']['field_asst_report_inst']['id'] = 'field_asst_report_inst';
  $handler->display->display_options['fields']['field_asst_report_inst']['table'] = 'field_data_field_asst_report_inst';
  $handler->display->display_options['fields']['field_asst_report_inst']['field'] = 'field_asst_report_inst';
  $handler->display->display_options['fields']['field_asst_report_inst']['relationship'] = 'field_asst_report_value';
  /* Field: Field collection item: Questionnaire Accessibility */
  $handler->display->display_options['fields']['field_ques_accessibility']['id'] = 'field_ques_accessibility';
  $handler->display->display_options['fields']['field_ques_accessibility']['table'] = 'field_data_field_ques_accessibility';
  $handler->display->display_options['fields']['field_ques_accessibility']['field'] = 'field_ques_accessibility';
  $handler->display->display_options['fields']['field_ques_accessibility']['relationship'] = 'field_asst_data_value';
  /* Field: Field collection item: Questionnaire File */
  $handler->display->display_options['fields']['field_ques_file']['id'] = 'field_ques_file';
  $handler->display->display_options['fields']['field_ques_file']['table'] = 'field_data_field_ques_file';
  $handler->display->display_options['fields']['field_ques_file']['field'] = 'field_ques_file';
  $handler->display->display_options['fields']['field_ques_file']['relationship'] = 'field_asst_questionnaire_value';
  $handler->display->display_options['fields']['field_ques_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ques_file']['type'] = 'file_url_plain';
  /* Field: Field collection item: Questionnaire URL */
  $handler->display->display_options['fields']['field_ques_url']['id'] = 'field_ques_url';
  $handler->display->display_options['fields']['field_ques_url']['table'] = 'field_data_field_ques_url';
  $handler->display->display_options['fields']['field_ques_url']['field'] = 'field_ques_url';
  $handler->display->display_options['fields']['field_ques_url']['relationship'] = 'field_asst_questionnaire_value';
  $handler->display->display_options['fields']['field_ques_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ques_url']['type'] = 'link_plain';
  /* Field: Field collection item: Questionnaire Instructions */
  $handler->display->display_options['fields']['field_ques_instructions']['id'] = 'field_ques_instructions';
  $handler->display->display_options['fields']['field_ques_instructions']['table'] = 'field_data_field_ques_instructions';
  $handler->display->display_options['fields']['field_ques_instructions']['field'] = 'field_ques_instructions';
  $handler->display->display_options['fields']['field_ques_instructions']['relationship'] = 'field_asst_questionnaire_value';
  /* Field: Field collection item: Data Accessibilty */
  $handler->display->display_options['fields']['field_data_accessibility']['id'] = 'field_data_accessibility';
  $handler->display->display_options['fields']['field_data_accessibility']['table'] = 'field_data_field_data_accessibility';
  $handler->display->display_options['fields']['field_data_accessibility']['field'] = 'field_data_accessibility';
  $handler->display->display_options['fields']['field_data_accessibility']['relationship'] = 'field_asst_data_value';
  /* Field: Field collection item: Assessment Data File */
  $handler->display->display_options['fields']['field_asst_data_file']['id'] = 'field_asst_data_file';
  $handler->display->display_options['fields']['field_asst_data_file']['table'] = 'field_data_field_asst_data_file';
  $handler->display->display_options['fields']['field_asst_data_file']['field'] = 'field_asst_data_file';
  $handler->display->display_options['fields']['field_asst_data_file']['relationship'] = 'field_asst_data_value';
  /* Field: Field collection item: Assessment Data URL */
  $handler->display->display_options['fields']['field_asst_data_url']['id'] = 'field_asst_data_url';
  $handler->display->display_options['fields']['field_asst_data_url']['table'] = 'field_data_field_asst_data_url';
  $handler->display->display_options['fields']['field_asst_data_url']['field'] = 'field_asst_data_url';
  $handler->display->display_options['fields']['field_asst_data_url']['relationship'] = 'field_asst_data_value';
  $handler->display->display_options['fields']['field_asst_data_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_asst_data_url']['type'] = 'link_plain';
  /* Field: Field collection item: Data Instructions */
  $handler->display->display_options['fields']['field_asst_data_instruction']['id'] = 'field_asst_data_instruction';
  $handler->display->display_options['fields']['field_asst_data_instruction']['table'] = 'field_data_field_asst_data_instruction';
  $handler->display->display_options['fields']['field_asst_data_instruction']['field'] = 'field_asst_data_instruction';
  $handler->display->display_options['fields']['field_asst_data_instruction']['relationship'] = 'field_asst_data_value';
  /* Field: Content: Contact Email */
  $handler->display->display_options['fields']['field_asst_contact_email']['id'] = 'field_asst_contact_email';
  $handler->display->display_options['fields']['field_asst_contact_email']['table'] = 'field_data_field_asst_contact_email';
  $handler->display->display_options['fields']['field_asst_contact_email']['field'] = 'field_asst_contact_email';
  $handler->display->display_options['fields']['field_asst_contact_email']['type'] = 'email_plain';
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_asst_contact_name']['id'] = 'field_asst_contact_name';
  $handler->display->display_options['fields']['field_asst_contact_name']['table'] = 'field_data_field_asst_contact_name';
  $handler->display->display_options['fields']['field_asst_contact_name']['field'] = 'field_asst_contact_name';
  /* Field: Content: Contact Telephone/Mobile */
  $handler->display->display_options['fields']['field_asst_contact_telephone']['id'] = 'field_asst_contact_telephone';
  $handler->display->display_options['fields']['field_asst_contact_telephone']['table'] = 'field_data_field_asst_contact_telephone';
  $handler->display->display_options['fields']['field_asst_contact_telephone']['field'] = 'field_asst_contact_telephone';
  $handler->display->display_options['fields']['field_asst_contact_telephone']['label'] = 'Contact Telephone';
  $handler->display->display_options['path'] = 'resources/assessment-registry.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['assessment_registry'] = array(
    t('Master'),
    t('Assessment Registry'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('There are no results for this request'),
    t('term'),
    t('Assessment Title'),
    t('Location'),
    t('Leading/Coordinating Organizations'),
    t('Participating Organizations'),
    t('Clusters'),
    t('Assessment Start Date'),
    t('Assessment Status'),
    t('Report'),
    t('Questionnaire'),
    t('Data'),
    t('Organizations'),
    t('Page'),
    t('XLS'),
    t('field collection item from field_asst_data'),
    t('field collection item from field_asst_questionnaire'),
    t('field collection item from field_asst_report'),
    t('Title'),
    t('Other location'),
    t('Leading Organizations'),
    t('Collection Method'),
    t('Frequency'),
    t('Key findings'),
    t('Methodology'),
    t('Sample Size'),
    t('Level of Representation'),
    t('Subject/Objective'),
    t('Type of Population'),
    t('Unit of Measurement'),
    t('Report Accessibility'),
    t('Assessment Report File'),
    t('Assessment Report URL'),
    t('Report Instructions'),
    t('Questionnaire Accessibility'),
    t('Questionnaire File'),
    t('Questionnaire URL'),
    t('Questionnaire Instructions'),
    t('Data Accessibilty'),
    t('Assessment Data File'),
    t('Assessment Data URL'),
    t('Data Instructions'),
    t('Contact Email'),
    t('Contact Name'),
    t('Contact Telephone'),
  );
  $export['assessment_registry'] = $view;

  return $export;
}
