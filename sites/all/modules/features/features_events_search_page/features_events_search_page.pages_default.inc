<?php
/**
 * @file
 * features_events_search_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function features_events_search_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events_search_page';
  $page->task = 'page';
  $page->admin_title = 'Events search page';
  $page->admin_description = '';
  $page->path = 'search/events/!input';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'name' => 'menu-search-pages',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'input' => array(
      'id' => 1,
      'identifier' => 'Input string',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_search_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events_search_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'flag-event-search-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'panels_twocol_75_25_top_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = '4ad26bbf-4118-45ec-b0db-2928bfbaa1e3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-755bb1f5-2ee5-4e32-86bd-f236150f43f7';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'apachesolr_search-sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '755bb1f5-2ee5-4e32-86bd-f236150f43f7';
    $display->content['new-755bb1f5-2ee5-4e32-86bd-f236150f43f7'] = $pane;
    $display->panels['left'][0] = 'new-755bb1f5-2ee5-4e32-86bd-f236150f43f7';
    $pane = new stdClass();
    $pane->pid = 'new-c60933d0-5a08-4faf-a92b-136d854611d0';
    $pane->panel = 'left';
    $pane->type = 'apachesolr_result';
    $pane->subtype = 'apachesolr_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'keys_action' => 'none',
      'keys' => '',
      'keys_required' => 0,
      'filters_action' => 'override',
      'filters' => 'bundle:"event" OR bundle:"short_event"',
      'rows' => '10',
      'env_id' => '',
      'sort_action' => 'none',
      'sort' => '',
      'breadcrumb' => 0,
      'title_override' => 1,
      'title_override_text' => '',
      'empty_override' => 0,
      'empty_override_title' => '',
      'empty_override_text' => array(
        'value' => '',
        'format' => 'plain_text',
      ),
      'empty_override_format' => 'plain_text',
      'log' => 0,
      'substitute' => 0,
      'context' => 'argument_string_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'events-apachesolr-results',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c60933d0-5a08-4faf-a92b-136d854611d0';
    $display->content['new-c60933d0-5a08-4faf-a92b-136d854611d0'] = $pane;
    $display->panels['left'][1] = 'new-c60933d0-5a08-4faf-a92b-136d854611d0';
    $pane = new stdClass();
    $pane->pid = 'new-c824b6ac-3230-44d1-8ee3-088c0d880a69';
    $pane->panel = 'right';
    $pane->type = 'roskilde_search_tabs_title';
    $pane->subtype = 'roskilde_search_tabs_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 1,
      'override_title_text' => 'Filtrér',
      'override_title_heading' => 'h2',
      'form_build_id' => 'form--K8_gPVq6x7BDADLL08xJoZE2hQA3c1Ph96CJ9JDPXo',
      'form_token' => '-FvXIq84vnLYDWU2e77C84zkqRfKTcy-73dZouniux0',
      'form_id' => 'roskilde_search_title_pane_settings',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c824b6ac-3230-44d1-8ee3-088c0d880a69';
    $display->content['new-c824b6ac-3230-44d1-8ee3-088c0d880a69'] = $pane;
    $display->panels['right'][0] = 'new-c824b6ac-3230-44d1-8ee3-088c0d880a69';
    $pane = new stdClass();
    $pane->pid = 'new-3bbfe2ad-c6b9-40f3-a2a4-a371fa3e3111';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-9bZAL7UEIlsVZIEcI2g1Mv7I1YBdyvST';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3bbfe2ad-c6b9-40f3-a2a4-a371fa3e3111';
    $display->content['new-3bbfe2ad-c6b9-40f3-a2a4-a371fa3e3111'] = $pane;
    $display->panels['right'][1] = 'new-3bbfe2ad-c6b9-40f3-a2a4-a371fa3e3111';
    $pane = new stdClass();
    $pane->pid = 'new-daf8e92e-b5fd-45f2-8115-087ca3ac3a44';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-tFjx44VAFhy8SO3LclMzfIBqklvOT1bQ';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'daf8e92e-b5fd-45f2-8115-087ca3ac3a44';
    $display->content['new-daf8e92e-b5fd-45f2-8115-087ca3ac3a44'] = $pane;
    $display->panels['right'][2] = 'new-daf8e92e-b5fd-45f2-8115-087ca3ac3a44';
    $pane = new stdClass();
    $pane->pid = 'new-028b5c00-dace-4da3-8d80-b626c5095514';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '028b5c00-dace-4da3-8d80-b626c5095514';
    $display->content['new-028b5c00-dace-4da3-8d80-b626c5095514'] = $pane;
    $display->panels['right'][3] = 'new-028b5c00-dace-4da3-8d80-b626c5095514';
    $pane = new stdClass();
    $pane->pid = 'new-9dd7c562-7dc0-433a-8dc4-9185b012f0e9';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-CpARaxNmee0matckDqh62KqONHgbRWiw';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Kanal',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '9dd7c562-7dc0-433a-8dc4-9185b012f0e9';
    $display->content['new-9dd7c562-7dc0-433a-8dc4-9185b012f0e9'] = $pane;
    $display->panels['right'][4] = 'new-9dd7c562-7dc0-433a-8dc4-9185b012f0e9';
    $pane = new stdClass();
    $pane->pid = 'new-f1494452-84ce-45cd-8685-dbec771f664b';
    $pane->panel = 'right';
    $pane->type = 'facetapi_reset_link';
    $pane->subtype = 'facetapi_reset_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'search-filters bottom',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f1494452-84ce-45cd-8685-dbec771f664b';
    $display->content['new-f1494452-84ce-45cd-8685-dbec771f664b'] = $pane;
    $display->panels['right'][5] = 'new-f1494452-84ce-45cd-8685-dbec771f664b';
    $pane = new stdClass();
    $pane->pid = 'new-a75ac46c-ebd5-4197-a3a8-0f494b2f8e08';
    $pane->panel = 'top';
    $pane->type = 'apachesolr_form';
    $pane->subtype = 'apachesolr_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path_type' => 'same',
      'path' => '',
      'override_prompt' => 0,
      'prompt' => '',
      'show_keys' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a75ac46c-ebd5-4197-a3a8-0f494b2f8e08';
    $display->content['new-a75ac46c-ebd5-4197-a3a8-0f494b2f8e08'] = $pane;
    $display->panels['top'][0] = 'new-a75ac46c-ebd5-4197-a3a8-0f494b2f8e08';
    $pane = new stdClass();
    $pane->pid = 'new-dda77abb-e92c-4a11-b97e-24725c3f5ee3';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'search-info-block',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dda77abb-e92c-4a11-b97e-24725c3f5ee3';
    $display->content['new-dda77abb-e92c-4a11-b97e-24725c3f5ee3'] = $pane;
    $display->panels['top'][1] = 'new-dda77abb-e92c-4a11-b97e-24725c3f5ee3';
    $pane = new stdClass();
    $pane->pid = 'new-08e3be9d-dee2-4a88-ae3d-0bcdba5ac755';
    $pane->panel = 'top';
    $pane->type = 'apachesolr_info';
    $pane->subtype = 'apachesolr_info';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'title_override' => FALSE,
      'title_override_text' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '08e3be9d-dee2-4a88-ae3d-0bcdba5ac755';
    $display->content['new-08e3be9d-dee2-4a88-ae3d-0bcdba5ac755'] = $pane;
    $display->panels['top'][2] = 'new-08e3be9d-dee2-4a88-ae3d-0bcdba5ac755';
    $pane = new stdClass();
    $pane->pid = 'new-e6500274-abfd-49d1-b71f-1dbb86098204';
    $pane->panel = 'top';
    $pane->type = 'roskilde_search_tabs';
    $pane->subtype = 'roskilde_search_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'transport_search_query' => 1,
      'show_counters' => 1,
      'form_build_id' => 'form-3l7RRN9zgWQQt62Rmeq9hAsZfF_ow53gQ_cS7VGVhAQ',
      'form_token' => 'IYO1iADDNMg420nT49cwyOzg_8IPxu83_15JZIRarvM',
      'form_id' => 'roskilde_search_pages_tabs_settings',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e6500274-abfd-49d1-b71f-1dbb86098204';
    $display->content['new-e6500274-abfd-49d1-b71f-1dbb86098204'] = $pane;
    $display->panels['top'][3] = 'new-e6500274-abfd-49d1-b71f-1dbb86098204';
    $pane = new stdClass();
    $pane->pid = 'new-21cf1df4-d20b-44b2-9bf0-84ff230415b7';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="serach-design-row top">&nbsp;</div>

<div class="serach-design-row bottom">&nbsp;</div>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'serach-design-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '21cf1df4-d20b-44b2-9bf0-84ff230415b7';
    $display->content['new-21cf1df4-d20b-44b2-9bf0-84ff230415b7'] = $pane;
    $display->panels['top'][4] = 'new-21cf1df4-d20b-44b2-9bf0-84ff230415b7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c60933d0-5a08-4faf-a92b-136d854611d0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events_search_page'] = $page;

  return $pages;

}
