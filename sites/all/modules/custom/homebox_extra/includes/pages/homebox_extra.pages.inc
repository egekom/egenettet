<?php

/**
 * @file
 * Homebox pages configurations.
 */

$homeboxes = array();

$homeboxes['user_dashboard'] = array(
  'regions' => 4,
  'cache' => 0,
  'color' => 0,
  'colors' => array(
    0 => '#E4F0F8',
    1 => '#E4F0F8',
    2 => '#E4F0F8',
    3 => '#E4F0F8',
    4 => '#E4F0F8',
    5 => '#E4F0F8',
  ),
  'blocks' => array(
    'homebox_custom' => array(
      'module' => 'homebox',
      'delta' => 'custom',
      'region' => 2,
      'movable' => 1,
      'status' => 1,
      'open' => 1,
      'closable' => 1,
      'title' => '',
      'weight' => -35,
    ),
    'views_flag_bookmarks_custom-block_1' => array(
      'module' => 'views',
      'delta' => 'flag_bookmarks_custom-block_1',
      'region' => 1,
      'movable' => 1,
      'status' => 1,
      'open' => 1,
      'closable' => 1,
      'title' => '',
      'weight' => -35,
    ),
    'views_my_profile_view-block' => array(
      'module' => 'views',
      'delta' => 'my_profile_view-block',
      'region' => 1,
      'movable' => 0,
      'status' => 1,
      'open' => 1,
      'closable' => 0,
      'title' => '<none>',
      'weight' => -35,
    ),
    'roskilde_customisations_roskilde_my_subscriptions' => array(
      'module' => 'roskilde_customisations',
      'delta' => 'roskilde_my_subscriptions',
      'region' => 3,
      'movable' => 1,
      'status' => 1,
      'open' => 1,
      'closable' => 1,
      'title' => '',
      'weight' => -35,
    ),
    'roskilde_customisations_roskilde_my_units' => array(
      'module' => 'roskilde_customisations',
      'delta' => 'roskilde_my_units',
      'region' => 2,
      'movable' => 1,
      'status' => 1,
      'open' => 1,
      'closable' => 1,
      'title' => '',
      'weight' => -35,
    ),
  ),
  'widths' => array(
    1 => 33,
    2 => 66,
    3 => 33,
    4 => 33,
  ),
  'title' => 'User dashboard',
  'path' => 'user-dashboard',
  'menu' => 1,
  'enabled' => 1,
  'auto_save' => 1,
  'full' => 0,
  'roles' => array(
    0 => 'authenticated user',
  ),
);
