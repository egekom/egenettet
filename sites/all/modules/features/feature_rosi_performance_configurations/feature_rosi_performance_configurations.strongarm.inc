<?php
/**
 * @file
 * feature_rosi_performance_configurations.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_rosi_performance_configurations_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_form_base_id_token';
  $strongarm->value = '*';
  $export['authcache_form_base_id_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_form_cache_lifespan';
  $strongarm->value = '604800';
  $export['authcache_form_cache_lifespan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_form_notoken';
  $strongarm->value = '';
  $export['authcache_form_notoken'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_form_notoken_roles';
  $strongarm->value = '';
  $export['authcache_form_notoken_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_form_roles';
  $strongarm->value = '';
  $export['authcache_form_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_http200';
  $strongarm->value = 1;
  $export['authcache_http200'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_mimetype';
  $strongarm->value = 'text/html
text/javascript
text/plain
application/xml
application/atom+xml
';
  $export['authcache_mimetype'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_pagecaching';
  $strongarm->value = array(
    0 => array(
      'option' => '0',
      'pages' => 'user*
node/add/*
node/*/edit
node/*/track
tracker*
comment/edit*
civicrm*
cart*
checkout*
system/files/*
system/temporary*
file/ajax/*
js/admin_menu/cache/*
',
      'noadmin' => 1,
      'roles' => array(
        'custom' => '1',
        'roles' => array(
          2 => '2',
          3 => '3',
          17 => '17',
          4 => '4',
          14 => '14',
          19 => '19',
          18 => '18',
        ),
      ),
      'remove_rule' => 'Delete ruleset #1',
    ),
    1 => array(
      'option' => '0',
      'pages' => 'user*
node/add/*
node/*/edit
node/*/track
tracker*
comment/edit*
civicrm*
cart*
checkout*
system/files/*
system/temporary*
file/ajax/*
js/admin_menu/cache/*
',
      'noadmin' => 1,
      'roles' => array(
        'custom' => '1',
        'roles' => array(
          1 => '1',
          2 => '2',
          3 => '3',
          17 => '17',
          4 => '4',
          14 => '14',
          19 => '19',
          18 => '18',
        ),
      ),
      'remove_rule' => 'Delete ruleset #2',
    ),
  );
  $export['authcache_pagecaching'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_roles';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
    3 => '3',
    17 => '17',
    4 => '4',
    14 => '14',
    19 => '19',
    18 => '18',
  );
  $export['authcache_roles'] = $strongarm;

  return $export;
}
