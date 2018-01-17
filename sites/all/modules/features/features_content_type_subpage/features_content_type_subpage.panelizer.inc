<?php
/**
 * @file
 * features_content_type_subpage.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function features_content_type_subpage_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:subpage:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'subpage';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'User from Node (on node.node_author)',
      'keyword' => 'user',
      'name' => 'entity_from_schema:uid-node-user',
      'context' => 'panelizer',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'Node from User (on User: Phonebook [field_phonebook])',
      'keyword' => 'node',
      'name' => 'entity_from_field:field_phonebook-user-node',
      'delta' => 0,
      'context' => 'relationship_entity_from_schema:uid-node-user_1',
      'id' => 1,
    ),
  );
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
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'bannerl' => NULL,
      'bannerr' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '028c3936-4e61-4f50-a4df-698d71a3c0ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d74b0f8a-66ae-4f86-9410-06885436e999';
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
    $pane->uuid = 'd74b0f8a-66ae-4f86-9410-06885436e999';
    $display->content['new-d74b0f8a-66ae-4f86-9410-06885436e999'] = $pane;
    $display->panels['first'][0] = 'new-d74b0f8a-66ae-4f86-9410-06885436e999';
    $pane = new stdClass();
    $pane->pid = 'new-ecafa631-b8f2-400b-b3de-1853e6407e5b';
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
    $pane->uuid = 'ecafa631-b8f2-400b-b3de-1853e6407e5b';
    $display->content['new-ecafa631-b8f2-400b-b3de-1853e6407e5b'] = $pane;
    $display->panels['fourth'][0] = 'new-ecafa631-b8f2-400b-b3de-1853e6407e5b';
    $pane = new stdClass();
    $pane->pid = 'new-ffbc6f5a-8996-49e5-a068-1750536a3058';
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
      'form_build_id' => 'form-175MsrNOuzDOYk0LoBtlFbiN6ciY3SJMzOc0rMAsY5M',
      'form_token' => 'Gf_tX14qegOkegCtSVxrnNY5yeTB9k2q2QASLQ-nwRM',
      'form_id' => 'roskilde_accessibility_links_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ffbc6f5a-8996-49e5-a068-1750536a3058';
    $display->content['new-ffbc6f5a-8996-49e5-a068-1750536a3058'] = $pane;
    $display->panels['fourth'][1] = 'new-ffbc6f5a-8996-49e5-a068-1750536a3058';
    $pane = new stdClass();
    $pane->pid = 'new-ff4c2700-e0af-4fab-8433-564838ff0c80';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ff4c2700-e0af-4fab-8433-564838ff0c80';
    $display->content['new-ff4c2700-e0af-4fab-8433-564838ff0c80'] = $pane;
    $display->panels['fourth'][2] = 'new-ff4c2700-e0af-4fab-8433-564838ff0c80';
    $pane = new stdClass();
    $pane->pid = 'new-7bd184e4-0b93-4827-813b-076c4f3013ab';
    $pane->panel = 'fourth';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_alfresco_document';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'cmis_field_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Documenter',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7bd184e4-0b93-4827-813b-076c4f3013ab';
    $display->content['new-7bd184e4-0b93-4827-813b-076c4f3013ab'] = $pane;
    $display->panels['fourth'][3] = 'new-7bd184e4-0b93-4827-813b-076c4f3013ab';
    $pane = new stdClass();
    $pane->pid = 'new-8f48491e-a47f-4303-b073-77a4850f09dc';
    $pane->panel = 'fourth';
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
        'links' => 0,
        'view_mode' => 'teaser',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Kontakt',
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
    $pane->uuid = '8f48491e-a47f-4303-b073-77a4850f09dc';
    $display->content['new-8f48491e-a47f-4303-b073-77a4850f09dc'] = $pane;
    $display->panels['fourth'][4] = 'new-8f48491e-a47f-4303-b073-77a4850f09dc';
    $pane = new stdClass();
    $pane->pid = 'new-7c357f48-f9e9-49bf-8e5c-b66dccd8faff';
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
    $pane->uuid = '7c357f48-f9e9-49bf-8e5c-b66dccd8faff';
    $display->content['new-7c357f48-f9e9-49bf-8e5c-b66dccd8faff'] = $pane;
    $display->panels['middle'][0] = 'new-7c357f48-f9e9-49bf-8e5c-b66dccd8faff';
    $pane = new stdClass();
    $pane->pid = 'new-d1b7530b-1105-4bbc-b7f8-c23af4d3df55';
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
    $pane->uuid = 'd1b7530b-1105-4bbc-b7f8-c23af4d3df55';
    $display->content['new-d1b7530b-1105-4bbc-b7f8-c23af4d3df55'] = $pane;
    $display->panels['middle'][1] = 'new-d1b7530b-1105-4bbc-b7f8-c23af4d3df55';
    $pane = new stdClass();
    $pane->pid = 'new-dd65ff00-a07e-40a0-92af-7378c4d61f49';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dd65ff00-a07e-40a0-92af-7378c4d61f49';
    $display->content['new-dd65ff00-a07e-40a0-92af-7378c4d61f49'] = $pane;
    $display->panels['middle'][2] = 'new-dd65ff00-a07e-40a0-92af-7378c4d61f49';
    $pane = new stdClass();
    $pane->pid = 'new-3c295440-3cbc-404f-a638-552a7c43d524';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_banner_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'links' => 1,
        'view_mode' => 'full',
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
    $pane->uuid = '3c295440-3cbc-404f-a638-552a7c43d524';
    $display->content['new-3c295440-3cbc-404f-a638-552a7c43d524'] = $pane;
    $display->panels['middle'][3] = 'new-3c295440-3cbc-404f-a638-552a7c43d524';
    $pane = new stdClass();
    $pane->pid = 'new-a7926abd-2c7d-4f98-ac0e-821a57dc23d0';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image_data';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'add' => 'Add',
        'delete' => 'Delete',
        'description' => TRUE,
        'edit' => 'Edit',
        'view_mode' => 'full',
      ),
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a7926abd-2c7d-4f98-ac0e-821a57dc23d0';
    $display->content['new-a7926abd-2c7d-4f98-ac0e-821a57dc23d0'] = $pane;
    $display->panels['middle'][4] = 'new-a7926abd-2c7d-4f98-ac0e-821a57dc23d0';
    $pane = new stdClass();
    $pane->pid = 'new-4f892c55-e7d2-498e-9d01-89bd9c483f5d';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_data';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'add' => 'Add',
        'delete' => 'Delete',
        'description' => TRUE,
        'edit' => 'Edit',
        'view_mode' => 'full',
      ),
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '4f892c55-e7d2-498e-9d01-89bd9c483f5d';
    $display->content['new-4f892c55-e7d2-498e-9d01-89bd9c483f5d'] = $pane;
    $display->panels['middle'][5] = 'new-4f892c55-e7d2-498e-9d01-89bd9c483f5d';
    $pane = new stdClass();
    $pane->pid = 'new-ea5ea131-8e2e-418e-a237-3981cfe19afb';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'ea5ea131-8e2e-418e-a237-3981cfe19afb';
    $display->content['new-ea5ea131-8e2e-418e-a237-3981cfe19afb'] = $pane;
    $display->panels['middle'][6] = 'new-ea5ea131-8e2e-418e-a237-3981cfe19afb';
    $pane = new stdClass();
    $pane->pid = 'new-7ce3610f-7e26-45c6-b5f0-3077bba673ff';
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
        'links' => 1,
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '7ce3610f-7e26-45c6-b5f0-3077bba673ff';
    $display->content['new-7ce3610f-7e26-45c6-b5f0-3077bba673ff'] = $pane;
    $display->panels['middle'][7] = 'new-7ce3610f-7e26-45c6-b5f0-3077bba673ff';
    $pane = new stdClass();
    $pane->pid = 'new-5af04216-197d-4317-965b-39ea9d36fef5';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '5af04216-197d-4317-965b-39ea9d36fef5';
    $display->content['new-5af04216-197d-4317-965b-39ea9d36fef5'] = $pane;
    $display->panels['middle'][8] = 'new-5af04216-197d-4317-965b-39ea9d36fef5';
    $pane = new stdClass();
    $pane->pid = 'new-53985679-cac8-4b0d-ad65-88adaf2c2919';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topic_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '53985679-cac8-4b0d-ad65-88adaf2c2919';
    $display->content['new-53985679-cac8-4b0d-ad65-88adaf2c2919'] = $pane;
    $display->panels['middle'][9] = 'new-53985679-cac8-4b0d-ad65-88adaf2c2919';
    $pane = new stdClass();
    $pane->pid = 'new-d8e2f547-5ece-44c2-8922-19c3b336d5e7';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_table';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'default',
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'd8e2f547-5ece-44c2-8922-19c3b336d5e7';
    $display->content['new-d8e2f547-5ece-44c2-8922-19c3b336d5e7'] = $pane;
    $display->panels['middle'][10] = 'new-d8e2f547-5ece-44c2-8922-19c3b336d5e7';
    $pane = new stdClass();
    $pane->pid = 'new-f9c30246-65da-4bde-bc7a-b8b2eeae568b';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'f9c30246-65da-4bde-bc7a-b8b2eeae568b';
    $display->content['new-f9c30246-65da-4bde-bc7a-b8b2eeae568b'] = $pane;
    $display->panels['middle'][11] = 'new-f9c30246-65da-4bde-bc7a-b8b2eeae568b';
    $pane = new stdClass();
    $pane->pid = 'new-29f4c3a3-81d1-4638-8b6d-855c404535ed';
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
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '29f4c3a3-81d1-4638-8b6d-855c404535ed';
    $display->content['new-29f4c3a3-81d1-4638-8b6d-855c404535ed'] = $pane;
    $display->panels['middle'][12] = 'new-29f4c3a3-81d1-4638-8b6d-855c404535ed';
    $pane = new stdClass();
    $pane->pid = 'new-fc0d2cc9-c21d-41ca-8598-33c47951975c';
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
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'fc0d2cc9-c21d-41ca-8598-33c47951975c';
    $display->content['new-fc0d2cc9-c21d-41ca-8598-33c47951975c'] = $pane;
    $display->panels['middle'][13] = 'new-fc0d2cc9-c21d-41ca-8598-33c47951975c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-dd65ff00-a07e-40a0-92af-7378c4d61f49';
  $panelizer->display = $display;
  $export['node:subpage:default:full'] = $panelizer;

  return $export;
}
