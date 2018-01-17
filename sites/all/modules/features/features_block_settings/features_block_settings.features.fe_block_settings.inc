<?php
/**
 * @file
 * features_block_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_block_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-help',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
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
        'region' => '',
        'status' => 0,
        'theme' => 'egedal',
        'weight' => -32,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-footer_menu_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'footer_menu_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'administration_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'administration_theme',
        'weight' => 0,
      ),
      'egedal' => array(
        'region' => 'footer',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['roskilde_user_extra-roskilde_user_information_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'roskilde_user_information_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'roskilde_user_extra',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'administration_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'administration_theme',
        'weight' => -30,
      ),
      'egedal' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'egedal',
        'weight' => -30,
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
