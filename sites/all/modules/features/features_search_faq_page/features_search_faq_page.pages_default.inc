<?php
/**
 * @file
 * features_search_faq_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function features_search_faq_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'faq_search_page';
  $page->task = 'page';
  $page->admin_title = 'FAQ search page';
  $page->admin_description = '';
  $page->path = 'search/faq/!input';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'SOS',
    'name' => 'menu-search-pages',
    'weight' => '-46',
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
      'identifier' => 'String',
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
  $handler->name = 'page_faq_search_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'faq_search_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'flag-faq-search-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
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
  $display->title = 'SOS';
  $display->uuid = '1df6887a-3ef7-46ad-8326-be119c66edac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-17769f7c-022d-45a4-840c-22e92cd46b7b';
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
    $pane->uuid = '17769f7c-022d-45a4-840c-22e92cd46b7b';
    $display->content['new-17769f7c-022d-45a4-840c-22e92cd46b7b'] = $pane;
    $display->panels['left'][0] = 'new-17769f7c-022d-45a4-840c-22e92cd46b7b';
    $pane = new stdClass();
    $pane->pid = 'new-d8af8e6f-25ca-4e73-a7ea-2ec83fb042fc';
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
      'filters' => 'bundle:"faq_qa"',
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
    $pane->uuid = 'd8af8e6f-25ca-4e73-a7ea-2ec83fb042fc';
    $display->content['new-d8af8e6f-25ca-4e73-a7ea-2ec83fb042fc'] = $pane;
    $display->panels['left'][1] = 'new-d8af8e6f-25ca-4e73-a7ea-2ec83fb042fc';
    $pane = new stdClass();
    $pane->pid = 'new-62aee310-d09e-42ec-8501-64aec9bd08c4';
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
      'form_build_id' => 'form-cvWQR6JsL64gs6SHIeY55TmBzzhxrkTjSOetAYUDcMw',
      'form_token' => '2UAXiPXN4wcLOMqPnZ3moyI5P88YlPFG5IhwLiAO9sc',
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
    $pane->uuid = '62aee310-d09e-42ec-8501-64aec9bd08c4';
    $display->content['new-62aee310-d09e-42ec-8501-64aec9bd08c4'] = $pane;
    $display->panels['right'][0] = 'new-62aee310-d09e-42ec-8501-64aec9bd08c4';
    $pane = new stdClass();
    $pane->pid = 'new-a12664e9-7feb-4632-a3b1-2d55fa0aff9c';
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
    $pane->uuid = 'a12664e9-7feb-4632-a3b1-2d55fa0aff9c';
    $display->content['new-a12664e9-7feb-4632-a3b1-2d55fa0aff9c'] = $pane;
    $display->panels['right'][1] = 'new-a12664e9-7feb-4632-a3b1-2d55fa0aff9c';
    $pane = new stdClass();
    $pane->pid = 'new-b1da33f7-e992-47f9-9be3-d2a110b8b240';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-CpARaxNmee0matckDqh62KqONHgbRWiw';
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
    $pane->uuid = 'b1da33f7-e992-47f9-9be3-d2a110b8b240';
    $display->content['new-b1da33f7-e992-47f9-9be3-d2a110b8b240'] = $pane;
    $display->panels['right'][2] = 'new-b1da33f7-e992-47f9-9be3-d2a110b8b240';
    $pane = new stdClass();
    $pane->pid = 'new-c3d52e26-e349-4864-b702-2881204ef5d1';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c3d52e26-e349-4864-b702-2881204ef5d1';
    $display->content['new-c3d52e26-e349-4864-b702-2881204ef5d1'] = $pane;
    $display->panels['right'][3] = 'new-c3d52e26-e349-4864-b702-2881204ef5d1';
    $pane = new stdClass();
    $pane->pid = 'new-6d907226-3bc0-460c-8c8c-6b680597f76f';
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
    $pane->uuid = '6d907226-3bc0-460c-8c8c-6b680597f76f';
    $display->content['new-6d907226-3bc0-460c-8c8c-6b680597f76f'] = $pane;
    $display->panels['top'][0] = 'new-6d907226-3bc0-460c-8c8c-6b680597f76f';
    $pane = new stdClass();
    $pane->pid = 'new-637a27e5-2445-4b84-aefd-3b47b473c468';
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
    $pane->uuid = '637a27e5-2445-4b84-aefd-3b47b473c468';
    $display->content['new-637a27e5-2445-4b84-aefd-3b47b473c468'] = $pane;
    $display->panels['top'][1] = 'new-637a27e5-2445-4b84-aefd-3b47b473c468';
    $pane = new stdClass();
    $pane->pid = 'new-4718fbe1-67e1-4697-9771-fa730ec27ede';
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
      'form_build_id' => 'form-b4UpPlHf3QpP--sPP4plEUePiUVDfBLVi-CF_xAhl08',
      'form_token' => 'Nsieb7G48jJr9IYVmx_ZfnXnj-iV0zJxWk4exVvN_nI',
      'form_id' => 'roskilde_search_pages_tabs_settings',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4718fbe1-67e1-4697-9771-fa730ec27ede';
    $display->content['new-4718fbe1-67e1-4697-9771-fa730ec27ede'] = $pane;
    $display->panels['top'][2] = 'new-4718fbe1-67e1-4697-9771-fa730ec27ede';
    $pane = new stdClass();
    $pane->pid = 'new-18f8fc08-41d2-4008-8e89-f5eb97b5a6a8';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="serach-design-row top">&nbsp;</div>

<div class="serach-design-row bottom">&nbsp;</div>
',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '18f8fc08-41d2-4008-8e89-f5eb97b5a6a8';
    $display->content['new-18f8fc08-41d2-4008-8e89-f5eb97b5a6a8'] = $pane;
    $display->panels['top'][3] = 'new-18f8fc08-41d2-4008-8e89-f5eb97b5a6a8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6d907226-3bc0-460c-8c8c-6b680597f76f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['faq_search_page'] = $page;

  return $pages;

}
