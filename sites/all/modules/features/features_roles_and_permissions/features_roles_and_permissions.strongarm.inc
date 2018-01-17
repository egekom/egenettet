<?php
/**
 * @file
 * features_roles_and_permissions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_roles_and_permissions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess-grants';
  $strongarm->value = array(
    'view' => 1,
    'edit' => 1,
    'delete' => 1,
  );
  $export['nodeaccess-grants'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess-preserve';
  $strongarm->value = 1;
  $export['nodeaccess-preserve'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess-priority';
  $strongarm->value = 0;
  $export['nodeaccess-priority'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess-roles';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    3 => 1,
    4 => 1,
    5 => 1,
  );
  $export['nodeaccess-roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess-types';
  $strongarm->value = array(
    'banner_element' => 0,
    'banner_link' => 0,
    'editorial_news' => 0,
    'event' => 0,
    'faq_qa' => 0,
    'feed' => 0,
    'feed_item' => 0,
    'front_page' => 0,
    'link_list' => 0,
    'personal_note' => 0,
    'short_news' => 0,
    'subpage' => 0,
    'topic_frontpage' => 0,
    'topic_page' => 0,
    'unit' => 0,
    'warning' => 0,
    'webform' => 0,
    'phonebook' => 1,
    'short_event' => 0,
  );
  $export['nodeaccess-types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_authors';
  $strongarm->value = array(
    'banner_element' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'banner_link' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'editorial_news' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'event' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'faq_qa' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'feed' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'feed_item' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'front_page' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'link_list' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'personal_note' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'short_news' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'subpage' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'topic_frontpage' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'topic_page' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'unit' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'warning' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'webform' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'phonebook' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'short_event' => array(
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    'promoted_search_results' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'article' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'agreements' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_banner_element';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
  );
  $export['nodeaccess_banner_element'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_banner_link';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
  );
  $export['nodeaccess_banner_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_editorial_news';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
  );
  $export['nodeaccess_editorial_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_event';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_faq_qa';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
  );
  $export['nodeaccess_faq_qa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_feed';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_feed_item';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_feed_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_front_page';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_front_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_link_list';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
  );
  $export['nodeaccess_link_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_personal_note';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_personal_note'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_phonebook';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_phonebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_short_event';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_short_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_short_news';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_short_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_subpage';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
  );
  $export['nodeaccess_subpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_topic_frontpage';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
  );
  $export['nodeaccess_topic_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_topic_page';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
  );
  $export['nodeaccess_topic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_unit';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
  );
  $export['nodeaccess_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_warning';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
  );
  $export['nodeaccess_warning'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_webform';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    3 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
  );
  $export['nodeaccess_webform'] = $strongarm;

  return $export;
}
