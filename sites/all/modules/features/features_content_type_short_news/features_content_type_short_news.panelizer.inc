<?php
/**
 * @file
 * features_content_type_short_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function features_content_type_short_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:short_news:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'short_news';
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
  $panelizer->link_to_entity = FALSE;
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
  $display->title = '%node:title';
  $display->uuid = '89ef2c76-57ac-42c4-ba47-b3ea78e15a98';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-be8e0a0e-bc62-462c-a30c-9922ff79380b';
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
    $pane->uuid = 'be8e0a0e-bc62-462c-a30c-9922ff79380b';
    $display->content['new-be8e0a0e-bc62-462c-a30c-9922ff79380b'] = $pane;
    $display->panels['first'][0] = 'new-be8e0a0e-bc62-462c-a30c-9922ff79380b';
    $pane = new stdClass();
    $pane->pid = 'new-cca1a629-67e9-4b71-a799-b4a630bb288a';
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
    $pane->uuid = 'cca1a629-67e9-4b71-a799-b4a630bb288a';
    $display->content['new-cca1a629-67e9-4b71-a799-b4a630bb288a'] = $pane;
    $display->panels['fourth'][0] = 'new-cca1a629-67e9-4b71-a799-b4a630bb288a';
    $pane = new stdClass();
    $pane->pid = 'new-fc57bb7b-79fa-42a3-8434-0e16ca3d9ab8';
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
    $pane->uuid = 'fc57bb7b-79fa-42a3-8434-0e16ca3d9ab8';
    $display->content['new-fc57bb7b-79fa-42a3-8434-0e16ca3d9ab8'] = $pane;
    $display->panels['fourth'][1] = 'new-fc57bb7b-79fa-42a3-8434-0e16ca3d9ab8';
    $pane = new stdClass();
    $pane->pid = 'new-405584e4-b197-442b-af84-71dbe9dc529f';
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
      'form_build_id' => 'form-Fp86dNgpXwv5l0lCWgKl9_UYgB4KJIID7JE6WkLjK8I',
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
    $pane->uuid = '405584e4-b197-442b-af84-71dbe9dc529f';
    $display->content['new-405584e4-b197-442b-af84-71dbe9dc529f'] = $pane;
    $display->panels['fourth'][2] = 'new-405584e4-b197-442b-af84-71dbe9dc529f';
    $pane = new stdClass();
    $pane->pid = 'new-1ca14c14-efed-4ecc-9921-44041c205c63';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'related_short_news_list-panel_pane_1';
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
    $pane->uuid = '1ca14c14-efed-4ecc-9921-44041c205c63';
    $display->content['new-1ca14c14-efed-4ecc-9921-44041c205c63'] = $pane;
    $display->panels['fourth'][3] = 'new-1ca14c14-efed-4ecc-9921-44041c205c63';
    $pane = new stdClass();
    $pane->pid = 'new-5a7d8bb0-e89c-4744-9a56-8fb907eed7cd';
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
    $pane->uuid = '5a7d8bb0-e89c-4744-9a56-8fb907eed7cd';
    $display->content['new-5a7d8bb0-e89c-4744-9a56-8fb907eed7cd'] = $pane;
    $display->panels['middle'][0] = 'new-5a7d8bb0-e89c-4744-9a56-8fb907eed7cd';
    $pane = new stdClass();
    $pane->pid = 'new-7b675fb7-33b7-4b9d-884a-42736a4c8def';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7b675fb7-33b7-4b9d-884a-42736a4c8def';
    $display->content['new-7b675fb7-33b7-4b9d-884a-42736a4c8def'] = $pane;
    $display->panels['middle'][1] = 'new-7b675fb7-33b7-4b9d-884a-42736a4c8def';
    $pane = new stdClass();
    $pane->pid = 'new-012b6f86-6d3a-4c44-a113-83a7f4bb5818';
    $pane->panel = 'middle';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
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
    $pane->uuid = '012b6f86-6d3a-4c44-a113-83a7f4bb5818';
    $display->content['new-012b6f86-6d3a-4c44-a113-83a7f4bb5818'] = $pane;
    $display->panels['middle'][2] = 'new-012b6f86-6d3a-4c44-a113-83a7f4bb5818';
    $pane = new stdClass();
    $pane->pid = 'new-70b599f5-fc19-4427-b515-62dffe94943a';
    $pane->panel = 'middle';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '70b599f5-fc19-4427-b515-62dffe94943a';
    $display->content['new-70b599f5-fc19-4427-b515-62dffe94943a'] = $pane;
    $display->panels['middle'][3] = 'new-70b599f5-fc19-4427-b515-62dffe94943a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:short_news:default:full'] = $panelizer;

  return $export;
}
