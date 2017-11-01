<?php
/**
 * @file
 * features_roskilde_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_roskilde_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-my_bookmarks'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'my_bookmarks',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'administration_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'administration_theme',
        'weight' => -29,
      ),
      'egedal' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'egedal',
        'weight' => -29,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
