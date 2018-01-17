<?php
/**
 * @file
 * features_phonebook_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_phonebook_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['roskilde_phonebook-phonebook_search_form'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'phonebook_search_form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'roskilde_phonebook',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'administration_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'administration_theme',
        'weight' => 0,
      ),
      'egedal' => array(
        'region' => 'header',
        'status' => 1,
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
