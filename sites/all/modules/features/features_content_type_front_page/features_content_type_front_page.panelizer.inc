<?php
/**
 * @file
 * features_content_type_front_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function features_content_type_front_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:front_page:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'front_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'panels_fourcol_25_center_stack';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bannerl' => NULL,
      'bannerr' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'bottom' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '4eca0041-4e48-4418-9235-15627e295a73';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cc4b6bd2-b387-44b8-9984-4613a640a160';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'short_news_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'placement_metadata' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc4b6bd2-b387-44b8-9984-4613a640a160';
    $display->content['new-cc4b6bd2-b387-44b8-9984-4613a640a160'] = $pane;
    $display->panels['first'][0] = 'new-cc4b6bd2-b387-44b8-9984-4613a640a160';
    $pane = new stdClass();
    $pane->pid = 'new-71f9814a-4f01-4efe-b3f0-da375eb3b093';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'latest_events-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'offset' => '0',
      'exposed' => array(
        'type' => array(
          'event' => 'event',
        ),
      ),
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
    $pane->uuid = '71f9814a-4f01-4efe-b3f0-da375eb3b093';
    $display->content['new-71f9814a-4f01-4efe-b3f0-da375eb3b093'] = $pane;
    $display->panels['fourth'][0] = 'new-71f9814a-4f01-4efe-b3f0-da375eb3b093';
    $pane = new stdClass();
    $pane->pid = 'new-83b4d7b6-31dd-4cab-9e61-6d6a2619378e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'editorial_news_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'offset' => '0',
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
    $pane->uuid = '83b4d7b6-31dd-4cab-9e61-6d6a2619378e';
    $display->content['new-83b4d7b6-31dd-4cab-9e61-6d6a2619378e'] = $pane;
    $display->panels['middle'][0] = 'new-83b4d7b6-31dd-4cab-9e61-6d6a2619378e';
    $pane = new stdClass();
    $pane->pid = 'new-b0863667-bf39-4787-89ad-a6666e4a7494';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'feed_item-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'offset' => '0',
      'exposed' => array(
        'field_category_tid' => 'All',
      ),
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
    $pane->uuid = 'b0863667-bf39-4787-89ad-a6666e4a7494';
    $display->content['new-b0863667-bf39-4787-89ad-a6666e4a7494'] = $pane;
    $display->panels['second'][0] = 'new-b0863667-bf39-4787-89ad-a6666e4a7494';
    $pane = new stdClass();
    $pane->pid = 'new-26f6e227-8516-43a3-9d58-9d59e8b968ba';
    $pane->panel = 'third';
    $pane->type = 'block';
    $pane->subtype = 'fb_likebox-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Facebook',
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
    $pane->uuid = '26f6e227-8516-43a3-9d58-9d59e8b968ba';
    $display->content['new-26f6e227-8516-43a3-9d58-9d59e8b968ba'] = $pane;
    $display->panels['third'][0] = 'new-26f6e227-8516-43a3-9d58-9d59e8b968ba';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:front_page:default:full'] = $panelizer;

  return $export;
}
