<?php
/**
 * @file
 * features_search_faq_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_search_faq_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
