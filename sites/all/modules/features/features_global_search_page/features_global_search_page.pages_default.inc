<?php
/**
 * @file
 * features_global_search_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function features_global_search_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'global_search_page';
  $page->task = 'page';
  $page->admin_title = 'Global Search Page';
  $page->admin_description = '';
  $page->path = 'search/global/!input';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'All',
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
  $handler->name = 'page_global_search_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'global_search_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
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
  $display->uuid = 'f749c6e1-250c-40c4-b57c-6e0aedf880ae';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a7880f4-eeb0-48f5-a1a6-ce025830fd7a';
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
    $pane->uuid = '0a7880f4-eeb0-48f5-a1a6-ce025830fd7a';
    $display->content['new-0a7880f4-eeb0-48f5-a1a6-ce025830fd7a'] = $pane;
    $display->panels['left'][0] = 'new-0a7880f4-eeb0-48f5-a1a6-ce025830fd7a';
    $pane = new stdClass();
    $pane->pid = 'new-35b11b78-361b-42ba-b9a3-37afcc644145';
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
      'filters' => 'bundle:"editorial_news" OR bundle:"short_news" OR bundle:"event" OR bundle:"short_event" OR bundle:"article" OR bundle:"topic_frontpage" OR bundle:"topic_page" OR bundle:"unit" OR bundle:"promoted_search_results" OR bundle:"faq_qa"',
      'rows' => '10',
      'env_id' => '',
      'sort_action' => 'none',
      'sort' => '',
      'breadcrumb' => 1,
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
    $pane->uuid = '35b11b78-361b-42ba-b9a3-37afcc644145';
    $display->content['new-35b11b78-361b-42ba-b9a3-37afcc644145'] = $pane;
    $display->panels['left'][1] = 'new-35b11b78-361b-42ba-b9a3-37afcc644145';
    $pane = new stdClass();
    $pane->pid = 'new-7326905a-13e8-4fa0-963d-7cdb5397efc3';
    $pane->panel = 'right';
    $pane->type = 'cmis_extra_search_results_pane';
    $pane->subtype = 'cmis_extra_search_results_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'search_keyword_index' => '2',
      'columns' => array(),
      'override_title' => 1,
      'override_title_text' => '',
      'num_per_page' => '10',
      'override_title_heading' => 'div',
      'map_apachesolr_sorting' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7326905a-13e8-4fa0-963d-7cdb5397efc3';
    $display->content['new-7326905a-13e8-4fa0-963d-7cdb5397efc3'] = $pane;
    $display->panels['right'][0] = 'new-7326905a-13e8-4fa0-963d-7cdb5397efc3';
    $pane = new stdClass();
    $pane->pid = 'new-04755420-ee0a-408e-a334-d2c3f7445311';
    $pane->panel = 'top';
    $pane->type = 'apachesolr_form';
    $pane->subtype = 'apachesolr_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path_type' => 'same',
      'path' => '',
      'override_prompt' => 1,
      'prompt' => '',
      'show_keys' => 1,
      'override_title' => 1,
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
    $pane->uuid = '04755420-ee0a-408e-a334-d2c3f7445311';
    $display->content['new-04755420-ee0a-408e-a334-d2c3f7445311'] = $pane;
    $display->panels['top'][0] = 'new-04755420-ee0a-408e-a334-d2c3f7445311';
    $pane = new stdClass();
    $pane->pid = 'new-3641fbd4-69bb-4ba5-b104-b027e6621499';
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
    $pane->uuid = '3641fbd4-69bb-4ba5-b104-b027e6621499';
    $display->content['new-3641fbd4-69bb-4ba5-b104-b027e6621499'] = $pane;
    $display->panels['top'][1] = 'new-3641fbd4-69bb-4ba5-b104-b027e6621499';
    $pane = new stdClass();
    $pane->pid = 'new-695f4344-86fd-4a63-b4ee-309030039903';
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
    $pane->uuid = '695f4344-86fd-4a63-b4ee-309030039903';
    $display->content['new-695f4344-86fd-4a63-b4ee-309030039903'] = $pane;
    $display->panels['top'][2] = 'new-695f4344-86fd-4a63-b4ee-309030039903';
    $pane = new stdClass();
    $pane->pid = 'new-fa89f3ec-1744-4d61-9f49-ddc79b435636';
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
      'form_build_id' => 'form-OaswUa3Xwd2226PnYRQ4a5yrYqSx_AFJCJ_Eq6_qC_g',
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
    $pane->uuid = 'fa89f3ec-1744-4d61-9f49-ddc79b435636';
    $display->content['new-fa89f3ec-1744-4d61-9f49-ddc79b435636'] = $pane;
    $display->panels['top'][3] = 'new-fa89f3ec-1744-4d61-9f49-ddc79b435636';
    $pane = new stdClass();
    $pane->pid = 'new-19805804-1b49-415f-a2fe-0937da67d50b';
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
    $pane->uuid = '19805804-1b49-415f-a2fe-0937da67d50b';
    $display->content['new-19805804-1b49-415f-a2fe-0937da67d50b'] = $pane;
    $display->panels['top'][4] = 'new-19805804-1b49-415f-a2fe-0937da67d50b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-04755420-ee0a-408e-a334-d2c3f7445311';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['global_search_page'] = $page;

  return $pages;

}
