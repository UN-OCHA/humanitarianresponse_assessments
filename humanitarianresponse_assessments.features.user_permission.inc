<?php
/**
 * @file
 * humanitarianresponse_assessments.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_assessments_user_default_permissions() {
  $permissions = array();

  // Exported permission: create assessment content.
  $permissions['create assessment content'] = array(
    'name' => 'create assessment content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create field_ass_data_file_rest.
  $permissions['create field_ass_data_file_rest'] = array(
    'name' => 'create field_ass_data_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_asst_data_url_rest.
  $permissions['create field_asst_data_url_rest'] = array(
    'name' => 'create field_asst_data_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_asst_report_file_rest.
  $permissions['create field_asst_report_file_rest'] = array(
    'name' => 'create field_asst_report_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_asst_report_url_rest.
  $permissions['create field_asst_report_url_rest'] = array(
    'name' => 'create field_asst_report_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ques_file_rest.
  $permissions['create field_ques_file_rest'] = array(
    'name' => 'create field_ques_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ques_url_rest.
  $permissions['create field_ques_url_rest'] = array(
    'name' => 'create field_ques_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: delete own assessment content.
  $permissions['delete own assessment content'] = array(
    'name' => 'delete own assessment content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_ass_data_file_rest.
  $permissions['edit field_ass_data_file_rest'] = array(
    'name' => 'edit field_ass_data_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_asst_data_url_rest.
  $permissions['edit field_asst_data_url_rest'] = array(
    'name' => 'edit field_asst_data_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_asst_report_file_rest.
  $permissions['edit field_asst_report_file_rest'] = array(
    'name' => 'edit field_asst_report_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_asst_report_url_rest.
  $permissions['edit field_asst_report_url_rest'] = array(
    'name' => 'edit field_asst_report_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ques_file_rest.
  $permissions['edit field_ques_file_rest'] = array(
    'name' => 'edit field_ques_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ques_url_rest.
  $permissions['edit field_ques_url_rest'] = array(
    'name' => 'edit field_ques_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own assessment content.
  $permissions['edit own assessment content'] = array(
    'name' => 'edit own assessment content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own field_ass_data_file_rest.
  $permissions['edit own field_ass_data_file_rest'] = array(
    'name' => 'edit own field_ass_data_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_asst_data_url_rest.
  $permissions['edit own field_asst_data_url_rest'] = array(
    'name' => 'edit own field_asst_data_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_asst_report_file_rest.
  $permissions['edit own field_asst_report_file_rest'] = array(
    'name' => 'edit own field_asst_report_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_asst_report_url_rest.
  $permissions['edit own field_asst_report_url_rest'] = array(
    'name' => 'edit own field_asst_report_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ques_file_rest.
  $permissions['edit own field_ques_file_rest'] = array(
    'name' => 'edit own field_ques_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ques_url_rest.
  $permissions['edit own field_ques_url_rest'] = array(
    'name' => 'edit own field_ques_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ass_data_file_rest.
  $permissions['view field_ass_data_file_rest'] = array(
    'name' => 'view field_ass_data_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_asst_data_url_rest.
  $permissions['view field_asst_data_url_rest'] = array(
    'name' => 'view field_asst_data_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_asst_report_file_rest.
  $permissions['view field_asst_report_file_rest'] = array(
    'name' => 'view field_asst_report_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_asst_report_url_rest.
  $permissions['view field_asst_report_url_rest'] = array(
    'name' => 'view field_asst_report_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ques_file_rest.
  $permissions['view field_ques_file_rest'] = array(
    'name' => 'view field_ques_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ques_url_rest.
  $permissions['view field_ques_url_rest'] = array(
    'name' => 'view field_ques_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ass_data_file_rest.
  $permissions['view own field_ass_data_file_rest'] = array(
    'name' => 'view own field_ass_data_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_asst_data_url_rest.
  $permissions['view own field_asst_data_url_rest'] = array(
    'name' => 'view own field_asst_data_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_asst_report_file_rest.
  $permissions['view own field_asst_report_file_rest'] = array(
    'name' => 'view own field_asst_report_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_asst_report_url_rest.
  $permissions['view own field_asst_report_url_rest'] = array(
    'name' => 'view own field_asst_report_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ques_file_rest.
  $permissions['view own field_ques_file_rest'] = array(
    'name' => 'view own field_ques_file_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ques_url_rest.
  $permissions['view own field_ques_url_rest'] = array(
    'name' => 'view own field_ques_url_rest',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
