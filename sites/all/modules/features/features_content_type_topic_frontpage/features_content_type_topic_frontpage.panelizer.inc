<?php
/**
 * @file
 * features_content_type_topic_frontpage.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function features_content_type_topic_frontpage_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:topic_frontpage:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'topic_frontpage';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a07e3e8c-79f5-4715-8963-b0948d51c1ff';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-46fc2092-5133-4090-a8bd-ce66e539925a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subheader';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '46fc2092-5133-4090-a8bd-ce66e539925a';
    $display->content['new-46fc2092-5133-4090-a8bd-ce66e539925a'] = $pane;
    $display->panels['center'][0] = 'new-46fc2092-5133-4090-a8bd-ce66e539925a';
    $pane = new stdClass();
    $pane->pid = 'new-6a0b2dad-15c8-49ab-a929-52951b6969b5';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6a0b2dad-15c8-49ab-a929-52951b6969b5';
    $display->content['new-6a0b2dad-15c8-49ab-a929-52951b6969b5'] = $pane;
    $display->panels['center'][1] = 'new-6a0b2dad-15c8-49ab-a929-52951b6969b5';
    $pane = new stdClass();
    $pane->pid = 'new-1743f24c-027b-4e03-a3b3-fcd6152f73ed';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1743f24c-027b-4e03-a3b3-fcd6152f73ed';
    $display->content['new-1743f24c-027b-4e03-a3b3-fcd6152f73ed'] = $pane;
    $display->panels['center'][2] = 'new-1743f24c-027b-4e03-a3b3-fcd6152f73ed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1743f24c-027b-4e03-a3b3-fcd6152f73ed';
  $panelizer->display = $display;
  $export['node:topic_frontpage:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:topic_frontpage:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'topic_frontpage';
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
  $display->layout = 'panels_fourcol_25_left_stack_profile_topic_fp';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'bannerl' => NULL,
      'bannerr' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'bottom' => NULL,
      'top' => NULL,
      'topl' => NULL,
      'topr' => NULL,
      'left_top' => NULL,
      'left_one' => NULL,
      'left_two' => NULL,
      'left_three' => NULL,
      'left_four' => NULL,
      'left_bottom' => NULL,
      'right' => NULL,
      'left_top_1' => NULL,
      'left_top_2' => NULL,
      'left_top_3' => NULL,
      'left_top_4' => NULL,
      'left_top_5' => NULL,
      'left_top_6' => NULL,
      'left_top_7' => NULL,
      'left_top_8' => NULL,
      'left_top_9' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5bc29220-f913-496b-9019-80cef028d06c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f9aa476b-4ece-4ea4-80e6-3861faf543de';
    $pane->panel = 'top';
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
    $pane->uuid = 'f9aa476b-4ece-4ea4-80e6-3861faf543de';
    $display->content['new-f9aa476b-4ece-4ea4-80e6-3861faf543de'] = $pane;
    $display->panels['top'][0] = 'new-f9aa476b-4ece-4ea4-80e6-3861faf543de';
    $pane = new stdClass();
    $pane->pid = 'new-e011d514-cc3e-489f-89fb-f7e2eb627bec';
    $pane->panel = 'top';
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
    $pane->uuid = 'e011d514-cc3e-489f-89fb-f7e2eb627bec';
    $display->content['new-e011d514-cc3e-489f-89fb-f7e2eb627bec'] = $pane;
    $display->panels['top'][1] = 'new-e011d514-cc3e-489f-89fb-f7e2eb627bec';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:topic_frontpage:default:full'] = $panelizer;

  return $export;
}
