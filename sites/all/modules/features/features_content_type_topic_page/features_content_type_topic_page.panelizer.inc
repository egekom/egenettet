<?php
/**
 * @file
 * features_content_type_topic_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function features_content_type_topic_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:topic_page:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'topic_page';
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
      'right' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'bottom' => NULL,
      'bannerl' => NULL,
      'bannerr' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '45e1898d-a077-4c0a-85f1-0e90b55bda73';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8308d7b0-d88f-4621-9f72-3dc9f5d2664e';
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
    $pane->uuid = '8308d7b0-d88f-4621-9f72-3dc9f5d2664e';
    $display->content['new-8308d7b0-d88f-4621-9f72-3dc9f5d2664e'] = $pane;
    $display->panels['first'][0] = 'new-8308d7b0-d88f-4621-9f72-3dc9f5d2664e';
    $pane = new stdClass();
    $pane->pid = 'new-9c396a21-f7b7-4108-aa88-0180322ed6e6';
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
    $pane->uuid = '9c396a21-f7b7-4108-aa88-0180322ed6e6';
    $display->content['new-9c396a21-f7b7-4108-aa88-0180322ed6e6'] = $pane;
    $display->panels['fourth'][0] = 'new-9c396a21-f7b7-4108-aa88-0180322ed6e6';
    $pane = new stdClass();
    $pane->pid = 'new-66f69fb1-21ac-4b16-9f3f-c29bc3a3674c';
    $pane->panel = 'fourth';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_alfresco_document';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'cmis_field_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Dokumenter',
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
    $pane->uuid = '66f69fb1-21ac-4b16-9f3f-c29bc3a3674c';
    $display->content['new-66f69fb1-21ac-4b16-9f3f-c29bc3a3674c'] = $pane;
    $display->panels['fourth'][1] = 'new-66f69fb1-21ac-4b16-9f3f-c29bc3a3674c';
    $pane = new stdClass();
    $pane->pid = 'new-90869a81-5ddd-45a4-a870-aaa606256e53';
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
    $pane->uuid = '90869a81-5ddd-45a4-a870-aaa606256e53';
    $display->content['new-90869a81-5ddd-45a4-a870-aaa606256e53'] = $pane;
    $display->panels['middle'][0] = 'new-90869a81-5ddd-45a4-a870-aaa606256e53';
    $pane = new stdClass();
    $pane->pid = 'new-966fc3e4-4e2f-4ae3-9d09-03bbbafc83e0';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image_data';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => '',
        'delete' => '',
        'add' => '',
        'description' => 1,
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '966fc3e4-4e2f-4ae3-9d09-03bbbafc83e0';
    $display->content['new-966fc3e4-4e2f-4ae3-9d09-03bbbafc83e0'] = $pane;
    $display->panels['middle'][1] = 'new-966fc3e4-4e2f-4ae3-9d09-03bbbafc83e0';
    $pane = new stdClass();
    $pane->pid = 'new-0f8980a2-2205-4259-a120-1663880e998c';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0f8980a2-2205-4259-a120-1663880e998c';
    $display->content['new-0f8980a2-2205-4259-a120-1663880e998c'] = $pane;
    $display->panels['middle'][2] = 'new-0f8980a2-2205-4259-a120-1663880e998c';
    $pane = new stdClass();
    $pane->pid = 'new-f0ea409e-c72a-4fad-9dd7-e6f891c30f84';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_teaser';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f0ea409e-c72a-4fad-9dd7-e6f891c30f84';
    $display->content['new-f0ea409e-c72a-4fad-9dd7-e6f891c30f84'] = $pane;
    $display->panels['middle'][3] = 'new-f0ea409e-c72a-4fad-9dd7-e6f891c30f84';
    $pane = new stdClass();
    $pane->pid = 'new-d2bc0947-3ca8-47cc-b817-9b7b95ccd14a';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd2bc0947-3ca8-47cc-b817-9b7b95ccd14a';
    $display->content['new-d2bc0947-3ca8-47cc-b817-9b7b95ccd14a'] = $pane;
    $display->panels['middle'][4] = 'new-d2bc0947-3ca8-47cc-b817-9b7b95ccd14a';
    $pane = new stdClass();
    $pane->pid = 'new-e144a492-e52b-4626-b912-5aa7e8981e46';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_faq';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
        'view_mode' => 'full',
        'links' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'SOS og mere her',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e144a492-e52b-4626-b912-5aa7e8981e46';
    $display->content['new-e144a492-e52b-4626-b912-5aa7e8981e46'] = $pane;
    $display->panels['middle'][5] = 'new-e144a492-e52b-4626-b912-5aa7e8981e46';
    $pane = new stdClass();
    $pane->pid = 'new-a628b808-5be9-4cdb-80b4-3181e7f68a72';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_phonebook_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
        'view_mode' => 'teaser',
        'links' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Kontaktperson',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'a628b808-5be9-4cdb-80b4-3181e7f68a72';
    $display->content['new-a628b808-5be9-4cdb-80b4-3181e7f68a72'] = $pane;
    $display->panels['middle'][6] = 'new-a628b808-5be9-4cdb-80b4-3181e7f68a72';
    $pane = new stdClass();
    $pane->pid = 'new-83c7e140-080f-43ae-9620-a3df5da2223c';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '83c7e140-080f-43ae-9620-a3df5da2223c';
    $display->content['new-83c7e140-080f-43ae-9620-a3df5da2223c'] = $pane;
    $display->panels['middle'][7] = 'new-83c7e140-080f-43ae-9620-a3df5da2223c';
    $pane = new stdClass();
    $pane->pid = 'new-4d4ae4cc-7c77-4dbc-9d7e-83b79584fb4c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'last_edited_info-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '4d4ae4cc-7c77-4dbc-9d7e-83b79584fb4c';
    $display->content['new-4d4ae4cc-7c77-4dbc-9d7e-83b79584fb4c'] = $pane;
    $display->panels['middle'][8] = 'new-4d4ae4cc-7c77-4dbc-9d7e-83b79584fb4c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:topic_page:default:full'] = $panelizer;

  return $export;
}
