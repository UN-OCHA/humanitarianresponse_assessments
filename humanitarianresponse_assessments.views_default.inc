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
  $handler->display->display_options['fields']['field_locations']['label'] = 'Geographical Area(s)';
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
  /* Field: Content: Cluster */
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
    t('Geographical Area(s)'),
    t('Leading/Coordinating Organizations'),
    t('Clusters'),
    t('Assessment Start Date'),
    t('Assessment Status'),
    t('Report'),
    t('Questionnaire'),
    t('Data'),
    t('Clusters'),
    t('Organizations'),
    t('Location'),
    t('Page'),
    t('XLS'),
  );
  $export['assessment_registry'] = $view;

  return $export;
}
