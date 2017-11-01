<?php
/**
 * @file
 * features_editoral_news_search_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function features_editoral_news_search_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'editorial_news_search_page';
  $page->task = 'page';
  $page->admin_title = 'News search page';
  $page->admin_description = '';
  $page->path = 'search/news/!input';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
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
  $handler->name = 'page_editorial_news_search_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'editorial_news_search_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'flag-editoral-news-search-page',
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
  $display->title = 'News';
  $display->uuid = '029db032-54ca-467a-89a2-d88060b7a3db';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1c976a05-9bb0-4db4-91b0-0b4fe89c5fbb';
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
    $pane->uuid = '1c976a05-9bb0-4db4-91b0-0b4fe89c5fbb';
    $display->content['new-1c976a05-9bb0-4db4-91b0-0b4fe89c5fbb'] = $pane;
    $display->panels['left'][0] = 'new-1c976a05-9bb0-4db4-91b0-0b4fe89c5fbb';
    $pane = new stdClass();
    $pane->pid = 'new-e7545ef0-fd23-4d2b-abdf-7a36f0241eca';
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
      'filters' => 'bundle:"editorial_news" OR bundle:"short_news"',
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
      'substitute' => 1,
      'context' => 'argument_string_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'editoral-news-apachesolr-results',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e7545ef0-fd23-4d2b-abdf-7a36f0241eca';
    $display->content['new-e7545ef0-fd23-4d2b-abdf-7a36f0241eca'] = $pane;
    $display->panels['left'][1] = 'new-e7545ef0-fd23-4d2b-abdf-7a36f0241eca';
    $pane = new stdClass();
    $pane->pid = 'new-14b7eaba-3dd6-4b89-b598-437e994c750c';
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
      'form_build_id' => 'form-pxeknEMhW1yPQz7sH4mmsjSyHl2p9563CgkYFwiVajc',
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
    $pane->uuid = '14b7eaba-3dd6-4b89-b598-437e994c750c';
    $display->content['new-14b7eaba-3dd6-4b89-b598-437e994c750c'] = $pane;
    $display->panels['right'][0] = 'new-14b7eaba-3dd6-4b89-b598-437e994c750c';
    $pane = new stdClass();
    $pane->pid = 'new-0128cf39-00ee-4f71-9d94-485d452d3ca8';
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
    $pane->uuid = '0128cf39-00ee-4f71-9d94-485d452d3ca8';
    $display->content['new-0128cf39-00ee-4f71-9d94-485d452d3ca8'] = $pane;
    $display->panels['right'][1] = 'new-0128cf39-00ee-4f71-9d94-485d452d3ca8';
    $pane = new stdClass();
    $pane->pid = 'new-77a91b7c-9a4d-49af-a08e-803e082c8070';
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
    $pane->uuid = '77a91b7c-9a4d-49af-a08e-803e082c8070';
    $display->content['new-77a91b7c-9a4d-49af-a08e-803e082c8070'] = $pane;
    $display->panels['right'][2] = 'new-77a91b7c-9a4d-49af-a08e-803e082c8070';
    $pane = new stdClass();
    $pane->pid = 'new-79b0fb3d-02ab-467a-9055-5c914f1b50a8';
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
    $pane->uuid = '79b0fb3d-02ab-467a-9055-5c914f1b50a8';
    $display->content['new-79b0fb3d-02ab-467a-9055-5c914f1b50a8'] = $pane;
    $display->panels['right'][3] = 'new-79b0fb3d-02ab-467a-9055-5c914f1b50a8';
    $pane = new stdClass();
    $pane->pid = 'new-806a6d94-124b-4c29-92c8-77ee473d11f6';
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
    $pane->uuid = '806a6d94-124b-4c29-92c8-77ee473d11f6';
    $display->content['new-806a6d94-124b-4c29-92c8-77ee473d11f6'] = $pane;
    $display->panels['right'][4] = 'new-806a6d94-124b-4c29-92c8-77ee473d11f6';
    $pane = new stdClass();
    $pane->pid = 'new-f428f4e5-d66a-46fa-a2ad-551a7407858b';
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
    $pane->uuid = 'f428f4e5-d66a-46fa-a2ad-551a7407858b';
    $display->content['new-f428f4e5-d66a-46fa-a2ad-551a7407858b'] = $pane;
    $display->panels['right'][5] = 'new-f428f4e5-d66a-46fa-a2ad-551a7407858b';
    $pane = new stdClass();
    $pane->pid = 'new-6fe02983-beed-431e-ad36-e3480ca5ab9a';
    $pane->panel = 'top';
    $pane->type = 'apachesolr_form';
    $pane->subtype = 'apachesolr_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path_type' => 'same',
      'path' => '?1',
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
    $pane->uuid = '6fe02983-beed-431e-ad36-e3480ca5ab9a';
    $display->content['new-6fe02983-beed-431e-ad36-e3480ca5ab9a'] = $pane;
    $display->panels['top'][0] = 'new-6fe02983-beed-431e-ad36-e3480ca5ab9a';
    $pane = new stdClass();
    $pane->pid = 'new-80ad808e-37ea-40fb-b0dc-b3a717504d63';
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
    $pane->uuid = '80ad808e-37ea-40fb-b0dc-b3a717504d63';
    $display->content['new-80ad808e-37ea-40fb-b0dc-b3a717504d63'] = $pane;
    $display->panels['top'][1] = 'new-80ad808e-37ea-40fb-b0dc-b3a717504d63';
    $pane = new stdClass();
    $pane->pid = 'new-68462df5-c081-4af2-b046-699511937387';
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
    $pane->uuid = '68462df5-c081-4af2-b046-699511937387';
    $display->content['new-68462df5-c081-4af2-b046-699511937387'] = $pane;
    $display->panels['top'][2] = 'new-68462df5-c081-4af2-b046-699511937387';
    $pane = new stdClass();
    $pane->pid = 'new-3ea6644a-a4c8-4f2d-b31d-fc233b2fdcdb';
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
      'form_build_id' => 'form-4dN1J574MWBIJ6dNNWu7vITPczrh_VBJAkusxb6zElM',
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
    $pane->uuid = '3ea6644a-a4c8-4f2d-b31d-fc233b2fdcdb';
    $display->content['new-3ea6644a-a4c8-4f2d-b31d-fc233b2fdcdb'] = $pane;
    $display->panels['top'][3] = 'new-3ea6644a-a4c8-4f2d-b31d-fc233b2fdcdb';
    $pane = new stdClass();
    $pane->pid = 'new-52644abf-6709-4142-9534-dceac24da959';
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
    $pane->uuid = '52644abf-6709-4142-9534-dceac24da959';
    $display->content['new-52644abf-6709-4142-9534-dceac24da959'] = $pane;
    $display->panels['top'][4] = 'new-52644abf-6709-4142-9534-dceac24da959';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e7545ef0-fd23-4d2b-abdf-7a36f0241eca';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['editorial_news_search_page'] = $page;

  return $pages;

}
