<?php
/**
 * @file
 * humanitarianresponse_assessments.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function humanitarianresponse_assessments_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:assessment-registry
  $menu_links['main-menu:assessment-registry'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'assessment-registry',
    'router_path' => 'assessment-registry',
    'link_title' => 'Assessments Registry',
    'options' => array(
      'attributes' => array(
        'title' => 'Assessments Registry',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => '<nolink>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Assessments Registry');


  return $menu_links;
}
