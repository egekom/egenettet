<?php
/**
 * @file
 * features_piwik_configurations.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_piwik_configurations_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_piwik_stats';
  $strongarm->value = 1455614455;
  $export['cache_flush_cache_piwik_stats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_temporary_flush_cache_piwik_stats';
  $strongarm->value = 1444212312;
  $export['cache_temporary_flush_cache_piwik_stats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_cache';
  $strongarm->value = 0;
  $export['piwik_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_codesnippet_after';
  $strongarm->value = '';
  $export['piwik_codesnippet_after'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_codesnippet_before';
  $strongarm->value = '';
  $export['piwik_codesnippet_before'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_custom';
  $strongarm->value = '0';
  $export['piwik_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_custom_var';
  $strongarm->value = array(
    'slots' => array(
      1 => array(
        'slot' => 1,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
      2 => array(
        'slot' => 2,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
      3 => array(
        'slot' => 3,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
      4 => array(
        'slot' => 4,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
      5 => array(
        'slot' => 5,
        'name' => '',
        'value' => '',
        'scope' => 'visit',
      ),
    ),
  );
  $export['piwik_custom_var'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_domain_mode';
  $strongarm->value = '0';
  $export['piwik_domain_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_js_scope';
  $strongarm->value = 'header';
  $export['piwik_js_scope'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_pages';
  $strongarm->value = 'admin
admin/*
batch
node/add*
node/*/*
user/*/*';
  $export['piwik_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_page_title_hierarchy';
  $strongarm->value = 0;
  $export['piwik_page_title_hierarchy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_page_title_hierarchy_exclude_home';
  $strongarm->value = 1;
  $export['piwik_page_title_hierarchy_exclude_home'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_privacy_donottrack';
  $strongarm->value = 1;
  $export['piwik_privacy_donottrack'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_roles';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    3 => 0,
  );
  $export['piwik_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_site_id';
  $strongarm->value = '1';
  $export['piwik_site_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_site_search';
  $strongarm->value = 0;
  $export['piwik_site_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_stats_cron_fill';
  $strongarm->value = 1;
  $export['piwik_stats_cron_fill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_stats_cron_fill_time';
  $strongarm->value = '30';
  $export['piwik_stats_cron_fill_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_stats_request_timeout';
  $strongarm->value = '30';
  $export['piwik_stats_request_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_stats_token_auth';
  $strongarm->value = '7917f2596f8bb70c954893f200ba6274';
  $export['piwik_stats_token_auth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_track';
  $strongarm->value = 1;
  $export['piwik_track'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_trackfiles_extensions';
  $strongarm->value = '7z|aac|arc|arj|asf|asx|avi|bin|csv|doc(x|m)?|dot(x|m)?|exe|flv|gif|gz|gzip|hqx|jar|jpe?g|js|mp(2|3|4|e?g)|mov(ie)?|msi|msp|pdf|phps|png|ppt(x|m)?|pot(x|m)?|pps(x|m)?|ppam|sld(x|m)?|thmx|qtm?|ra(m|r)?|sea|sit|tar|tgz|torrent|txt|wav|wma|wmv|wpd|xls(x|m|b)?|xlt(x|m)|xlam|xml|z|zip';
  $export['piwik_trackfiles_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_trackmailto';
  $strongarm->value = 1;
  $export['piwik_trackmailto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_trackmessages';
  $strongarm->value = array(
    'status' => 0,
    'warning' => 0,
    'error' => 0,
  );
  $export['piwik_trackmessages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_trackuserid';
  $strongarm->value = 0;
  $export['piwik_trackuserid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_url_http';
  $strongarm->value = 'http://piwik.roskilde-intranet.workingpropeople.com/';
  $export['piwik_url_http'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_url_https';
  $strongarm->value = '';
  $export['piwik_url_https'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_url_skiperror';
  $strongarm->value = '';
  $export['piwik_url_skiperror'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_visibility_pages';
  $strongarm->value = '0';
  $export['piwik_visibility_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_visibility_roles';
  $strongarm->value = '0';
  $export['piwik_visibility_roles'] = $strongarm;

  return $export;
}
