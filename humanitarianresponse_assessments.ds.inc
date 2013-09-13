<?php
/**
 * @file
 * humanitarianresponse_assessments.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function humanitarianresponse_assessments_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|assessment|search';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'assessment';
  $ds_layout->view_mode = 'search';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_organizations',
        2 => 'field_asst_participating_org',
        3 => 'field_asst_start_date',
        4 => 'field_asst_status',
        5 => 'field_asst_report',
        6 => 'field_asst_questionnaire',
        7 => 'field_asst_data',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_organizations' => 'ds_content',
      'field_asst_participating_org' => 'ds_content',
      'field_asst_start_date' => 'ds_content',
      'field_asst_status' => 'ds_content',
      'field_asst_report' => 'ds_content',
      'field_asst_questionnaire' => 'ds_content',
      'field_asst_data' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|assessment|search'] = $ds_layout;

  return $export;
}
