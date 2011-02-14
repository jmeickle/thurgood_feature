<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function thurgood_feature_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'testcontext';
  $context->description = 'Thurgood: Dashboard Sidebar';
  $context->tag = 'thurgood';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dashboard' => 'dashboard',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-thurgood_block_user-block_1' => array(
          'module' => 'views',
          'delta' => 'thurgood_block_user-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thurgood: Dashboard Sidebar');
  t('thurgood');

  $export['testcontext'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thurgood_sidebar_node';
  $context->description = 'Thurgood: Node View Sidebar.';
  $context->tag = 'thurgood';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'event' => 'event',
        'place' => 'place',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-2' => array(
          'module' => 'quicktabs',
          'delta' => 2,
          'region' => 'right',
          'weight' => 0,
        ),
        'quicktabs-1' => array(
          'module' => 'quicktabs',
          'delta' => 1,
          'region' => 'right',
          'weight' => 1,
        ),
        'quicktabs-3' => array(
          'module' => 'quicktabs',
          'delta' => 3,
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thurgood: Node View Sidebar.');
  t('thurgood');

  $export['thurgood_sidebar_node'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thurgood_sidebar_node_alt';
  $context->description = 'Thurgood: Node View Sidebar (Alternative).';
  $context->tag = 'thurgood';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'organization' => 'organization',
        'person' => 'person',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-4' => array(
          'module' => 'quicktabs',
          'delta' => 4,
          'region' => 'right',
          'weight' => 0,
        ),
        'quicktabs-1' => array(
          'module' => 'quicktabs',
          'delta' => 1,
          'region' => 'right',
          'weight' => 1,
        ),
        'quicktabs-3' => array(
          'module' => 'quicktabs',
          'delta' => 3,
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thurgood: Node View Sidebar (Alternative).');
  t('thurgood');

  $export['thurgood_sidebar_node_alt'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thurgood_sidebar_search';
  $context->description = 'Thurgood: Faceted Search Sidebar';
  $context->tag = 'thurgood';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'place/search/*' => 'place/search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'faceted_search_ui-1_keyword' => array(
          'module' => 'faceted_search_ui',
          'delta' => '1_keyword',
          'region' => 'right',
          'weight' => 0,
        ),
        'faceted_search_ui-1_current' => array(
          'module' => 'faceted_search_ui',
          'delta' => '1_current',
          'region' => 'right',
          'weight' => 1,
        ),
        'faceted_search_ui-1_guided' => array(
          'module' => 'faceted_search_ui',
          'delta' => '1_guided',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thurgood: Faceted Search Sidebar');
  t('thurgood');

  $export['thurgood_sidebar_search'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thurgood_sidebar_user';
  $context->description = 'Thurgood: User View Sidebar.';
  $context->tag = 'thurgood';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-2' => array(
          'module' => 'quicktabs',
          'delta' => 2,
          'region' => 'right',
          'weight' => 0,
        ),
        'quicktabs-1' => array(
          'module' => 'quicktabs',
          'delta' => 1,
          'region' => 'right',
          'weight' => 1,
        ),
        'quicktabs-3' => array(
          'module' => 'quicktabs',
          'delta' => 3,
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thurgood: User View Sidebar.');
  t('thurgood');

  $export['thurgood_sidebar_user'] = $context;
  return $export;
}
