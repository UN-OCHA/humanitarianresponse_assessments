<?php
/**
 * @file
 * humanitarianresponse_assessments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_assessments_ctools_plugin_api($module = NULL, $api = NULL) {
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
