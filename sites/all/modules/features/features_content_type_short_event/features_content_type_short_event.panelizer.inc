<?php
/**
 * @file
 * features_content_type_short_event.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function features_content_type_short_event_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:short_event:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'short_event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
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
  $display->title = '%node:title';
  $display->uuid = '3e4750c4-0f44-4040-a8cb-1f4bdfaf2d77';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5a36f0c7-d517-4f42-8d4c-c5b07060f9cd';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'system-navigation';
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
    $pane->uuid = '5a36f0c7-d517-4f42-8d4c-c5b07060f9cd';
    $display->content['new-5a36f0c7-d517-4f42-8d4c-c5b07060f9cd'] = $pane;
    $display->panels['first'][0] = 'new-5a36f0c7-d517-4f42-8d4c-c5b07060f9cd';
    $pane = new stdClass();
    $pane->pid = 'new-77c0df4a-c1ae-4251-84d6-380a42ba9c3f';
    $pane->panel = 'fourth';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'bookmarks',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77c0df4a-c1ae-4251-84d6-380a42ba9c3f';
    $display->content['new-77c0df4a-c1ae-4251-84d6-380a42ba9c3f'] = $pane;
    $display->panels['fourth'][0] = 'new-77c0df4a-c1ae-4251-84d6-380a42ba9c3f';
    $pane = new stdClass();
    $pane->pid = 'new-30890cd4-b6ee-49ee-b74b-cdfd3740fe83';
    $pane->panel = 'fourth';
    $pane->type = 'phonebook_print_link';
    $pane->subtype = 'phonebook_print_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '30890cd4-b6ee-49ee-b74b-cdfd3740fe83';
    $display->content['new-30890cd4-b6ee-49ee-b74b-cdfd3740fe83'] = $pane;
    $display->panels['fourth'][1] = 'new-30890cd4-b6ee-49ee-b74b-cdfd3740fe83';
    $pane = new stdClass();
    $pane->pid = 'new-02d8b09f-4c1b-4d67-9865-b7cac85cf233';
    $pane->panel = 'fourth';
    $pane->type = 'phonebook_accessibility_link';
    $pane->subtype = 'phonebook_accessibility_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'url' => 'http://www.adgangforalle.dk',
      'form_build_id' => 'form-W30jy0woiyZaWHj4XZZkQ2F7qg7x8QxBYeRgsHiNUog',
      'form_token' => 'Fz5s8-CVUUw7ag8c0FoION9oC9n75ZscV8vuVYu-GrI',
      'form_id' => 'roskilde_accessibility_links_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '02d8b09f-4c1b-4d67-9865-b7cac85cf233';
    $display->content['new-02d8b09f-4c1b-4d67-9865-b7cac85cf233'] = $pane;
    $display->panels['fourth'][2] = 'new-02d8b09f-4c1b-4d67-9865-b7cac85cf233';
    $pane = new stdClass();
    $pane->pid = 'new-bc2de3e2-1e83-4f5b-9381-cfba3816551c';
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
    $pane->uuid = 'bc2de3e2-1e83-4f5b-9381-cfba3816551c';
    $display->content['new-bc2de3e2-1e83-4f5b-9381-cfba3816551c'] = $pane;
    $display->panels['middle'][0] = 'new-bc2de3e2-1e83-4f5b-9381-cfba3816551c';
    $pane = new stdClass();
    $pane->pid = 'new-34def6ce-ccf3-409a-b2ef-d2668ab8711a';
    $pane->panel = 'middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
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
    $pane->uuid = '34def6ce-ccf3-409a-b2ef-d2668ab8711a';
    $display->content['new-34def6ce-ccf3-409a-b2ef-d2668ab8711a'] = $pane;
    $display->panels['middle'][1] = 'new-34def6ce-ccf3-409a-b2ef-d2668ab8711a';
    $pane = new stdClass();
    $pane->pid = 'new-b60db2ac-7973-416a-b872-57223918b091';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_body';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b60db2ac-7973-416a-b872-57223918b091';
    $display->content['new-b60db2ac-7973-416a-b872-57223918b091'] = $pane;
    $display->panels['middle'][2] = 'new-b60db2ac-7973-416a-b872-57223918b091';
    $pane = new stdClass();
    $pane->pid = 'new-534786e6-a0f2-49f6-8cd7-2a9d254b5864';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_datetime';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'fromto' => 'both',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '534786e6-a0f2-49f6-8cd7-2a9d254b5864';
    $display->content['new-534786e6-a0f2-49f6-8cd7-2a9d254b5864'] = $pane;
    $display->panels['middle'][3] = 'new-534786e6-a0f2-49f6-8cd7-2a9d254b5864';
    $pane = new stdClass();
    $pane->pid = 'new-4caa098c-05ac-4874-b6b1-5ef8c033c0dd';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_place';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4caa098c-05ac-4874-b6b1-5ef8c033c0dd';
    $display->content['new-4caa098c-05ac-4874-b6b1-5ef8c033c0dd'] = $pane;
    $display->panels['middle'][4] = 'new-4caa098c-05ac-4874-b6b1-5ef8c033c0dd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-34def6ce-ccf3-409a-b2ef-d2668ab8711a';
  $panelizer->display = $display;
  $export['node:short_event:default:full'] = $panelizer;

  return $export;
}
