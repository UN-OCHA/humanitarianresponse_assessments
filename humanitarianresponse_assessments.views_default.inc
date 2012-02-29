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
  $view->name = 'assessment_data_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Assessment data view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Assessment data view';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field collection item: Assessment Data File (field_asst_data_file:fid) */
  $handler->display->display_options['relationships']['field_asst_data_file_fid']['id'] = 'field_asst_data_file_fid';
  $handler->display->display_options['relationships']['field_asst_data_file_fid']['table'] = 'field_data_field_asst_data_file';
  $handler->display->display_options['relationships']['field_asst_data_file_fid']['field'] = 'field_asst_data_file_fid';
  $handler->display->display_options['relationships']['field_asst_data_file_fid']['required'] = 0;
  /* Field: Field collection item: Assessment Data File */
  $handler->display->display_options['fields']['field_asst_data_file']['id'] = 'field_asst_data_file';
  $handler->display->display_options['fields']['field_asst_data_file']['table'] = 'field_data_field_asst_data_file';
  $handler->display->display_options['fields']['field_asst_data_file']['field'] = 'field_asst_data_file';
  $handler->display->display_options['fields']['field_asst_data_file']['label'] = 'File';
  $handler->display->display_options['fields']['field_asst_data_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asst_data_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_data_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_data_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_data_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_data_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_data_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_data_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_data_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_data_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_data_file']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_data_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_data_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_data_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_data_file']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_asst_data_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_data_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_data_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_data_file']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_data_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_asst_data_file']['field_api_classes'] = 0;
  /* Field: Field collection item: Assessment Data URL */
  $handler->display->display_options['fields']['field_asst_data_url']['id'] = 'field_asst_data_url';
  $handler->display->display_options['fields']['field_asst_data_url']['table'] = 'field_data_field_asst_data_url';
  $handler->display->display_options['fields']['field_asst_data_url']['field'] = 'field_asst_data_url';
  $handler->display->display_options['fields']['field_asst_data_url']['label'] = 'URL';
  $handler->display->display_options['fields']['field_asst_data_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asst_data_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_data_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_data_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_data_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_data_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_data_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_data_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_data_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_data_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_data_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_data_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_data_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_data_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_data_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_asst_data_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_data_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_data_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_data_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_data_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_asst_data_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_asst_data_url']['field_api_classes'] = 0;
  /* Field: Field collection item: Data Instructions */
  $handler->display->display_options['fields']['field_asst_data_instruction']['id'] = 'field_asst_data_instruction';
  $handler->display->display_options['fields']['field_asst_data_instruction']['table'] = 'field_data_field_asst_data_instruction';
  $handler->display->display_options['fields']['field_asst_data_instruction']['field'] = 'field_asst_data_instruction';
  $handler->display->display_options['fields']['field_asst_data_instruction']['label'] = 'Instructions';
  $handler->display->display_options['fields']['field_asst_data_instruction']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asst_data_instruction']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_data_instruction']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_data_instruction']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_data_instruction']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_data_instruction']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_data_instruction']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_data_instruction']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_data_instruction']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_data_instruction']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_data_instruction']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_data_instruction']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_data_instruction']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_data_instruction']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_data_instruction']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_asst_data_instruction']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_data_instruction']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_data_instruction']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_data_instruction']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_data_instruction']['field_api_classes'] = 0;
  /* Field: File: Mime type */
  $handler->display->display_options['fields']['filemime']['id'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filemime']['field'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['relationship'] = 'field_ques_file_fid';
  $handler->display->display_options['fields']['filemime']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filemime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['filemime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['filemime']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['filemime']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['filemime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['filemime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['filemime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['filemime']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['filemime']['link_to_file'] = 1;
  $handler->display->display_options['fields']['filemime']['filemime_image'] = 1;
  /* Field: Field collection item: Data Accessibilty */
  $handler->display->display_options['fields']['field_data_accessibility']['id'] = 'field_data_accessibility';
  $handler->display->display_options['fields']['field_data_accessibility']['table'] = 'field_data_field_data_accessibility';
  $handler->display->display_options['fields']['field_data_accessibility']['field'] = 'field_data_accessibility';
  $handler->display->display_options['fields']['field_data_accessibility']['label'] = '';
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['text'] = '[filemime]<br>[field_asst_data_url]<br>[field_asst_data_instruction]';
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_data_accessibility']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_data_accessibility']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data_accessibility']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_data_accessibility']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_data_accessibility']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_data_accessibility']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_data_accessibility']['field_api_classes'] = 0;
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['item_id']['not'] = 0;
  $translatables['assessment_data_view'] = array(
    t('Master'),
    t('Assessment data view'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('file from field_asst_data_file'),
    t('File'),
    t('URL'),
    t('Instructions'),
    t('Mime type'),
    t('[filemime]<br>[field_asst_data_url]<br>[field_asst_data_instruction]'),
    t('All'),
  );
  $export['assessment_data_view'] = $view;

  $view = new view;
  $view->name = 'assessment_questionnaire_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Assessment questionnaire view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Assessment questionnaire view';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field collection item: Questionnaire File (field_ques_file:fid) */
  $handler->display->display_options['relationships']['field_ques_file_fid']['id'] = 'field_ques_file_fid';
  $handler->display->display_options['relationships']['field_ques_file_fid']['table'] = 'field_data_field_ques_file';
  $handler->display->display_options['relationships']['field_ques_file_fid']['field'] = 'field_ques_file_fid';
  $handler->display->display_options['relationships']['field_ques_file_fid']['required'] = 0;
  /* Field: Field collection item: Questionnaire File */
  $handler->display->display_options['fields']['field_ques_file']['id'] = 'field_ques_file';
  $handler->display->display_options['fields']['field_ques_file']['table'] = 'field_data_field_ques_file';
  $handler->display->display_options['fields']['field_ques_file']['field'] = 'field_ques_file';
  $handler->display->display_options['fields']['field_ques_file']['label'] = 'File';
  $handler->display->display_options['fields']['field_ques_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ques_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ques_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ques_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ques_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ques_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ques_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ques_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ques_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ques_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ques_file']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ques_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ques_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ques_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ques_file']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ques_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ques_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ques_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ques_file']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ques_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ques_file']['field_api_classes'] = 0;
  /* Field: Field collection item: Questionnaire Instructions */
  $handler->display->display_options['fields']['field_ques_instructions']['id'] = 'field_ques_instructions';
  $handler->display->display_options['fields']['field_ques_instructions']['table'] = 'field_data_field_ques_instructions';
  $handler->display->display_options['fields']['field_ques_instructions']['field'] = 'field_ques_instructions';
  $handler->display->display_options['fields']['field_ques_instructions']['label'] = 'Instructions';
  $handler->display->display_options['fields']['field_ques_instructions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ques_instructions']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ques_instructions']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ques_instructions']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ques_instructions']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ques_instructions']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ques_instructions']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ques_instructions']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ques_instructions']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ques_instructions']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ques_instructions']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ques_instructions']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ques_instructions']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ques_instructions']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ques_instructions']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ques_instructions']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ques_instructions']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ques_instructions']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ques_instructions']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ques_instructions']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_ques_instructions']['field_api_classes'] = 0;
  /* Field: Field collection item: Questionnaire URL */
  $handler->display->display_options['fields']['field_ques_url']['id'] = 'field_ques_url';
  $handler->display->display_options['fields']['field_ques_url']['table'] = 'field_data_field_ques_url';
  $handler->display->display_options['fields']['field_ques_url']['field'] = 'field_ques_url';
  $handler->display->display_options['fields']['field_ques_url']['label'] = 'URL';
  $handler->display->display_options['fields']['field_ques_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ques_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ques_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ques_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ques_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ques_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ques_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ques_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ques_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ques_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ques_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ques_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ques_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ques_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ques_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ques_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ques_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ques_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ques_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ques_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ques_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_ques_url']['field_api_classes'] = 0;
  /* Field: File: Mime type */
  $handler->display->display_options['fields']['filemime']['id'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filemime']['field'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['relationship'] = 'field_ques_file_fid';
  $handler->display->display_options['fields']['filemime']['label'] = '';
  $handler->display->display_options['fields']['filemime']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filemime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['filemime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['filemime']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['filemime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filemime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['filemime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['filemime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['filemime']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['filemime']['link_to_file'] = 1;
  $handler->display->display_options['fields']['filemime']['filemime_image'] = 1;
  /* Field: Field collection item: Questionnaire Accessibility */
  $handler->display->display_options['fields']['field_ques_accessibility']['id'] = 'field_ques_accessibility';
  $handler->display->display_options['fields']['field_ques_accessibility']['table'] = 'field_data_field_ques_accessibility';
  $handler->display->display_options['fields']['field_ques_accessibility']['field'] = 'field_ques_accessibility';
  $handler->display->display_options['fields']['field_ques_accessibility']['label'] = '';
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['text'] = '[filemime]<br>[field_ques_url]<br>[field_ques_instructions]';
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ques_accessibility']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ques_accessibility']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ques_accessibility']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ques_accessibility']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ques_accessibility']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ques_accessibility']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ques_accessibility']['field_api_classes'] = 0;
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['item_id']['not'] = 0;
  $translatables['assessment_questionnaire_view'] = array(
    t('Master'),
    t('Assessment questionnaire view'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('file from field_ques_file'),
    t('File'),
    t('Instructions'),
    t('URL'),
    t('[filemime]<br>[field_ques_url]<br>[field_ques_instructions]'),
    t('All'),
  );
  $export['assessment_questionnaire_view'] = $view;

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
  /* Field: Content: Geographical Area */
  $handler->display->display_options['fields']['field_loc']['id'] = 'field_loc';
  $handler->display->display_options['fields']['field_loc']['table'] = 'field_data_field_loc';
  $handler->display->display_options['fields']['field_loc']['field'] = 'field_loc';
  /* Field: Content: Leading/Coordinating Organizations */
  $handler->display->display_options['fields']['field_leading_org']['id'] = 'field_leading_org';
  $handler->display->display_options['fields']['field_leading_org']['table'] = 'field_data_field_leading_org';
  $handler->display->display_options['fields']['field_leading_org']['field'] = 'field_leading_org';
  /* Field: Content: Sectors/Sub-sectors */
  $handler->display->display_options['fields']['field_sectors']['id'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['fields']['field_sectors']['field'] = 'field_sectors';
  /* Field: Content: Assessment Report */
  $handler->display->display_options['fields']['field_asst_report']['id'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['table'] = 'field_data_field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['field'] = 'field_asst_report';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  /* Field: Content: Node export link */
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Geographical Area */
  $handler->display->display_options['fields']['field_loc']['id'] = 'field_loc';
  $handler->display->display_options['fields']['field_loc']['table'] = 'field_data_field_loc';
  $handler->display->display_options['fields']['field_loc']['field'] = 'field_loc';
  $handler->display->display_options['fields']['field_loc']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_loc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_loc']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_loc']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_loc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_loc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_loc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_loc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_loc']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_loc']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_loc']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_loc']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_loc']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_loc']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_loc']['field_api_classes'] = 0;
  /* Field: Content: Leading/Coordinating Organizations */
  $handler->display->display_options['fields']['field_leading_org']['id'] = 'field_leading_org';
  $handler->display->display_options['fields']['field_leading_org']['table'] = 'field_data_field_leading_org';
  $handler->display->display_options['fields']['field_leading_org']['field'] = 'field_leading_org';
  $handler->display->display_options['fields']['field_leading_org']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_leading_org']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_leading_org']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_leading_org']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_leading_org']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_leading_org']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_leading_org']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_leading_org']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_leading_org']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_leading_org']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_leading_org']['field_api_classes'] = 0;
  /* Field: Content: Sectors/Sub-sectors */
  $handler->display->display_options['fields']['field_sectors']['id'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['fields']['field_sectors']['field'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sectors']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sectors']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sectors']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sectors']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sectors']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sectors']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sectors']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sectors']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sectors']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_sectors']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sectors']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sectors']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sectors']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sectors']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sectors']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sectors']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sectors']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sectors']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_sectors']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_sectors']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sectors']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_sectors']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_sectors']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['field_asst_report']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_asst_report']['settings'] = array(
    'name' => 'assessment_report_view',
    'display_id' => 'default',
    'add' => '',
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
  $handler->display->display_options['fields']['field_asst_questionnaire']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_asst_questionnaire']['settings'] = array(
    'name' => 'assessment_questionnaire_view',
    'display_id' => 'default',
    'add' => '',
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
  $handler->display->display_options['fields']['field_asst_data']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_asst_data']['settings'] = array(
    'name' => 'assessment_data_view',
    'display_id' => 'default',
    'add' => '',
  );
  $handler->display->display_options['fields']['field_asst_data']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'resources/assessment-registry';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Geographical Area */
  $handler->display->display_options['fields']['field_loc']['id'] = 'field_loc';
  $handler->display->display_options['fields']['field_loc']['table'] = 'field_data_field_loc';
  $handler->display->display_options['fields']['field_loc']['field'] = 'field_loc';
  /* Field: Content: Leading/Coordinating Organizations */
  $handler->display->display_options['fields']['field_leading_org']['id'] = 'field_leading_org';
  $handler->display->display_options['fields']['field_leading_org']['table'] = 'field_data_field_leading_org';
  $handler->display->display_options['fields']['field_leading_org']['field'] = 'field_leading_org';
  /* Field: Content: Sectors/Sub-sectors */
  $handler->display->display_options['fields']['field_sectors']['id'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['fields']['field_sectors']['field'] = 'field_sectors';
  /* Field: Content: Assessment Report */
  $handler->display->display_options['fields']['field_asst_report']['id'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['table'] = 'field_data_field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['field'] = 'field_asst_report';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['path'] = 'assessment-registry-export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
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
    t('term'),
    t('Geographical Area'),
    t('Leading/Coordinating Organizations'),
    t('Sectors/Sub-sectors'),
    t('Assessment Report'),
    t('PHP'),
    t('Node export link'),
    t('Page'),
    t('Assessment Start Date'),
    t('Assessment Status'),
    t('Report'),
    t('Questionnaire'),
    t('Data'),
    t('Data export'),
  );
  $export['assessment_registry'] = $view;

  $view = new view;
  $view->name = 'assessment_report_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Assessment report view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Assessment Report View';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field collection item: Assessment Report File (field_asst_report_file:fid) */
  $handler->display->display_options['relationships']['field_asst_report_file_fid']['id'] = 'field_asst_report_file_fid';
  $handler->display->display_options['relationships']['field_asst_report_file_fid']['table'] = 'field_data_field_asst_report_file';
  $handler->display->display_options['relationships']['field_asst_report_file_fid']['field'] = 'field_asst_report_file_fid';
  $handler->display->display_options['relationships']['field_asst_report_file_fid']['required'] = 0;
  /* Field: Field collection item: Assessment Report File */
  $handler->display->display_options['fields']['field_asst_report_file']['id'] = 'field_asst_report_file';
  $handler->display->display_options['fields']['field_asst_report_file']['table'] = 'field_data_field_asst_report_file';
  $handler->display->display_options['fields']['field_asst_report_file']['field'] = 'field_asst_report_file';
  $handler->display->display_options['fields']['field_asst_report_file']['label'] = '';
  $handler->display->display_options['fields']['field_asst_report_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asst_report_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_report_file']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_report_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_asst_report_file']['field_api_classes'] = 0;
  /* Field: Field collection item: Assessment Report URL */
  $handler->display->display_options['fields']['field_asst_report_url']['id'] = 'field_asst_report_url';
  $handler->display->display_options['fields']['field_asst_report_url']['table'] = 'field_data_field_asst_report_url';
  $handler->display->display_options['fields']['field_asst_report_url']['field'] = 'field_asst_report_url';
  $handler->display->display_options['fields']['field_asst_report_url']['label'] = '';
  $handler->display->display_options['fields']['field_asst_report_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asst_report_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_report_url']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_report_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_report_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_asst_report_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_asst_report_url']['field_api_classes'] = 0;
  /* Field: Field collection item: Report Instructions */
  $handler->display->display_options['fields']['field_asst_report_inst']['id'] = 'field_asst_report_inst';
  $handler->display->display_options['fields']['field_asst_report_inst']['table'] = 'field_data_field_asst_report_inst';
  $handler->display->display_options['fields']['field_asst_report_inst']['field'] = 'field_asst_report_inst';
  $handler->display->display_options['fields']['field_asst_report_inst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_asst_report_inst']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_report_inst']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_report_inst']['field_api_classes'] = 0;
  /* Field: File: Mime type */
  $handler->display->display_options['fields']['filemime']['id'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filemime']['field'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['relationship'] = 'field_asst_report_file_fid';
  $handler->display->display_options['fields']['filemime']['label'] = '';
  $handler->display->display_options['fields']['filemime']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filemime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['filemime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['filemime']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['filemime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filemime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['filemime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['filemime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['filemime']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['filemime']['link_to_file'] = 1;
  $handler->display->display_options['fields']['filemime']['filemime_image'] = 1;
  /* Field: Field collection item: Report Accessibility */
  $handler->display->display_options['fields']['field_report_accessibility']['id'] = 'field_report_accessibility';
  $handler->display->display_options['fields']['field_report_accessibility']['table'] = 'field_data_field_report_accessibility';
  $handler->display->display_options['fields']['field_report_accessibility']['field'] = 'field_report_accessibility';
  $handler->display->display_options['fields']['field_report_accessibility']['label'] = '';
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['text'] = '[filemime]<br>[field_asst_report_url]<br>[field_asst_report_inst]';
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_report_accessibility']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_report_accessibility']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_report_accessibility']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['field_api_classes'] = 0;
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['item_id']['not'] = 0;
  $translatables['assessment_report_view'] = array(
    t('Master'),
    t('Assessment Report View'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('file from field_asst_report_file'),
    t('Report Instructions'),
    t('[filemime]<br>[field_asst_report_url]<br>[field_asst_report_inst]'),
    t('All'),
  );
  $export['assessment_report_view'] = $view;

  $view = new view;
  $view->name = 'field_collection_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Assessment reports view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Assessment Reports View';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field collection item: Assessment Report File (field_asst_report_file:fid) */
  $handler->display->display_options['relationships']['field_asst_report_file_fid']['id'] = 'field_asst_report_file_fid';
  $handler->display->display_options['relationships']['field_asst_report_file_fid']['table'] = 'field_data_field_asst_report_file';
  $handler->display->display_options['relationships']['field_asst_report_file_fid']['field'] = 'field_asst_report_file_fid';
  $handler->display->display_options['relationships']['field_asst_report_file_fid']['required'] = 0;
  /* Field: Field collection item: Assessment Report File */
  $handler->display->display_options['fields']['field_asst_report_file']['id'] = 'field_asst_report_file';
  $handler->display->display_options['fields']['field_asst_report_file']['table'] = 'field_data_field_asst_report_file';
  $handler->display->display_options['fields']['field_asst_report_file']['field'] = 'field_asst_report_file';
  $handler->display->display_options['fields']['field_asst_report_file']['label'] = '';
  $handler->display->display_options['fields']['field_asst_report_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asst_report_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_report_file']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_report_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_report_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_asst_report_file']['field_api_classes'] = 0;
  /* Field: Field collection item: Assessment Report URL */
  $handler->display->display_options['fields']['field_asst_report_url']['id'] = 'field_asst_report_url';
  $handler->display->display_options['fields']['field_asst_report_url']['table'] = 'field_data_field_asst_report_url';
  $handler->display->display_options['fields']['field_asst_report_url']['field'] = 'field_asst_report_url';
  $handler->display->display_options['fields']['field_asst_report_url']['label'] = '';
  $handler->display->display_options['fields']['field_asst_report_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asst_report_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_report_url']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_report_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_report_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_report_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_asst_report_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_asst_report_url']['field_api_classes'] = 0;
  /* Field: Field collection item: Report Instructions */
  $handler->display->display_options['fields']['field_asst_report_inst']['id'] = 'field_asst_report_inst';
  $handler->display->display_options['fields']['field_asst_report_inst']['table'] = 'field_data_field_asst_report_inst';
  $handler->display->display_options['fields']['field_asst_report_inst']['field'] = 'field_asst_report_inst';
  $handler->display->display_options['fields']['field_asst_report_inst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_asst_report_inst']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_report_inst']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_report_inst']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_report_inst']['field_api_classes'] = 0;
  /* Field: File: Mime type */
  $handler->display->display_options['fields']['filemime']['id'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filemime']['field'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['relationship'] = 'field_asst_report_file_fid';
  $handler->display->display_options['fields']['filemime']['label'] = '';
  $handler->display->display_options['fields']['filemime']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filemime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['filemime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['filemime']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['filemime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filemime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['filemime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['filemime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['filemime']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['filemime']['link_to_file'] = 1;
  $handler->display->display_options['fields']['filemime']['filemime_image'] = 1;
  /* Field: Field collection item: Report Accessibility */
  $handler->display->display_options['fields']['field_report_accessibility']['id'] = 'field_report_accessibility';
  $handler->display->display_options['fields']['field_report_accessibility']['table'] = 'field_data_field_report_accessibility';
  $handler->display->display_options['fields']['field_report_accessibility']['field'] = 'field_report_accessibility';
  $handler->display->display_options['fields']['field_report_accessibility']['label'] = '';
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['text'] = '[filemime]<br>[field_asst_report_url]<br>[field_asst_report_inst]';
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_report_accessibility']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_report_accessibility']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_report_accessibility']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_report_accessibility']['field_api_classes'] = 0;
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['item_id']['not'] = 0;
  $translatables['field_collection_view'] = array(
    t('Master'),
    t('Assessment Reports View'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('file from field_asst_report_file'),
    t('Report Instructions'),
    t('[filemime]<br>[field_asst_report_url]<br>[field_asst_report_inst]'),
    t('All'),
  );
  $export['field_collection_view'] = $view;

  return $export;
}
