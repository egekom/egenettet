<?php
/**
 * @file
 * features_favourite_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function features_favourite_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'my_favourite_pages';
  $page->task = 'page';
  $page->admin_title = 'My favourite pages';
  $page->admin_description = '';
  $page->path = 'my-favourites';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_my_favourite_pages__panel_context_e9b1f40b-c59b-4fcc-a759-26613ea108a1';
  $handler->task = 'page';
  $handler->subtask = 'my_favourite_pages';
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
  $display->layout = 'panels_fourcol_25_center_stack';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bannerl' => NULL,
      'bannerr' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Favoritter';
  $display->uuid = 'f2fe031b-971a-4817-9921-f03b5cc63d9d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-eb7de205-40c5-4286-af8e-db7c64cf55df';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1>Favoritter</h1>

<div class="favorites-info-text">Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eb7de205-40c5-4286-af8e-db7c64cf55df';
    $display->content['new-eb7de205-40c5-4286-af8e-db7c64cf55df'] = $pane;
    $display->panels['middle'][0] = 'new-eb7de205-40c5-4286-af8e-db7c64cf55df';
    $pane = new stdClass();
    $pane->pid = 'new-40833aa2-dde9-4761-90ae-a6e3b8373e8c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'flag_bookmarks_custom-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '40833aa2-dde9-4761-90ae-a6e3b8373e8c';
    $display->content['new-40833aa2-dde9-4761-90ae-a6e3b8373e8c'] = $pane;
    $display->panels['middle'][1] = 'new-40833aa2-dde9-4761-90ae-a6e3b8373e8c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-40833aa2-dde9-4761-90ae-a6e3b8373e8c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['my_favourite_pages'] = $page;

  return $pages;

}
