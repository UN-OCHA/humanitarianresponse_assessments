<?php
/**
 * @file
 * humanitarianresponse_assessments.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function humanitarianresponse_assessments_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'assessments_registry';
  $context->description = 'When viewing the assessments registry';
  $context->tag = 'Assessments Registry';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'assessment_registry' => 'assessment_registry',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-vmG6AJo392ZMavpGBkd1icOjK38XLc1o' => array(
          'module' => 'facetapi',
          'delta' => 'vmG6AJo392ZMavpGBkd1icOjK38XLc1o',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'facetapi-g61DKbF1vX01hU2bNZNCvRE00022BALy' => array(
          'module' => 'facetapi',
          'delta' => 'g61DKbF1vX01hU2bNZNCvRE00022BALy',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
        'facetapi-FLJW0A0hfwMg962yNLu8abctyWb08LpB' => array(
          'module' => 'facetapi',
          'delta' => 'FLJW0A0hfwMg962yNLu8abctyWb08LpB',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
        'facetapi-Chocc6kACGZ7gfHlqupvyGsixs10PQPa' => array(
          'module' => 'facetapi',
          'delta' => 'Chocc6kACGZ7gfHlqupvyGsixs10PQPa',
          'region' => 'sidebar_first',
          'weight' => '3',
        ),
        'facetapi-QSv82X0K8EOR4J2rlGvJyN4QAw2qMqGE' => array(
          'module' => 'facetapi',
          'delta' => 'QSv82X0K8EOR4J2rlGvJyN4QAw2qMqGE',
          'region' => 'sidebar_first',
          'weight' => '4',
        ),
        'facetapi-Ot1PyWcMUktODO9nQBv19n3jbTeMfOl6' => array(
          'module' => 'facetapi',
          'delta' => 'Ot1PyWcMUktODO9nQBv19n3jbTeMfOl6',
          'region' => 'sidebar_first',
          'weight' => '5',
        ),
        'facetapi-8jtiZL9FebFah8T1GZbx02LOaQYDa34J' => array(
          'module' => 'facetapi',
          'delta' => '8jtiZL9FebFah8T1GZbx02LOaQYDa34J',
          'region' => 'sidebar_first',
          'weight' => '6',
        ),
        'facetapi-60d800MpXecQ1N1y12NQisjQ01ugutsb' => array(
          'module' => 'facetapi',
          'delta' => '60d800MpXecQ1N1y12NQisjQ01ugutsb',
          'region' => 'sidebar_first',
          'weight' => '7',
        ),
        'facetapi-iWDczuDn1X9906FT24M24IMq0b1kCeur' => array(
          'module' => 'facetapi',
          'delta' => 'iWDczuDn1X9906FT24M24IMq0b1kCeur',
          'region' => 'sidebar_first',
          'weight' => '8',
        ),
        'facetapi-LUjzSN7pD0i4cFyNtVO4a4ofHBeqEZht' => array(
          'module' => 'facetapi',
          'delta' => 'LUjzSN7pD0i4cFyNtVO4a4ofHBeqEZht',
          'region' => 'sidebar_first',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Assessments Registry');
  t('When viewing the assessments registry');
  $export['assessments_registry'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'assessments_registry_master';
  $context->description = 'When searching the assessments registry';
  $context->tag = 'Assessments Registry';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'assessment_registry:page' => 'assessment_registry:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-assessment_registry2-page' => array(
          'module' => 'views',
          'delta' => '-exp-assessment_registry2-page',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'search_api_sorts-search-sorts' => array(
          'module' => 'search_api_sorts',
          'delta' => 'search-sorts',
          'region' => 'sidebar_first',
          'weight' => '40',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Assessments Registry');
  t('When searching the assessments registry');
  $export['assessments_registry_master'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'assessments_registry_table';
  $context->description = 'When searching the assessments registry';
  $context->tag = 'Assessments Registry';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'assessment_registry:table' => 'assessment_registry:table',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-assessment_registry2-table' => array(
          'module' => 'views',
          'delta' => '-exp-assessment_registry2-table',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'search_api_sorts-search-sorts' => array(
          'module' => 'search_api_sorts',
          'delta' => 'search-sorts',
          'region' => 'sidebar_first',
          'weight' => '40',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Assessments Registry');
  t('When searching the assessments registry');
  $export['assessments_registry_table'] = $context;

  return $export;
}
