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

  $view = new view;
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_loc' => 'field_loc',
    'field_leading_org' => 'field_leading_org',
    'field_sectors' => 'field_sectors',
    'field_asst_report' => 'field_asst_report',
    'field_asst_data' => 'field_asst_data',
    'field_asst_questionnaire' => 'field_asst_questionnaire',
    'field_asst_start_date' => 'field_asst_start_date',
    'field_asst_status' => 'field_asst_status',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_loc' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_leading_org' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sectors' => array(
      'align' => 'views-align-left',
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
    'field_asst_data' => array(
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
    'field_asst_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asst_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_loc']['id'] = 'field_loc';
  $handler->display->display_options['fields']['field_loc']['table'] = 'field_data_field_loc';
  $handler->display->display_options['fields']['field_loc']['field'] = 'field_loc';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_leading_org']['id'] = 'field_leading_org';
  $handler->display->display_options['fields']['field_leading_org']['table'] = 'field_data_field_leading_org';
  $handler->display->display_options['fields']['field_leading_org']['field'] = 'field_leading_org';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_sectors']['id'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['fields']['field_sectors']['field'] = 'field_sectors';
  /* Field: Content: Assessment Report */
  $handler->display->display_options['fields']['field_asst_report']['id'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['table'] = 'field_data_field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['field'] = 'field_asst_report';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['export_node']['id'] = 'export_node';
  $handler->display->display_options['fields']['export_node']['table'] = 'node';
  $handler->display->display_options['fields']['export_node']['field'] = 'export_node';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
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
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no results for this request';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Assessment Title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['label'] = 'Geographical Area(s)';
  $handler->display->display_options['fields']['field_locations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_locations']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_locations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_locations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_locations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_locations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_locations']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_locations']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_locations']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_locations']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_locations']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_locations']['field_api_classes'] = 0;
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Leading/Coordinating Organizations';
  $handler->display->display_options['fields']['field_organizations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_organizations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_organizations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_organizations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_organizations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_organizations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_organizations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_organizations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_organizations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_organizations']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_organizations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_organizations']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_organizations']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_organizations']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_organizations']['field_api_classes'] = 0;
  /* Field: Content: Cluster(s) */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_clusters']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_clusters']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_clusters']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_clusters']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_clusters']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_clusters']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_clusters']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_clusters']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_clusters']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_clusters']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_clusters']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_clusters']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_clusters']['field_api_classes'] = 0;
  /* Field: Content: Assessment Start Date */
  $handler->display->display_options['fields']['field_asst_start_date']['id'] = 'field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['table'] = 'field_data_field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['field'] = 'field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_start_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_asst_start_date']['field_api_classes'] = 0;
  /* Field: Content: Assessment Status */
  $handler->display->display_options['fields']['field_asst_status']['id'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['table'] = 'field_data_field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['field'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_status']['field_api_classes'] = 0;
  /* Field: Content: Assessment Report */
  $handler->display->display_options['fields']['field_asst_report']['id'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['table'] = 'field_data_field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['field'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['label'] = 'Report';
  $handler->display->display_options['fields']['field_asst_report']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_report']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_report']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_report']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_report']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_asst_report']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_asst_report']['field_api_classes'] = 0;
  /* Field: Content: Assessment Questionnaire */
  $handler->display->display_options['fields']['field_asst_questionnaire']['id'] = 'field_asst_questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['table'] = 'field_data_field_asst_questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['field'] = 'field_asst_questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['label'] = 'Questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_questionnaire']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_questionnaire']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_asst_questionnaire']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_asst_questionnaire']['field_api_classes'] = 0;
  /* Field: Content: Assessment Data */
  $handler->display->display_options['fields']['field_asst_data']['id'] = 'field_asst_data';
  $handler->display->display_options['fields']['field_asst_data']['table'] = 'field_data_field_asst_data';
  $handler->display->display_options['fields']['field_asst_data']['field'] = 'field_asst_data';
  $handler->display->display_options['fields']['field_asst_data']['label'] = 'Data';
  $handler->display->display_options['fields']['field_asst_data']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_data']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_data']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_data']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_data']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_asst_data']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_asst_data']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['error_message'] = 1;
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
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organizations_tid']['vocabulary'] = 'organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['error_message'] = 1;
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
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'resources/assessment-registry';
  
  $export['assessment_registry'] = $view;

  return $export;
}
