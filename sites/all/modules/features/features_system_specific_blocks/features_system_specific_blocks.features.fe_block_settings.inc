<?php
/**
 * @file
 * features_system_specific_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_system_specific_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-search_info_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'search_info_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'administration_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'administration_theme',
        'weight' => 0,
      ),
      'egedal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'egedal',
        'weight' => 0,
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
