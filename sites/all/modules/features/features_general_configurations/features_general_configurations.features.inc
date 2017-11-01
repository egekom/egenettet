<?php
/**
 * @file
 * features_general_configurations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_general_configurations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function features_general_configurations_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmarks".
  $flags['bookmarks'] = array(
    'entity_type' => 'node',
    'title' => 'Bookmarks',
    'global' => 0,
    'types' => array(
      0 => 'article',
      1 => 'short_news',
      2 => 'event',
      3 => 'unit',
      4 => 'front_page',
      5 => 'short_event',
      6 => 'editorial_news',
      7 => 'subpage',
      8 => 'topic_frontpage',
      9 => 'topic_page',
      10 => 'webform',
    ),
    'flag_short' => 'Save',
    'flag_long' => 'Add this post to your bookmarks',
    'flag_message' => 'This post has been added to your bookmarks',
    'unflag_short' => 'Unbookmark',
    'unflag_long' => 'Remove this post from your bookmarks',
    'unflag_message' => 'This post has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'news_list_first' => 0,
      'my_page' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'features_general_configurations',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Favorite colleagues".
  $flags['favorite_colleagues'] = array(
    'entity_type' => 'node',
    'title' => 'Favorite colleagues',
    'global' => 0,
    'types' => array(
      0 => 'phonebook',
    ),
    'flag_short' => 'Favorite',
    'flag_long' => 'Add this colleague to your favorite colleagues',
    'flag_message' => 'This colleague has been added to your favorite colleagues',
    'unflag_short' => 'Unfavorite',
    'unflag_long' => 'Remove this colleague from your favorite colleagues',
    'unflag_message' => 'This colleague has been removed from your favorite colleagues',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'news_list_first' => 0,
      'my_page' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'features_general_configurations',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
