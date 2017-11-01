<?php
/**
 * @file
 * features_content_type_event.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function features_content_type_event_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array(
    0 => array(
      'identifier' => 'CER Preset',
      'keyword' => 'cer',
      'name' => 'entity:cer',
      'entity_id' => '1',
      'id' => 1,
    ),
  );
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
  $display->uuid = '1fc26589-8e12-4137-9a5f-781377b6162f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-60c77c05-c525-4ecc-9b18-b14497475902';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'system-navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '60c77c05-c525-4ecc-9b18-b14497475902';
    $display->content['new-60c77c05-c525-4ecc-9b18-b14497475902'] = $pane;
    $display->panels['first'][0] = 'new-60c77c05-c525-4ecc-9b18-b14497475902';
    $pane = new stdClass();
    $pane->pid = 'new-361d1555-561e-4b55-92ce-847f4d56b2e9';
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
    $pane->uuid = '361d1555-561e-4b55-92ce-847f4d56b2e9';
    $display->content['new-361d1555-561e-4b55-92ce-847f4d56b2e9'] = $pane;
    $display->panels['fourth'][0] = 'new-361d1555-561e-4b55-92ce-847f4d56b2e9';
    $pane = new stdClass();
    $pane->pid = 'new-3122f7c0-524c-4f74-bcb9-f27da6a2b056';
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
    $pane->uuid = '3122f7c0-524c-4f74-bcb9-f27da6a2b056';
    $display->content['new-3122f7c0-524c-4f74-bcb9-f27da6a2b056'] = $pane;
    $display->panels['fourth'][1] = 'new-3122f7c0-524c-4f74-bcb9-f27da6a2b056';
    $pane = new stdClass();
    $pane->pid = 'new-8c6720c8-97e4-40bf-b65f-ab18ddac1d16';
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
      'form_build_id' => 'form-3m3rmLT72RkXxHcAnC7FONDcCv9_OD3b-rpTjDCRjFw',
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
    $pane->uuid = '8c6720c8-97e4-40bf-b65f-ab18ddac1d16';
    $display->content['new-8c6720c8-97e4-40bf-b65f-ab18ddac1d16'] = $pane;
    $display->panels['fourth'][2] = 'new-8c6720c8-97e4-40bf-b65f-ab18ddac1d16';
    $pane = new stdClass();
    $pane->pid = 'new-72e0fb52-171e-41bc-a420-f9b74543430c';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'latest_events-panel_pane_2';
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
    $pane->uuid = '72e0fb52-171e-41bc-a420-f9b74543430c';
    $display->content['new-72e0fb52-171e-41bc-a420-f9b74543430c'] = $pane;
    $display->panels['fourth'][3] = 'new-72e0fb52-171e-41bc-a420-f9b74543430c';
    $pane = new stdClass();
    $pane->pid = 'new-932bffa6-a5d5-418b-90e4-7985f72e9149';
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
    $pane->uuid = '932bffa6-a5d5-418b-90e4-7985f72e9149';
    $display->content['new-932bffa6-a5d5-418b-90e4-7985f72e9149'] = $pane;
    $display->panels['middle'][0] = 'new-932bffa6-a5d5-418b-90e4-7985f72e9149';
    $pane = new stdClass();
    $pane->pid = 'new-90b11cfd-e5b8-47b7-a663-7cfcd531e567';
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
    $pane->uuid = '90b11cfd-e5b8-47b7-a663-7cfcd531e567';
    $display->content['new-90b11cfd-e5b8-47b7-a663-7cfcd531e567'] = $pane;
    $display->panels['middle'][1] = 'new-90b11cfd-e5b8-47b7-a663-7cfcd531e567';
    $pane = new stdClass();
    $pane->pid = 'new-8330d587-a5b7-4289-b6ee-65207b2d25f0';
    $pane->panel = 'middle';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'roskilde_date',
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
    $pane->uuid = '8330d587-a5b7-4289-b6ee-65207b2d25f0';
    $display->content['new-8330d587-a5b7-4289-b6ee-65207b2d25f0'] = $pane;
    $display->panels['middle'][2] = 'new-8330d587-a5b7-4289-b6ee-65207b2d25f0';
    $pane = new stdClass();
    $pane->pid = 'new-211e04c2-7a14-4fea-9eb9-8367db519e13';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Author first and last name',
      'title' => '',
      'body' => '<p>%node:field_first_name %node:field_last_name</p>
',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'roskilde-author-name',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '211e04c2-7a14-4fea-9eb9-8367db519e13';
    $display->content['new-211e04c2-7a14-4fea-9eb9-8367db519e13'] = $pane;
    $display->panels['middle'][3] = 'new-211e04c2-7a14-4fea-9eb9-8367db519e13';
    $pane = new stdClass();
    $pane->pid = 'new-a1bc2fed-75f9-452c-b015-33d88b846477';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_phonebook_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'author_image_36x36',
        'image_link' => '',
      ),
      'context' => 'relationship_entity_from_field:field_phonebook-user-node_1',
      'override_title' => 1,
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
    $pane->uuid = 'a1bc2fed-75f9-452c-b015-33d88b846477';
    $display->content['new-a1bc2fed-75f9-452c-b015-33d88b846477'] = $pane;
    $display->panels['middle'][4] = 'new-a1bc2fed-75f9-452c-b015-33d88b846477';
    $pane = new stdClass();
    $pane->pid = 'new-a06d180e-b274-48d5-a3fe-016b09949d37';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image_data';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a06d180e-b274-48d5-a3fe-016b09949d37';
    $display->content['new-a06d180e-b274-48d5-a3fe-016b09949d37'] = $pane;
    $display->panels['middle'][5] = 'new-a06d180e-b274-48d5-a3fe-016b09949d37';
    $pane = new stdClass();
    $pane->pid = 'new-d41618c6-8eca-4e57-9d03-5546e034382e';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd41618c6-8eca-4e57-9d03-5546e034382e';
    $display->content['new-d41618c6-8eca-4e57-9d03-5546e034382e'] = $pane;
    $display->panels['middle'][6] = 'new-d41618c6-8eca-4e57-9d03-5546e034382e';
    $pane = new stdClass();
    $pane->pid = 'new-334bcb16-a99a-4ece-8d9a-24e582435b14';
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
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
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
    $pane->uuid = '334bcb16-a99a-4ece-8d9a-24e582435b14';
    $display->content['new-334bcb16-a99a-4ece-8d9a-24e582435b14'] = $pane;
    $display->panels['middle'][7] = 'new-334bcb16-a99a-4ece-8d9a-24e582435b14';
    $pane = new stdClass();
    $pane->pid = 'new-a0e76a67-5a37-4f02-bef7-f729d8771c42';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'a0e76a67-5a37-4f02-bef7-f729d8771c42';
    $display->content['new-a0e76a67-5a37-4f02-bef7-f729d8771c42'] = $pane;
    $display->panels['middle'][8] = 'new-a0e76a67-5a37-4f02-bef7-f729d8771c42';
    $pane = new stdClass();
    $pane->pid = 'new-bbfd0a43-181e-4005-abf2-3d08c00c2ef5';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'bbfd0a43-181e-4005-abf2-3d08c00c2ef5';
    $display->content['new-bbfd0a43-181e-4005-abf2-3d08c00c2ef5'] = $pane;
    $display->panels['middle'][9] = 'new-bbfd0a43-181e-4005-abf2-3d08c00c2ef5';
    $pane = new stdClass();
    $pane->pid = 'new-18443ef3-0eae-4886-bce5-5434ea933627';
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '18443ef3-0eae-4886-bce5-5434ea933627';
    $display->content['new-18443ef3-0eae-4886-bce5-5434ea933627'] = $pane;
    $display->panels['middle'][10] = 'new-18443ef3-0eae-4886-bce5-5434ea933627';
    $pane = new stdClass();
    $pane->pid = 'new-2c774bd6-8b21-4a75-bbf2-41011533fb19';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '2c774bd6-8b21-4a75-bbf2-41011533fb19';
    $display->content['new-2c774bd6-8b21-4a75-bbf2-41011533fb19'] = $pane;
    $display->panels['middle'][11] = 'new-2c774bd6-8b21-4a75-bbf2-41011533fb19';
    $pane = new stdClass();
    $pane->pid = 'new-5e42831e-408d-4572-a091-4845948b5d4e';
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '5e42831e-408d-4572-a091-4845948b5d4e';
    $display->content['new-5e42831e-408d-4572-a091-4845948b5d4e'] = $pane;
    $display->panels['middle'][12] = 'new-5e42831e-408d-4572-a091-4845948b5d4e';
    $pane = new stdClass();
    $pane->pid = 'new-038e5a01-53b3-4143-9662-1e6ecff88e5d';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_alfresco_document';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'cmis_field_link',
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
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '038e5a01-53b3-4143-9662-1e6ecff88e5d';
    $display->content['new-038e5a01-53b3-4143-9662-1e6ecff88e5d'] = $pane;
    $display->panels['middle'][13] = 'new-038e5a01-53b3-4143-9662-1e6ecff88e5d';
    $pane = new stdClass();
    $pane->pid = 'new-c2c799d2-6ed2-49c2-9fa2-1b270a3694c9';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_phonebook_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'links' => TRUE,
        'view_mode' => 'default',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = 'c2c799d2-6ed2-49c2-9fa2-1b270a3694c9';
    $display->content['new-c2c799d2-6ed2-49c2-9fa2-1b270a3694c9'] = $pane;
    $display->panels['middle'][14] = 'new-c2c799d2-6ed2-49c2-9fa2-1b270a3694c9';
    $pane = new stdClass();
    $pane->pid = 'new-ca99afa2-f503-45f2-8d3f-d0625be25e31';
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'ca99afa2-f503-45f2-8d3f-d0625be25e31';
    $display->content['new-ca99afa2-f503-45f2-8d3f-d0625be25e31'] = $pane;
    $display->panels['middle'][15] = 'new-ca99afa2-f503-45f2-8d3f-d0625be25e31';
    $pane = new stdClass();
    $pane->pid = 'new-6fda9ca9-5794-4825-85bb-ce11f7d3b280';
    $pane->panel = 'middle';
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
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '6fda9ca9-5794-4825-85bb-ce11f7d3b280';
    $display->content['new-6fda9ca9-5794-4825-85bb-ce11f7d3b280'] = $pane;
    $display->panels['middle'][16] = 'new-6fda9ca9-5794-4825-85bb-ce11f7d3b280';
    $pane = new stdClass();
    $pane->pid = 'new-7406a63c-9874-4e57-8c69-4f44180a6b12';
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
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = '7406a63c-9874-4e57-8c69-4f44180a6b12';
    $display->content['new-7406a63c-9874-4e57-8c69-4f44180a6b12'] = $pane;
    $display->panels['middle'][17] = 'new-7406a63c-9874-4e57-8c69-4f44180a6b12';
    $pane = new stdClass();
    $pane->pid = 'new-d4cede88-34c8-41e4-9928-e3defc1a7434';
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
    $pane->position = 18;
    $pane->locks = array();
    $pane->uuid = 'd4cede88-34c8-41e4-9928-e3defc1a7434';
    $display->content['new-d4cede88-34c8-41e4-9928-e3defc1a7434'] = $pane;
    $display->panels['middle'][18] = 'new-d4cede88-34c8-41e4-9928-e3defc1a7434';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default:full'] = $panelizer;

  return $export;
}
