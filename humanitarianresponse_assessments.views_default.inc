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
  $view->base_table = 'search_api_index_assessments';
  $view->human_name = 'Assessment Registry';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Assessment Registry';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    188284353 => 0,
    200153887 => 0,
    197637936 => 0,
    52310416 => 0,
    30037204 => 0,
  );

  /* Display: Master */
  $handler = $view->new_display('page', 'Master', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'assessment-registry';

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'list');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'assessment-registry/list';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Table */
  $handler = $view->new_display('page', 'Table', 'table');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Node: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_locations']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_locations']['bypass_access'] = 0;
  /* Field: Indexed Node: Source */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Leading/Coordinating Organizations';
  $handler->display->display_options['fields']['field_organizations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organizations']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organizations']['bypass_access'] = 0;
  /* Field: Indexed Node: Participating Organization(s) */
  $handler->display->display_options['fields']['field_asst_participating_org']['id'] = 'field_asst_participating_org';
  $handler->display->display_options['fields']['field_asst_participating_org']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_participating_org']['field'] = 'field_asst_participating_org';
  $handler->display->display_options['fields']['field_asst_participating_org']['label'] = 'Participating Organizations';
  $handler->display->display_options['fields']['field_asst_participating_org']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_asst_participating_org']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_asst_participating_org']['bypass_access'] = 0;
  /* Field: Indexed Node: Cluster */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Clusters';
  $handler->display->display_options['fields']['field_clusters']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_clusters']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_clusters']['bypass_access'] = 0;
  /* Field: Indexed Node: Assessment Status */
  $handler->display->display_options['fields']['field_asst_status']['id'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_status']['field'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['label'] = 'Status';
  /* Field: Indexed Node: Assessment Start Date */
  $handler->display->display_options['fields']['field_asst_start_date']['id'] = 'field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_start_date']['field'] = 'field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_asst_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Indexed Node: Assessment Report */
  $handler->display->display_options['fields']['field_asst_report']['id'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_report']['field'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['label'] = 'Report';
  $handler->display->display_options['fields']['field_asst_report']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_asst_report']['display'] = 'view';
  $handler->display->display_options['fields']['field_asst_report']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_asst_report']['bypass_access'] = 0;
  /* Field: Indexed Node: Assessment Questionnaire */
  $handler->display->display_options['fields']['field_asst_questionnaire']['id'] = 'field_asst_questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_questionnaire']['field'] = 'field_asst_questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['label'] = 'Questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_asst_questionnaire']['display'] = 'view';
  $handler->display->display_options['fields']['field_asst_questionnaire']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_asst_questionnaire']['bypass_access'] = 0;
  /* Field: Indexed Node: Assessment Data */
  $handler->display->display_options['fields']['field_asst_data']['id'] = 'field_asst_data';
  $handler->display->display_options['fields']['field_asst_data']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_data']['field'] = 'field_asst_data';
  $handler->display->display_options['fields']['field_asst_data']['label'] = 'Data';
  $handler->display->display_options['fields']['field_asst_data']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_asst_data']['display'] = 'view';
  $handler->display->display_options['fields']['field_asst_data']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_asst_data']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'assessment-registry/table';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Table';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'csv');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Node: Assessment Data */
  $handler->display->display_options['relationships']['field_asst_data']['id'] = 'field_asst_data';
  $handler->display->display_options['relationships']['field_asst_data']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['relationships']['field_asst_data']['field'] = 'field_asst_data';
  /* Relationship: Indexed Node: Assessment Questionnaire */
  $handler->display->display_options['relationships']['field_asst_questionnaire']['id'] = 'field_asst_questionnaire';
  $handler->display->display_options['relationships']['field_asst_questionnaire']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['relationships']['field_asst_questionnaire']['field'] = 'field_asst_questionnaire';
  /* Relationship: Indexed Node: Assessment Report */
  $handler->display->display_options['relationships']['field_asst_report']['id'] = 'field_asst_report';
  $handler->display->display_options['relationships']['field_asst_report']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['relationships']['field_asst_report']['field'] = 'field_asst_report';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  /* Field: Indexed Node: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_locations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_locations']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_locations']['bypass_access'] = 0;
  /* Field: Indexed Node: Other location */
  $handler->display->display_options['fields']['field_asst_other_location']['id'] = 'field_asst_other_location';
  $handler->display->display_options['fields']['field_asst_other_location']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_other_location']['field'] = 'field_asst_other_location';
  /* Field: Indexed Node: Source */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Leading Organizations';
  $handler->display->display_options['fields']['field_organizations']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_organizations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organizations']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organizations']['bypass_access'] = 0;
  /* Field: Indexed Node: Participating Organization(s) */
  $handler->display->display_options['fields']['field_asst_participating_org']['id'] = 'field_asst_participating_org';
  $handler->display->display_options['fields']['field_asst_participating_org']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_participating_org']['field'] = 'field_asst_participating_org';
  $handler->display->display_options['fields']['field_asst_participating_org']['label'] = 'Participating Organizations';
  $handler->display->display_options['fields']['field_asst_participating_org']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_asst_participating_org']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_asst_participating_org']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_asst_participating_org']['bypass_access'] = 0;
  /* Field: Indexed Node: Cluster */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Clusters';
  $handler->display->display_options['fields']['field_clusters']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_clusters']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_clusters']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_clusters']['bypass_access'] = 0;
  /* Field: Assessment Start Date: Start date (indexed) */
  $handler->display->display_options['fields']['field_asst_start_date_value']['id'] = 'field_asst_start_date_value';
  $handler->display->display_options['fields']['field_asst_start_date_value']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_start_date_value']['field'] = 'field_asst_start_date_value';
  $handler->display->display_options['fields']['field_asst_start_date_value']['label'] = 'Start date';
  $handler->display->display_options['fields']['field_asst_start_date_value']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_asst_start_date_value']['custom_date_format'] = 'c';
  $handler->display->display_options['fields']['field_asst_start_date_value']['link_to_entity'] = 0;
  /* Field: Assessment Start Date: End date (indexed) */
  $handler->display->display_options['fields']['field_asst_start_date_value2']['id'] = 'field_asst_start_date_value2';
  $handler->display->display_options['fields']['field_asst_start_date_value2']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_start_date_value2']['field'] = 'field_asst_start_date_value2';
  $handler->display->display_options['fields']['field_asst_start_date_value2']['label'] = 'End date';
  $handler->display->display_options['fields']['field_asst_start_date_value2']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_asst_start_date_value2']['custom_date_format'] = 'c';
  $handler->display->display_options['fields']['field_asst_start_date_value2']['link_to_entity'] = 0;
  /* Field: Indexed Node: Assessment Status */
  $handler->display->display_options['fields']['field_asst_status']['id'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_status']['field'] = 'field_asst_status';
  /* Field: Indexed Node: Collection Method */
  $handler->display->display_options['fields']['field_asst_collection_method']['id'] = 'field_asst_collection_method';
  $handler->display->display_options['fields']['field_asst_collection_method']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_collection_method']['field'] = 'field_asst_collection_method';
  $handler->display->display_options['fields']['field_asst_collection_method']['delta_offset'] = '0';
  /* Field: Indexed Node: Frequency */
  $handler->display->display_options['fields']['field_asst_freq']['id'] = 'field_asst_freq';
  $handler->display->display_options['fields']['field_asst_freq']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_freq']['field'] = 'field_asst_freq';
  /* Field: Indexed Node: Key findings */
  $handler->display->display_options['fields']['field_asst_key_findings']['id'] = 'field_asst_key_findings';
  $handler->display->display_options['fields']['field_asst_key_findings']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_key_findings']['field'] = 'field_asst_key_findings';
  /* Field: Indexed Node: Methodology */
  $handler->display->display_options['fields']['field_asst_methodology']['id'] = 'field_asst_methodology';
  $handler->display->display_options['fields']['field_asst_methodology']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_methodology']['field'] = 'field_asst_methodology';
  /* Field: Indexed Node: Sample Size */
  $handler->display->display_options['fields']['field_asst_sample_size']['id'] = 'field_asst_sample_size';
  $handler->display->display_options['fields']['field_asst_sample_size']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_sample_size']['field'] = 'field_asst_sample_size';
  /* Field: Indexed Node: Level of Representation */
  $handler->display->display_options['fields']['field_asst_level_representation']['id'] = 'field_asst_level_representation';
  $handler->display->display_options['fields']['field_asst_level_representation']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_level_representation']['field'] = 'field_asst_level_representation';
  $handler->display->display_options['fields']['field_asst_level_representation']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_asst_level_representation']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_asst_level_representation']['bypass_access'] = 0;
  /* Field: Indexed Node: Subject/Objective */
  $handler->display->display_options['fields']['field_asst_subject']['id'] = 'field_asst_subject';
  $handler->display->display_options['fields']['field_asst_subject']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_subject']['field'] = 'field_asst_subject';
  /* Field: Indexed Node: Type of Population */
  $handler->display->display_options['fields']['field_population_type']['id'] = 'field_population_type';
  $handler->display->display_options['fields']['field_population_type']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_population_type']['field'] = 'field_population_type';
  $handler->display->display_options['fields']['field_population_type']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_population_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_population_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_population_type']['bypass_access'] = 0;
  /* Field: Indexed Node: Unit of Measurement */
  $handler->display->display_options['fields']['field_asst_unit']['id'] = 'field_asst_unit';
  $handler->display->display_options['fields']['field_asst_unit']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_unit']['field'] = 'field_asst_unit';
  $handler->display->display_options['fields']['field_asst_unit']['delta_offset'] = '0';
  /* Field: Field collection item: Report Accessibility */
  $handler->display->display_options['fields']['field_report_accessibility']['id'] = 'field_report_accessibility';
  $handler->display->display_options['fields']['field_report_accessibility']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_report_accessibility']['field'] = 'field_report_accessibility';
  $handler->display->display_options['fields']['field_report_accessibility']['relationship'] = 'field_asst_report';
  /* Field: Field collection item: Assessment Report File */
  $handler->display->display_options['fields']['field_asst_report_file']['id'] = 'field_asst_report_file';
  $handler->display->display_options['fields']['field_asst_report_file']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_asst_report_file']['field'] = 'field_asst_report_file';
  $handler->display->display_options['fields']['field_asst_report_file']['relationship'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_asst_report_file']['type'] = 'file_url_plain';
  /* Field: Field collection item: Assessment Report URL */
  $handler->display->display_options['fields']['field_asst_report_url']['id'] = 'field_asst_report_url';
  $handler->display->display_options['fields']['field_asst_report_url']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_asst_report_url']['field'] = 'field_asst_report_url';
  $handler->display->display_options['fields']['field_asst_report_url']['relationship'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_asst_report_url']['type'] = 'link_plain';
  /* Field: Field collection item: Report Instructions */
  $handler->display->display_options['fields']['field_asst_report_inst']['id'] = 'field_asst_report_inst';
  $handler->display->display_options['fields']['field_asst_report_inst']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_asst_report_inst']['field'] = 'field_asst_report_inst';
  $handler->display->display_options['fields']['field_asst_report_inst']['relationship'] = 'field_asst_report';
  /* Field: Field collection item: Questionnaire Accessibility */
  $handler->display->display_options['fields']['field_ques_accessibility']['id'] = 'field_ques_accessibility';
  $handler->display->display_options['fields']['field_ques_accessibility']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_ques_accessibility']['field'] = 'field_ques_accessibility';
  $handler->display->display_options['fields']['field_ques_accessibility']['relationship'] = 'field_asst_questionnaire';
  /* Field: Field collection item: Questionnaire File */
  $handler->display->display_options['fields']['field_ques_file']['id'] = 'field_ques_file';
  $handler->display->display_options['fields']['field_ques_file']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_ques_file']['field'] = 'field_ques_file';
  $handler->display->display_options['fields']['field_ques_file']['relationship'] = 'field_asst_questionnaire';
  $handler->display->display_options['fields']['field_ques_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ques_file']['type'] = 'file_url_plain';
  /* Field: Field collection item: Questionnaire URL */
  $handler->display->display_options['fields']['field_ques_url']['id'] = 'field_ques_url';
  $handler->display->display_options['fields']['field_ques_url']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_ques_url']['field'] = 'field_ques_url';
  $handler->display->display_options['fields']['field_ques_url']['relationship'] = 'field_asst_questionnaire';
  $handler->display->display_options['fields']['field_ques_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ques_url']['type'] = 'link_plain';
  /* Field: Field collection item: Questionnaire Instructions */
  $handler->display->display_options['fields']['field_ques_instructions']['id'] = 'field_ques_instructions';
  $handler->display->display_options['fields']['field_ques_instructions']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_ques_instructions']['field'] = 'field_ques_instructions';
  $handler->display->display_options['fields']['field_ques_instructions']['relationship'] = 'field_asst_questionnaire';
  /* Field: Field collection item: Data Accessibilty */
  $handler->display->display_options['fields']['field_data_accessibility']['id'] = 'field_data_accessibility';
  $handler->display->display_options['fields']['field_data_accessibility']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_data_accessibility']['field'] = 'field_data_accessibility';
  $handler->display->display_options['fields']['field_data_accessibility']['relationship'] = 'field_asst_data';
  /* Field: Field collection item: Assessment Data File */
  $handler->display->display_options['fields']['field_asst_data_file']['id'] = 'field_asst_data_file';
  $handler->display->display_options['fields']['field_asst_data_file']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_asst_data_file']['field'] = 'field_asst_data_file';
  $handler->display->display_options['fields']['field_asst_data_file']['relationship'] = 'field_asst_data';
  /* Field: Field collection item: Assessment Data URL */
  $handler->display->display_options['fields']['field_asst_data_url']['id'] = 'field_asst_data_url';
  $handler->display->display_options['fields']['field_asst_data_url']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_asst_data_url']['field'] = 'field_asst_data_url';
  $handler->display->display_options['fields']['field_asst_data_url']['relationship'] = 'field_asst_data';
  $handler->display->display_options['fields']['field_asst_data_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_asst_data_url']['type'] = 'link_plain';
  /* Field: Field collection item: Data Instructions */
  $handler->display->display_options['fields']['field_asst_data_instruction']['id'] = 'field_asst_data_instruction';
  $handler->display->display_options['fields']['field_asst_data_instruction']['table'] = 'entity_field_collection_item';
  $handler->display->display_options['fields']['field_asst_data_instruction']['field'] = 'field_asst_data_instruction';
  $handler->display->display_options['fields']['field_asst_data_instruction']['relationship'] = 'field_asst_data';
  /* Field: Indexed Node: Contact Email */
  $handler->display->display_options['fields']['field_asst_contact_email']['id'] = 'field_asst_contact_email';
  $handler->display->display_options['fields']['field_asst_contact_email']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_contact_email']['field'] = 'field_asst_contact_email';
  $handler->display->display_options['fields']['field_asst_contact_email']['type'] = 'email_plain';
  /* Field: Indexed Node: Contact Name */
  $handler->display->display_options['fields']['field_asst_contact_name']['id'] = 'field_asst_contact_name';
  $handler->display->display_options['fields']['field_asst_contact_name']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_contact_name']['field'] = 'field_asst_contact_name';
  /* Field: Indexed Node: Contact Telephone/Mobile */
  $handler->display->display_options['fields']['field_asst_contact_telephone']['id'] = 'field_asst_contact_telephone';
  $handler->display->display_options['fields']['field_asst_contact_telephone']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_contact_telephone']['field'] = 'field_asst_contact_telephone';
  $handler->display->display_options['fields']['field_asst_contact_telephone']['label'] = 'Contact Telephone';
  $handler->display->display_options['path'] = 'assessment-registry/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'list' => 'list',
    'table' => 'table',
    'default' => 0,
  );

  /* Display: Map Data */
  $handler = $view->new_display('openlayers', 'Map Data', 'map_data');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'other_latlon',
    'other_lat' => 'field_location_lat',
    'other_lon' => 'field_location_lon',
    'wkt' => 'field_location_lat',
    'other_top' => 'field_location_lat',
    'other_right' => 'field_location_lat',
    'other_bottom' => 'field_location_lat',
    'other_left' => 'field_location_lat',
    'name_field' => 'title_field',
    'description_field' => 'field_asst_status',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Node: Location */
  $handler->display->display_options['relationships']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['relationships']['field_locations']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['relationships']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Location » Latitude */
  $handler->display->display_options['fields']['field_location_lat']['id'] = 'field_location_lat';
  $handler->display->display_options['fields']['field_location_lat']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_location_lat']['field'] = 'field_location_lat';
  $handler->display->display_options['fields']['field_location_lat']['relationship'] = 'field_locations';
  /* Field: Taxonomy term: Location » Longitude */
  $handler->display->display_options['fields']['field_location_lon']['id'] = 'field_location_lon';
  $handler->display->display_options['fields']['field_location_lon']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_location_lon']['field'] = 'field_location_lon';
  $handler->display->display_options['fields']['field_location_lon']['relationship'] = 'field_locations';
  $handler->display->display_options['fields']['field_location_lon']['label'] = '';
  $handler->display->display_options['fields']['field_location_lon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_lon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_lon']['precision'] = '0';
  $handler->display->display_options['fields']['field_location_lon']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Node: Assessment Start Date */
  $handler->display->display_options['fields']['field_asst_start_date']['id'] = 'field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_start_date']['field'] = 'field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_asst_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Indexed Node: Assessment Status */
  $handler->display->display_options['fields']['field_asst_status']['id'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['table'] = 'search_api_index_assessments';
  $handler->display->display_options['fields']['field_asst_status']['field'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['label'] = '';
  $handler->display->display_options['fields']['field_asst_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_asst_status']['alter']['text'] = '&nbsp;Date:[field_asst_start_date]
&nbsp;Status: [field_asst_status]';
  $handler->display->display_options['fields']['field_asst_status']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_asst_status']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_asst_status']['element_label_colon'] = FALSE;

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'map');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'assessments';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'assessment-registry/map';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Map';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['assessment_registry'] = array(
    t('Master'),
    t('Assessment Registry'),
    t('more'),
    t('Apply'),
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
    t('Node ID'),
    t('.'),
    t(','),
    t('Search for'),
    t('List'),
    t('Table'),
    t('Title'),
    t('Location'),
    t('Leading/Coordinating Organizations'),
    t('Participating Organizations'),
    t('Clusters'),
    t('Status'),
    t('Start Date'),
    t('Report'),
    t('Questionnaire'),
    t('Data'),
    t('CSV'),
    t('Assessment Data'),
    t('Assessment Questionnaire'),
    t('Assessment Report'),
    t('Other location'),
    t('Leading Organizations'),
    t('Start date'),
    t('End date'),
    t('Assessment Status'),
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
    t('Map Data'),
    t('Location » Latitude'),
    t('Date'),
    t('&nbsp;Date:[field_asst_start_date]
&nbsp;Status: [field_asst_status]'),
    t('Map'),
  );
  $export['assessment_registry'] = $view;

  return $export;
}
