<?php
/**
 * @file
 * features_search_pages_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function features_search_pages_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_pages';
  $page->task = 'page';
  $page->admin_title = 'Search pages';
  $page->admin_description = '';
  $page->path = 'search/pages/!input';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Pages',
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
  $handler->name = 'page_search_pages__panel_context_38d7cad6-5566-44cf-b5ff-a3ef3041ca8e';
  $handler->task = 'page';
  $handler->subtask = 'search_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'search-alfresco',
    'css_id' => '',
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
  $display->title = '';
  $display->uuid = '9a6d48c6-9335-4510-9214-5df17f7ea8ab';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-89fa2baa-5b44-45e0-926d-398ac46a1d2b';
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
    $pane->uuid = '89fa2baa-5b44-45e0-926d-398ac46a1d2b';
    $display->content['new-89fa2baa-5b44-45e0-926d-398ac46a1d2b'] = $pane;
    $display->panels['left'][0] = 'new-89fa2baa-5b44-45e0-926d-398ac46a1d2b';
    $pane = new stdClass();
    $pane->pid = 'new-aded042a-c688-4973-a700-7ddf47800cce';
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
      'filters' => 'bundle:"topic_frontpage" OR bundle:"unit" OR bundle:"article"',
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'aded042a-c688-4973-a700-7ddf47800cce';
    $display->content['new-aded042a-c688-4973-a700-7ddf47800cce'] = $pane;
    $display->panels['left'][1] = 'new-aded042a-c688-4973-a700-7ddf47800cce';
    $pane = new stdClass();
    $pane->pid = 'new-3f5f8be2-14b2-4844-8535-e204fa4bd81d';
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
      'form_build_id' => 'form-_b9BrCD9WEBHKTfuco6MnpjDU8_XcaCjkcHH6k85PLY',
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
    $pane->uuid = '3f5f8be2-14b2-4844-8535-e204fa4bd81d';
    $display->content['new-3f5f8be2-14b2-4844-8535-e204fa4bd81d'] = $pane;
    $display->panels['right'][0] = 'new-3f5f8be2-14b2-4844-8535-e204fa4bd81d';
    $pane = new stdClass();
    $pane->pid = 'new-61bf02a5-88c6-4309-aa3a-818e0613c5a0';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-n18E4x0qRRaIP7nV6I0SDYiCJsq77HCB';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '61bf02a5-88c6-4309-aa3a-818e0613c5a0';
    $display->content['new-61bf02a5-88c6-4309-aa3a-818e0613c5a0'] = $pane;
    $display->panels['right'][1] = 'new-61bf02a5-88c6-4309-aa3a-818e0613c5a0';
    $pane = new stdClass();
    $pane->pid = 'new-8e60d969-219f-47a9-9297-50bd02264657';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Type',
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
    $pane->uuid = '8e60d969-219f-47a9-9297-50bd02264657';
    $display->content['new-8e60d969-219f-47a9-9297-50bd02264657'] = $pane;
    $display->panels['right'][2] = 'new-8e60d969-219f-47a9-9297-50bd02264657';
    $pane = new stdClass();
    $pane->pid = 'new-2b7182bb-c1a1-4b74-bc88-8d6556c6af1d';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Tag',
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
    $pane->uuid = '2b7182bb-c1a1-4b74-bc88-8d6556c6af1d';
    $display->content['new-2b7182bb-c1a1-4b74-bc88-8d6556c6af1d'] = $pane;
    $display->panels['right'][3] = 'new-2b7182bb-c1a1-4b74-bc88-8d6556c6af1d';
    $pane = new stdClass();
    $pane->pid = 'new-7988f401-773a-469b-8deb-bcbc6825be98';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-CpARaxNmee0matckDqh62KqONHgbRWiw';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filter på Emneord',
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
    $pane->uuid = '7988f401-773a-469b-8deb-bcbc6825be98';
    $display->content['new-7988f401-773a-469b-8deb-bcbc6825be98'] = $pane;
    $display->panels['right'][4] = 'new-7988f401-773a-469b-8deb-bcbc6825be98';
    $pane = new stdClass();
    $pane->pid = 'new-147a81ac-c963-4096-a2c2-85a33aac8c8a';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '147a81ac-c963-4096-a2c2-85a33aac8c8a';
    $display->content['new-147a81ac-c963-4096-a2c2-85a33aac8c8a'] = $pane;
    $display->panels['right'][5] = 'new-147a81ac-c963-4096-a2c2-85a33aac8c8a';
    $pane = new stdClass();
    $pane->pid = 'new-1c83dd53-00d7-4357-9bae-ed8323fde252';
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
    $pane->uuid = '1c83dd53-00d7-4357-9bae-ed8323fde252';
    $display->content['new-1c83dd53-00d7-4357-9bae-ed8323fde252'] = $pane;
    $display->panels['top'][0] = 'new-1c83dd53-00d7-4357-9bae-ed8323fde252';
    $pane = new stdClass();
    $pane->pid = 'new-b1545dd0-916a-4546-867e-723ef2849c90';
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
    $pane->uuid = 'b1545dd0-916a-4546-867e-723ef2849c90';
    $display->content['new-b1545dd0-916a-4546-867e-723ef2849c90'] = $pane;
    $display->panels['top'][1] = 'new-b1545dd0-916a-4546-867e-723ef2849c90';
    $pane = new stdClass();
    $pane->pid = 'new-bf67930f-95f7-4951-97d2-58a30a35e975';
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
    $pane->uuid = 'bf67930f-95f7-4951-97d2-58a30a35e975';
    $display->content['new-bf67930f-95f7-4951-97d2-58a30a35e975'] = $pane;
    $display->panels['top'][2] = 'new-bf67930f-95f7-4951-97d2-58a30a35e975';
    $pane = new stdClass();
    $pane->pid = 'new-1c4772ee-e0d8-4778-88db-c1e077e4cda0';
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
      'form_build_id' => 'form-4syZ5IB3KvbrPZbGZ-7UqxjFbHyVGUNPEuoTTKR6LNo',
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
    $pane->uuid = '1c4772ee-e0d8-4778-88db-c1e077e4cda0';
    $display->content['new-1c4772ee-e0d8-4778-88db-c1e077e4cda0'] = $pane;
    $display->panels['top'][3] = 'new-1c4772ee-e0d8-4778-88db-c1e077e4cda0';
    $pane = new stdClass();
    $pane->pid = 'new-106842f4-ccc4-4baf-ae47-de2e9ad28e55';
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
    $pane->uuid = '106842f4-ccc4-4baf-ae47-de2e9ad28e55';
    $display->content['new-106842f4-ccc4-4baf-ae47-de2e9ad28e55'] = $pane;
    $display->panels['top'][4] = 'new-106842f4-ccc4-4baf-ae47-de2e9ad28e55';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_pages'] = $page;

  return $pages;

}
