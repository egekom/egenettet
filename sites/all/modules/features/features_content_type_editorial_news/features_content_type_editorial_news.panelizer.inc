<?php
/**
 * @file
 * features_content_type_editorial_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function features_content_type_editorial_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:editorial_news:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'editorial_news';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
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
  $display->title = '';
  $display->uuid = '69a29b16-1b0b-4a65-b50e-ec693bae80ec';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0ee3d2e4-42ac-454a-aff1-588b699c709e';
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
    $pane->uuid = '0ee3d2e4-42ac-454a-aff1-588b699c709e';
    $display->content['new-0ee3d2e4-42ac-454a-aff1-588b699c709e'] = $pane;
    $display->panels['first'][0] = 'new-0ee3d2e4-42ac-454a-aff1-588b699c709e';
    $pane = new stdClass();
    $pane->pid = 'new-6c63c4ba-24aa-4261-966a-9b492db19535';
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
    $pane->uuid = '6c63c4ba-24aa-4261-966a-9b492db19535';
    $display->content['new-6c63c4ba-24aa-4261-966a-9b492db19535'] = $pane;
    $display->panels['fourth'][0] = 'new-6c63c4ba-24aa-4261-966a-9b492db19535';
    $pane = new stdClass();
    $pane->pid = 'new-e429f0f5-6333-46fd-bcc6-84739c4f9035';
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
    $pane->uuid = 'e429f0f5-6333-46fd-bcc6-84739c4f9035';
    $display->content['new-e429f0f5-6333-46fd-bcc6-84739c4f9035'] = $pane;
    $display->panels['fourth'][1] = 'new-e429f0f5-6333-46fd-bcc6-84739c4f9035';
    $pane = new stdClass();
    $pane->pid = 'new-ca378825-a82b-4028-bd53-c97836699465';
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
      'form_build_id' => 'form-UTz2fQqNWFYq0IlrnZDEtNGzUZTxpYuxMfJvz5YcpMg',
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
    $pane->uuid = 'ca378825-a82b-4028-bd53-c97836699465';
    $display->content['new-ca378825-a82b-4028-bd53-c97836699465'] = $pane;
    $display->panels['fourth'][2] = 'new-ca378825-a82b-4028-bd53-c97836699465';
    $pane = new stdClass();
    $pane->pid = 'new-bbac8757-0fa9-4375-83ab-91b1cd607cbd';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'related_editorial_news-panel_pane_1';
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
    $pane->uuid = 'bbac8757-0fa9-4375-83ab-91b1cd607cbd';
    $display->content['new-bbac8757-0fa9-4375-83ab-91b1cd607cbd'] = $pane;
    $display->panels['fourth'][3] = 'new-bbac8757-0fa9-4375-83ab-91b1cd607cbd';
    $pane = new stdClass();
    $pane->pid = 'new-d7cb61ab-5864-456a-83c8-2cc21a2914f0';
    $pane->panel = 'fourth';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
      ),
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
    $pane->uuid = 'd7cb61ab-5864-456a-83c8-2cc21a2914f0';
    $display->content['new-d7cb61ab-5864-456a-83c8-2cc21a2914f0'] = $pane;
    $display->panels['fourth'][4] = 'new-d7cb61ab-5864-456a-83c8-2cc21a2914f0';
    $pane = new stdClass();
    $pane->pid = 'new-1b5e5276-06d7-4819-8e65-5ef082528679';
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
    $pane->uuid = '1b5e5276-06d7-4819-8e65-5ef082528679';
    $display->content['new-1b5e5276-06d7-4819-8e65-5ef082528679'] = $pane;
    $display->panels['middle'][0] = 'new-1b5e5276-06d7-4819-8e65-5ef082528679';
    $pane = new stdClass();
    $pane->pid = 'new-d10a3d47-6063-4c2f-b5de-2fd96462aa1a';
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
    $pane->uuid = 'd10a3d47-6063-4c2f-b5de-2fd96462aa1a';
    $display->content['new-d10a3d47-6063-4c2f-b5de-2fd96462aa1a'] = $pane;
    $display->panels['middle'][1] = 'new-d10a3d47-6063-4c2f-b5de-2fd96462aa1a';
    $pane = new stdClass();
    $pane->pid = 'new-0c271055-2334-49cd-9bf4-f5a759be503f';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'roskilde_date',
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0c271055-2334-49cd-9bf4-f5a759be503f';
    $display->content['new-0c271055-2334-49cd-9bf4-f5a759be503f'] = $pane;
    $display->panels['middle'][2] = 'new-0c271055-2334-49cd-9bf4-f5a759be503f';
    $pane = new stdClass();
    $pane->pid = 'new-63a2e501-80a9-4e19-9800-3048a8b9a468';
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
    $pane->uuid = '63a2e501-80a9-4e19-9800-3048a8b9a468';
    $display->content['new-63a2e501-80a9-4e19-9800-3048a8b9a468'] = $pane;
    $display->panels['middle'][3] = 'new-63a2e501-80a9-4e19-9800-3048a8b9a468';
    $pane = new stdClass();
    $pane->pid = 'new-fc10c327-198b-4bc8-ba7d-7414adfe325d';
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
    $pane->uuid = 'fc10c327-198b-4bc8-ba7d-7414adfe325d';
    $display->content['new-fc10c327-198b-4bc8-ba7d-7414adfe325d'] = $pane;
    $display->panels['middle'][4] = 'new-fc10c327-198b-4bc8-ba7d-7414adfe325d';
    $pane = new stdClass();
    $pane->pid = 'new-aa64232c-d7ff-4f33-9b36-40d8a147883a';
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
    $pane->uuid = 'aa64232c-d7ff-4f33-9b36-40d8a147883a';
    $display->content['new-aa64232c-d7ff-4f33-9b36-40d8a147883a'] = $pane;
    $display->panels['middle'][5] = 'new-aa64232c-d7ff-4f33-9b36-40d8a147883a';
    $pane = new stdClass();
    $pane->pid = 'new-4d7eae26-de1f-4ce6-a9b7-f1b8e1f9e175';
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
    $pane->uuid = '4d7eae26-de1f-4ce6-a9b7-f1b8e1f9e175';
    $display->content['new-4d7eae26-de1f-4ce6-a9b7-f1b8e1f9e175'] = $pane;
    $display->panels['middle'][6] = 'new-4d7eae26-de1f-4ce6-a9b7-f1b8e1f9e175';
    $pane = new stdClass();
    $pane->pid = 'new-84eafdc5-b5bb-4954-8ee2-7f8fbf475629';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '84eafdc5-b5bb-4954-8ee2-7f8fbf475629';
    $display->content['new-84eafdc5-b5bb-4954-8ee2-7f8fbf475629'] = $pane;
    $display->panels['middle'][7] = 'new-84eafdc5-b5bb-4954-8ee2-7f8fbf475629';
    $pane = new stdClass();
    $pane->pid = 'new-f381580e-632a-4d18-a6e0-4fe3b4bb8697';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'f381580e-632a-4d18-a6e0-4fe3b4bb8697';
    $display->content['new-f381580e-632a-4d18-a6e0-4fe3b4bb8697'] = $pane;
    $display->panels['middle'][8] = 'new-f381580e-632a-4d18-a6e0-4fe3b4bb8697';
    $pane = new stdClass();
    $pane->pid = 'new-0f4b6ade-236e-45ca-bec5-70329cacf252';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '0f4b6ade-236e-45ca-bec5-70329cacf252';
    $display->content['new-0f4b6ade-236e-45ca-bec5-70329cacf252'] = $pane;
    $display->panels['middle'][9] = 'new-0f4b6ade-236e-45ca-bec5-70329cacf252';
    $pane = new stdClass();
    $pane->pid = 'new-9d9897c5-9641-4043-a583-ce8895163bfb';
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '9d9897c5-9641-4043-a583-ce8895163bfb';
    $display->content['new-9d9897c5-9641-4043-a583-ce8895163bfb'] = $pane;
    $display->panels['middle'][10] = 'new-9d9897c5-9641-4043-a583-ce8895163bfb';
    $pane = new stdClass();
    $pane->pid = 'new-f4734b10-560c-4ab1-9df8-5fc797b20db1';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'f4734b10-560c-4ab1-9df8-5fc797b20db1';
    $display->content['new-f4734b10-560c-4ab1-9df8-5fc797b20db1'] = $pane;
    $display->panels['middle'][11] = 'new-f4734b10-560c-4ab1-9df8-5fc797b20db1';
    $pane = new stdClass();
    $pane->pid = 'new-7a57daa2-02ad-4155-b4d1-1c580c9f2fad';
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '7a57daa2-02ad-4155-b4d1-1c580c9f2fad';
    $display->content['new-7a57daa2-02ad-4155-b4d1-1c580c9f2fad'] = $pane;
    $display->panels['middle'][12] = 'new-7a57daa2-02ad-4155-b4d1-1c580c9f2fad';
    $pane = new stdClass();
    $pane->pid = 'new-996794a1-fe07-435c-8fb8-7ffdc42bb823';
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
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '996794a1-fe07-435c-8fb8-7ffdc42bb823';
    $display->content['new-996794a1-fe07-435c-8fb8-7ffdc42bb823'] = $pane;
    $display->panels['middle'][13] = 'new-996794a1-fe07-435c-8fb8-7ffdc42bb823';
    $pane = new stdClass();
    $pane->pid = 'new-0520756f-d7e4-40f7-8723-e10d8d44c87f';
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
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '0520756f-d7e4-40f7-8723-e10d8d44c87f';
    $display->content['new-0520756f-d7e4-40f7-8723-e10d8d44c87f'] = $pane;
    $display->panels['middle'][14] = 'new-0520756f-d7e4-40f7-8723-e10d8d44c87f';
    $pane = new stdClass();
    $pane->pid = 'new-2d4c20f7-b9ad-4ddb-afd2-b2c3a94f8c5c';
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '2d4c20f7-b9ad-4ddb-afd2-b2c3a94f8c5c';
    $display->content['new-2d4c20f7-b9ad-4ddb-afd2-b2c3a94f8c5c'] = $pane;
    $display->panels['middle'][15] = 'new-2d4c20f7-b9ad-4ddb-afd2-b2c3a94f8c5c';
    $pane = new stdClass();
    $pane->pid = 'new-e37ae55b-d4bf-4538-8cfd-8da238f971c3';
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
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = 'e37ae55b-d4bf-4538-8cfd-8da238f971c3';
    $display->content['new-e37ae55b-d4bf-4538-8cfd-8da238f971c3'] = $pane;
    $display->panels['middle'][16] = 'new-e37ae55b-d4bf-4538-8cfd-8da238f971c3';
    $pane = new stdClass();
    $pane->pid = 'new-74825dcc-e0be-4a83-bc6a-9fba8b0c4552';
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
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = '74825dcc-e0be-4a83-bc6a-9fba8b0c4552';
    $display->content['new-74825dcc-e0be-4a83-bc6a-9fba8b0c4552'] = $pane;
    $display->panels['middle'][17] = 'new-74825dcc-e0be-4a83-bc6a-9fba8b0c4552';
    $pane = new stdClass();
    $pane->pid = 'new-e455b77c-43ed-4497-94eb-8172630baaf9';
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
    $pane->position = 18;
    $pane->locks = array();
    $pane->uuid = 'e455b77c-43ed-4497-94eb-8172630baaf9';
    $display->content['new-e455b77c-43ed-4497-94eb-8172630baaf9'] = $pane;
    $display->panels['middle'][18] = 'new-e455b77c-43ed-4497-94eb-8172630baaf9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-0c271055-2334-49cd-9bf4-f5a759be503f';
  $panelizer->display = $display;
  $export['node:editorial_news:default:full'] = $panelizer;

  return $export;
}
