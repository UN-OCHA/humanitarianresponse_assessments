<?php
/**
 * @file
 * humanitarianresponse_assessments.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function humanitarianresponse_assessments_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_assessments';
  $feeds_importer->config = array(
    'name' => 'CSV Humanitarian Response Assessments',
    'description' => 'Humanitarian Response Assessments Importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Clusters',
            'target' => 'field_clusters',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Leading/Coordination Organizations',
            'target' => 'field_organizations',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Participating Organization(s)',
            'target' => 'field_asst_participating_org',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Assessment Title',
            'target' => 'title_field:et:en',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Location',
            'target' => 'field_locations',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Other location',
            'target' => 'field_asst_other_location',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Subject/Objective',
            'target' => 'field_asst_subject',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Methodology',
            'target' => 'field_asst_methodology',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Key findings',
            'target' => 'field_asst_key_findings',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Unit of Measurement',
            'target' => 'field_asst_unit',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Collection Method',
            'target' => 'field_asst_collection_method',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Sample Size',
            'target' => 'field_asst_sample_size',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Level of Representation',
            'target' => 'field_asst_level_representation',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Type of Population',
            'target' => 'field_population_type',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Assessment Start Date',
            'target' => 'field_asst_start_date:start',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Assessment Start Date',
            'target' => 'field_asst_start_date:end',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Frequency',
            'target' => 'field_asst_freq',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Assessment Status',
            'target' => 'field_asst_status',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Report Accessibility',
            'target' => 'field_asst_report:field_report_accessibility',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Assessment Report File',
            'target' => 'field_asst_report:field_asst_report_file',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'Assessment Report URL',
            'target' => 'field_asst_report:field_asst_report_url:url',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Questionaire Accessibility',
            'target' => 'field_asst_questionnaire:field_ques_accessibility',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Questionaire File',
            'target' => 'field_asst_questionnaire:field_ques_file',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'Questionaire URL',
            'target' => 'field_asst_questionnaire:field_ques_url:url',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'Data Accessibility',
            'target' => 'field_asst_data:field_data_accessibility',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'Assessment Data Fle',
            'target' => 'field_asst_data:field_asst_data_file',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'Contact Name',
            'target' => 'field_asst_contact_name',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'Contact Telephone/Mobile',
            'target' => 'field_asst_contact_telephone',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'Contact Email',
            'target' => 'field_asst_contact_email',
            'unique' => FALSE,
          ),
          29 => array(
            'source' => 'Theme(s)',
            'target' => 'field_themes',
            'unique' => FALSE,
          ),
          30 => array(
            'source' => 'Local Themes',
            'target' => 'field_local_themes',
            'unique' => FALSE,
          ),
          31 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          32 => array(
            'source' => 'URL',
            'target' => 'url',
            'unique' => FALSE,
          ),
          33 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'assessment',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['csv_assessments'] = $feeds_importer;

  return $export;
}
