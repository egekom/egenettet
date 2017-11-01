<?php
/**
 * @file
 * features_context_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function features_context_config_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_dashboard';
  $context->description = '';
  $context->tag = 'homebox';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user/*/user-dashboard' => 'user/*/user-dashboard',
        'user/*/bookmarks' => 'user/*/bookmarks',
        'user/*/favorite-colleagues' => 'user/*/favorite-colleagues',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'roskilde_menu-roskilde_user_dashboard_menu' => array(
          'module' => 'roskilde_menu',
          'delta' => 'roskilde_user_dashboard_menu',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('homebox');
  $export['user_dashboard'] = $context;

  return $export;
}
