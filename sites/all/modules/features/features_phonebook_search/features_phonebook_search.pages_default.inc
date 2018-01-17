<?php
/**
 * @file
 * features_phonebook_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function features_phonebook_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phonebook_search';
  $page->task = 'page';
  $page->admin_title = 'Phonebook search';
  $page->admin_description = '';
  $page->path = 'search/phonebook/!input';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'input' => array(
      'id' => 1,
      'identifier' => 'Search String',
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
  $handler->name = 'page_phonebook_search__panel_context_c0388635-cb88-4fb7-93dc-bf14135a2fd2';
  $handler->task = 'page';
  $handler->subtask = 'phonebook_search';
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9b5c024e-9fd9-47ca-9b2a-cf325953de3f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2a8bf38d-5080-4124-989a-c3d453455171';
    $pane->panel = 'middle';
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
    $pane->uuid = '2a8bf38d-5080-4124-989a-c3d453455171';
    $display->content['new-2a8bf38d-5080-4124-989a-c3d453455171'] = $pane;
    $display->panels['middle'][0] = 'new-2a8bf38d-5080-4124-989a-c3d453455171';
    $pane = new stdClass();
    $pane->pid = 'new-e6ffc6d5-0c33-4fd7-905e-8fb4e3e52c2f';
    $pane->panel = 'middle';
    $pane->type = 'apachesolr_info';
    $pane->subtype = 'apachesolr_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'title_override' => FALSE,
      'title_override_text' => '',
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
    $pane->uuid = 'e6ffc6d5-0c33-4fd7-905e-8fb4e3e52c2f';
    $display->content['new-e6ffc6d5-0c33-4fd7-905e-8fb4e3e52c2f'] = $pane;
    $display->panels['middle'][1] = 'new-e6ffc6d5-0c33-4fd7-905e-8fb4e3e52c2f';
    $pane = new stdClass();
    $pane->pid = 'new-ca60ac53-3cb8-498b-a3ec-c94819bd925e';
    $pane->panel = 'middle';
    $pane->type = 'apachesolr_result';
    $pane->subtype = 'apachesolr_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'keys_action' => 'none',
      'keys' => '',
      'keys_required' => 0,
      'filters_action' => 'override',
      'filters' => 'bundle:"phonebook"',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ca60ac53-3cb8-498b-a3ec-c94819bd925e';
    $display->content['new-ca60ac53-3cb8-498b-a3ec-c94819bd925e'] = $pane;
    $display->panels['middle'][2] = 'new-ca60ac53-3cb8-498b-a3ec-c94819bd925e';
    $pane = new stdClass();
    $pane->pid = 'new-ff68552b-8c9a-4b93-aef4-a64da0620a50';
    $pane->panel = 'middle';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ff68552b-8c9a-4b93-aef4-a64da0620a50';
    $display->content['new-ff68552b-8c9a-4b93-aef4-a64da0620a50'] = $pane;
    $display->panels['middle'][3] = 'new-ff68552b-8c9a-4b93-aef4-a64da0620a50';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2a8bf38d-5080-4124-989a-c3d453455171';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phonebook_search'] = $page;

  return $pages;

}
