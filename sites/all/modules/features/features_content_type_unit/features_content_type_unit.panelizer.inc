<?php
/**
 * @file
 * features_content_type_unit.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function features_content_type_unit_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:unit:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'unit';
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
      'left' => NULL,
      'right' => NULL,
      'bannerl' => NULL,
      'bannerr' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'bottom' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = '2ca733ea-4808-4ef0-b346-f60a4de9981b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-507be911-a780-42b9-864d-b36e2f5164e8';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-topic_pages_menu_two_levels';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '507be911-a780-42b9-864d-b36e2f5164e8';
    $display->content['new-507be911-a780-42b9-864d-b36e2f5164e8'] = $pane;
    $display->panels['first'][0] = 'new-507be911-a780-42b9-864d-b36e2f5164e8';
    $pane = new stdClass();
    $pane->pid = 'new-84b8f149-bd40-413a-a2b3-e9c90c628993';
    $pane->panel = 'fourth';
    $pane->type = 'panels_mini';
    $pane->subtype = 'print_bookmark_and_read_laud_but';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
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
    $pane->uuid = '84b8f149-bd40-413a-a2b3-e9c90c628993';
    $display->content['new-84b8f149-bd40-413a-a2b3-e9c90c628993'] = $pane;
    $display->panels['fourth'][0] = 'new-84b8f149-bd40-413a-a2b3-e9c90c628993';
    $pane = new stdClass();
    $pane->pid = 'new-55642b67-09bd-496b-924f-2df0c6a24d64';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'latest_events-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'offset' => '0',
      'exposed' => array(
        'field_unit_tid' => array(),
        'field_topic_category_tid' => array(),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '55642b67-09bd-496b-924f-2df0c6a24d64';
    $display->content['new-55642b67-09bd-496b-924f-2df0c6a24d64'] = $pane;
    $display->panels['fourth'][1] = 'new-55642b67-09bd-496b-924f-2df0c6a24d64';
    $pane = new stdClass();
    $pane->pid = 'new-bf7d701b-2e52-4f95-addb-a29f44101f22';
    $pane->panel = 'middle';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bf7d701b-2e52-4f95-addb-a29f44101f22';
    $display->content['new-bf7d701b-2e52-4f95-addb-a29f44101f22'] = $pane;
    $display->panels['middle'][0] = 'new-bf7d701b-2e52-4f95-addb-a29f44101f22';
    $pane = new stdClass();
    $pane->pid = 'new-f959d941-815d-4174-a8fa-15ecba1aa871';
    $pane->panel = 'middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f959d941-815d-4174-a8fa-15ecba1aa871';
    $display->content['new-f959d941-815d-4174-a8fa-15ecba1aa871'] = $pane;
    $display->panels['middle'][1] = 'new-f959d941-815d-4174-a8fa-15ecba1aa871';
    $pane = new stdClass();
    $pane->pid = 'new-87cee604-5bb3-4b3e-984a-6dc260a9d837';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subheader';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '87cee604-5bb3-4b3e-984a-6dc260a9d837';
    $display->content['new-87cee604-5bb3-4b3e-984a-6dc260a9d837'] = $pane;
    $display->panels['middle'][2] = 'new-87cee604-5bb3-4b3e-984a-6dc260a9d837';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:unit:default:full'] = $panelizer;

  return $export;
}
