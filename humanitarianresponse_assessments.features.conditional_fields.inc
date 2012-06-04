<?php
/**
 * @file
 * humanitarianresponse_assessments.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function humanitarianresponse_assessments_conditional_fields_default_fields() {
  $items = array();

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_data',
    'dependent' => 'field_ass_data_file_rest',
    'dependee' => 'field_data_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => '_none',
      'values' => array(
        0 => 'Publicly Available',
        1 => 'Available on Request',
        2 => 'Not Available',
        3 => 'Not Applicable',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_data',
    'dependent' => 'field_asst_data_file',
    'dependee' => 'field_data_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => '_none',
      'values' => array(
        0 => 'Restricted Distribution',
        1 => 'Available on Request',
        2 => 'Not Available',
        3 => 'Not Applicable',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_data',
    'dependent' => 'field_asst_data_instruction',
    'dependee' => 'field_data_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => '_none',
      'values' => array(
        0 => 'Not Available',
        1 => 'Not Applicable',
        2 => 'Publicly Available',
        3 => 'Restricted Distribution',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_data',
    'dependent' => 'field_asst_data_url',
    'dependee' => 'field_data_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => '_none',
      'values' => array(
        0 => 'Restricted Distribution',
        1 => 'Available on Request',
        2 => 'Not Available',
        3 => 'Not Applicable',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_data',
    'dependent' => 'field_asst_data_url_rest',
    'dependee' => 'field_data_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => '_none',
      'values' => array(
        0 => 'Publicly Available',
        1 => 'Available on Request',
        2 => 'Not Available',
        3 => 'Not Applicable',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_questionnaire',
    'dependent' => 'field_ques_file',
    'dependee' => 'field_ques_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => '_none',
      'values' => array(
        0 => 'Restricted Distribution',
        1 => 'Available on Request',
        2 => 'Not Available',
        3 => 'Not Applicable',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_questionnaire',
    'dependent' => 'field_ques_file_rest',
    'dependee' => 'field_ques_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => '_none',
      'values' => array(
        0 => 'Publicly Available',
        1 => 'Available on Request',
        2 => 'Not Available',
        3 => 'Not Applicable',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_questionnaire',
    'dependent' => 'field_ques_instructions',
    'dependee' => 'field_ques_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => '_none',
      'values' => array(
        0 => 'Not Available',
        1 => 'Not Applicable',
        2 => 'Publicly Available',
        3 => 'Restricted Distribution',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_questionnaire',
    'dependent' => 'field_ques_url',
    'dependee' => 'field_ques_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => '_none',
      'values' => array(
        0 => 'Restricted Distribution',
        1 => 'Available on Request',
        2 => 'Not Available',
        3 => 'Not Applicable',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_questionnaire',
    'dependent' => 'field_ques_url_rest',
    'dependee' => 'field_ques_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => '_none',
      'values' => array(
        0 => 'Publicly Available',
        1 => 'Available on Request',
        2 => 'Not Available',
        3 => 'Not Applicable',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_report',
    'dependent' => 'field_asst_report_file',
    'dependee' => 'field_report_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => '_none',
      'values' => array(
        0 => 'Restricted Distribution',
        1 => 'Available on Request',
        2 => 'Not Available',
        3 => 'Not Applicable',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_report',
    'dependent' => 'field_asst_report_file_rest',
    'dependee' => 'field_report_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => 'Available on Request',
      'values' => array(
        0 => 'Publicly Available',
        1 => 'Available on Request',
        2 => 'Not Available',
        3 => 'Not Applicable',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_report',
    'dependent' => 'field_asst_report_inst',
    'dependee' => 'field_report_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => '_none',
      'values' => array(
        0 => 'Not Available',
        1 => 'Not Applicable',
        2 => 'Publicly Available',
        3 => 'Restricted Distribution',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_report',
    'dependent' => 'field_asst_report_url',
    'dependee' => 'field_report_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => 'Available on Request',
      'values' => array(
        0 => 'Restricted Distribution',
        1 => 'Available on Request',
        2 => 'Not Available',
        3 => 'Not Applicable',
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'field_collection_item',
    'bundle' => 'field_asst_report',
    'dependent' => 'field_asst_report_url_rest',
    'dependee' => 'field_report_accessibility',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        6 => array(
          1 => '1',
          3 => 0,
        ),
        5 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '5',
      'value_form' => 'Available on Request',
      'values' => array(
        0 => 'Publicly Available',
        1 => 'Available on Request',
        2 => 'Not Available',
        3 => 'Not Applicable',
      ),
      'value' => array(),
    ),
  );

  return $items;
}
