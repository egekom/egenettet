<?php
/**
 * @file
 * feature_egedal_block_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_egedal_block_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-footer_elements'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'footer_elements',
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
        'region' => 'bottom',
        'status' => 1,
        'theme' => 'egedal',
        'weight' => -34,
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

  $export['block-footer_logo_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'footer_logo_block',
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
        'region' => 'bottom',
        'status' => 1,
        'theme' => 'egedal',
        'weight' => -33,
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
