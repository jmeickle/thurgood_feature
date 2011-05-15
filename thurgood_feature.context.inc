<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function thurgood_feature_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thurgood_sidebar_article';
  $context->description = 'Thurgood: Article View Sidebar.';
  $context->tag = 'thurgood';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-3' => array(
          'module' => 'quicktabs',
          'delta' => 3,
          'region' => 'mid',
          'weight' => 0,
        ),
        'quicktabs-1' => array(
          'module' => 'quicktabs',
          'delta' => 1,
          'region' => 'mid',
          'weight' => 1,
        ),
        'quicktabs-2' => array(
          'module' => 'quicktabs',
          'delta' => 2,
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thurgood: Article View Sidebar.');
  t('thurgood');

  $export['thurgood_sidebar_article'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thurgood_sidebar_dashboard';
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

  $export['thurgood_sidebar_dashboard'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thurgood_sidebar_event';
  $context->description = 'Thurgood: Event View Sidebar.';
  $context->tag = 'thurgood';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
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
          'region' => 'mid',
          'weight' => 0,
        ),
        'quicktabs-1' => array(
          'module' => 'quicktabs',
          'delta' => 1,
          'region' => 'mid',
          'weight' => 1,
        ),
        'quicktabs-2' => array(
          'module' => 'quicktabs',
          'delta' => 2,
          'region' => 'right',
          'weight' => 0,
        ),
        'views-thurgood_block_map-block_2' => array(
          'module' => 'views',
          'delta' => 'thurgood_block_map-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-thurgood_block_map-block_3' => array(
          'module' => 'views',
          'delta' => 'thurgood_block_map-block_3',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thurgood: Event View Sidebar.');
  t('thurgood');

  $export['thurgood_sidebar_event'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thurgood_sidebar_node';
  $context->description = 'Thurgood: Sidebar (Any Node)';
  $context->tag = 'thurgood';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'event' => 'event',
        'organization' => 'organization',
        'person' => 'person',
        'place' => 'place',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'thurgood_custom_module-actions' => array(
          'module' => 'thurgood_custom_module',
          'delta' => 'actions',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thurgood: Sidebar (Any Node)');
  t('thurgood');

  $export['thurgood_sidebar_node'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thurgood_sidebar_organization';
  $context->description = 'Thurgood: Organization View Sidebar.';
  $context->tag = 'thurgood';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'organization' => 'organization',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-5' => array(
          'module' => 'quicktabs',
          'delta' => 5,
          'region' => 'mid',
          'weight' => 0,
        ),
        'quicktabs-1' => array(
          'module' => 'quicktabs',
          'delta' => 1,
          'region' => 'mid',
          'weight' => 1,
        ),
        'quicktabs-2' => array(
          'module' => 'quicktabs',
          'delta' => 2,
          'region' => 'right',
          'weight' => 0,
        ),
        'views-thurgood_block_map-block_2' => array(
          'module' => 'views',
          'delta' => 'thurgood_block_map-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-thurgood_block_map-block_3' => array(
          'module' => 'views',
          'delta' => 'thurgood_block_map-block_3',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thurgood: Organization View Sidebar.');
  t('thurgood');

  $export['thurgood_sidebar_organization'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thurgood_sidebar_person';
  $context->description = 'Thurgood: Person View Sidebar.';
  $context->tag = 'thurgood';
  $context->conditions = array(
    'node' => array(
      'values' => array(
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
        'quicktabs-6' => array(
          'module' => 'quicktabs',
          'delta' => 6,
          'region' => 'mid',
          'weight' => 0,
        ),
        'quicktabs-1' => array(
          'module' => 'quicktabs',
          'delta' => 1,
          'region' => 'mid',
          'weight' => 1,
        ),
        'quicktabs-2' => array(
          'module' => 'quicktabs',
          'delta' => 2,
          'region' => 'right',
          'weight' => 0,
        ),
        'views-thurgood_block_map-block_2' => array(
          'module' => 'views',
          'delta' => 'thurgood_block_map-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-thurgood_block_map-block_3' => array(
          'module' => 'views',
          'delta' => 'thurgood_block_map-block_3',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thurgood: Person View Sidebar.');
  t('thurgood');

  $export['thurgood_sidebar_person'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thurgood_sidebar_place';
  $context->description = 'Thurgood: Place View Sidebar.';
  $context->tag = 'thurgood';
  $context->conditions = array(
    'node' => array(
      'values' => array(
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
        'quicktabs-7' => array(
          'module' => 'quicktabs',
          'delta' => 7,
          'region' => 'mid',
          'weight' => 0,
        ),
        'quicktabs-1' => array(
          'module' => 'quicktabs',
          'delta' => 1,
          'region' => 'mid',
          'weight' => 1,
        ),
        'quicktabs-2' => array(
          'module' => 'quicktabs',
          'delta' => 2,
          'region' => 'right',
          'weight' => 0,
        ),
        'views-thurgood_block_map-block_2' => array(
          'module' => 'views',
          'delta' => 'thurgood_block_map-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-thurgood_block_map-block_3' => array(
          'module' => 'views',
          'delta' => 'thurgood_block_map-block_3',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thurgood: Place View Sidebar.');
  t('thurgood');

  $export['thurgood_sidebar_place'] = $context;
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
