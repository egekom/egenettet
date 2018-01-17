<?php
/**
 * @file
 * features_content_type_webform.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function features_content_type_webform_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:webform:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'webform';
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
  $display->uuid = 'd8c1e2c4-6a06-413c-8cea-9f7ffe952b1f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7cfa21d0-546d-4cd5-8e91-d5f73cc57920';
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
    $pane->uuid = '7cfa21d0-546d-4cd5-8e91-d5f73cc57920';
    $display->content['new-7cfa21d0-546d-4cd5-8e91-d5f73cc57920'] = $pane;
    $display->panels['first'][0] = 'new-7cfa21d0-546d-4cd5-8e91-d5f73cc57920';
    $pane = new stdClass();
    $pane->pid = 'new-2e9c53ae-6b01-4025-8d89-d0c7f0105b67';
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
    $pane->uuid = '2e9c53ae-6b01-4025-8d89-d0c7f0105b67';
    $display->content['new-2e9c53ae-6b01-4025-8d89-d0c7f0105b67'] = $pane;
    $display->panels['fourth'][0] = 'new-2e9c53ae-6b01-4025-8d89-d0c7f0105b67';
    $pane = new stdClass();
    $pane->pid = 'new-1961974a-5064-40c0-a8bb-6f278ee2deae';
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
      'form_build_id' => 'form-ARjL_ute5Xs5ILCOnXdc8CFBhN7J2rNDytJQTBvPD4M',
      'form_token' => 'PdY0OqTvqPMi3yY3Xi6_F5vPHdQwudw98JsnYyF0I7w',
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
    $pane->uuid = '1961974a-5064-40c0-a8bb-6f278ee2deae';
    $display->content['new-1961974a-5064-40c0-a8bb-6f278ee2deae'] = $pane;
    $display->panels['fourth'][1] = 'new-1961974a-5064-40c0-a8bb-6f278ee2deae';
    $pane = new stdClass();
    $pane->pid = 'new-3927bb2e-e825-4d91-b4bf-69f0fb02e921';
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
    $pane->uuid = '3927bb2e-e825-4d91-b4bf-69f0fb02e921';
    $display->content['new-3927bb2e-e825-4d91-b4bf-69f0fb02e921'] = $pane;
    $display->panels['fourth'][2] = 'new-3927bb2e-e825-4d91-b4bf-69f0fb02e921';
    $pane = new stdClass();
    $pane->pid = 'new-58babdb1-6ed2-4754-a1e9-2155b64bf98b';
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
      'formatter_settings' => array(
        'conditions' => array(),
      ),
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
    $pane->uuid = '58babdb1-6ed2-4754-a1e9-2155b64bf98b';
    $display->content['new-58babdb1-6ed2-4754-a1e9-2155b64bf98b'] = $pane;
    $display->panels['fourth'][3] = 'new-58babdb1-6ed2-4754-a1e9-2155b64bf98b';
    $pane = new stdClass();
    $pane->pid = 'new-6c90c8b5-4df9-47c0-8237-282acf19db0a';
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
    $pane->uuid = '6c90c8b5-4df9-47c0-8237-282acf19db0a';
    $display->content['new-6c90c8b5-4df9-47c0-8237-282acf19db0a'] = $pane;
    $display->panels['fourth'][4] = 'new-6c90c8b5-4df9-47c0-8237-282acf19db0a';
    $pane = new stdClass();
    $pane->pid = 'new-e02be44e-558c-4681-95ff-9d73350cc097';
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
    $pane->uuid = 'e02be44e-558c-4681-95ff-9d73350cc097';
    $display->content['new-e02be44e-558c-4681-95ff-9d73350cc097'] = $pane;
    $display->panels['middle'][0] = 'new-e02be44e-558c-4681-95ff-9d73350cc097';
    $pane = new stdClass();
    $pane->pid = 'new-0aafb561-4ce3-4854-88d8-b8c8dff48fb8';
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
    $pane->uuid = '0aafb561-4ce3-4854-88d8-b8c8dff48fb8';
    $display->content['new-0aafb561-4ce3-4854-88d8-b8c8dff48fb8'] = $pane;
    $display->panels['middle'][1] = 'new-0aafb561-4ce3-4854-88d8-b8c8dff48fb8';
    $pane = new stdClass();
    $pane->pid = 'new-7d2fe3ba-74fd-4809-bb60-96b292e8fd27';
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
      'formatter_settings' => array(
        'conditions' => array(),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7d2fe3ba-74fd-4809-bb60-96b292e8fd27';
    $display->content['new-7d2fe3ba-74fd-4809-bb60-96b292e8fd27'] = $pane;
    $display->panels['middle'][2] = 'new-7d2fe3ba-74fd-4809-bb60-96b292e8fd27';
    $pane = new stdClass();
    $pane->pid = 'new-6dbb4c27-6caa-4284-b9b3-2134daac40a3';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_banner_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => FALSE,
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
        'view_mode' => 'full',
        'links' => 1,
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6dbb4c27-6caa-4284-b9b3-2134daac40a3';
    $display->content['new-6dbb4c27-6caa-4284-b9b3-2134daac40a3'] = $pane;
    $display->panels['middle'][3] = 'new-6dbb4c27-6caa-4284-b9b3-2134daac40a3';
    $pane = new stdClass();
    $pane->pid = 'new-7a42a3fb-fae9-45d9-b086-1ff6f8f6c8db';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '7a42a3fb-fae9-45d9-b086-1ff6f8f6c8db';
    $display->content['new-7a42a3fb-fae9-45d9-b086-1ff6f8f6c8db'] = $pane;
    $display->panels['middle'][4] = 'new-7a42a3fb-fae9-45d9-b086-1ff6f8f6c8db';
    $pane = new stdClass();
    $pane->pid = 'new-1265d419-b776-4070-b3bc-7d622658b338';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '1265d419-b776-4070-b3bc-7d622658b338';
    $display->content['new-1265d419-b776-4070-b3bc-7d622658b338'] = $pane;
    $display->panels['middle'][5] = 'new-1265d419-b776-4070-b3bc-7d622658b338';
    $pane = new stdClass();
    $pane->pid = 'new-b9fddffb-7e36-40bf-bf99-f50ef79176df';
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
      'formatter_settings' => array(
        'conditions' => array(),
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'b9fddffb-7e36-40bf-bf99-f50ef79176df';
    $display->content['new-b9fddffb-7e36-40bf-bf99-f50ef79176df'] = $pane;
    $display->panels['middle'][6] = 'new-b9fddffb-7e36-40bf-bf99-f50ef79176df';
    $pane = new stdClass();
    $pane->pid = 'new-2d502def-bf1a-4ffa-aa25-82d0f2646ec6';
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
        'link' => FALSE,
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
        'view_mode' => 'full',
        'links' => 1,
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '2d502def-bf1a-4ffa-aa25-82d0f2646ec6';
    $display->content['new-2d502def-bf1a-4ffa-aa25-82d0f2646ec6'] = $pane;
    $display->panels['middle'][7] = 'new-2d502def-bf1a-4ffa-aa25-82d0f2646ec6';
    $pane = new stdClass();
    $pane->pid = 'new-b1ddfb8b-0024-41fc-9b10-39c0f138f478';
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
    $pane->uuid = 'b1ddfb8b-0024-41fc-9b10-39c0f138f478';
    $display->content['new-b1ddfb8b-0024-41fc-9b10-39c0f138f478'] = $pane;
    $display->panels['middle'][8] = 'new-b1ddfb8b-0024-41fc-9b10-39c0f138f478';
    $pane = new stdClass();
    $pane->pid = 'new-90297a33-d6fc-4e49-8b61-7ad832dcbbff';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topic_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '90297a33-d6fc-4e49-8b61-7ad832dcbbff';
    $display->content['new-90297a33-d6fc-4e49-8b61-7ad832dcbbff'] = $pane;
    $display->panels['middle'][9] = 'new-90297a33-d6fc-4e49-8b61-7ad832dcbbff';
    $pane = new stdClass();
    $pane->pid = 'new-d641b17a-1232-4e78-b84b-acf20638d6b8';
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
      'formatter_settings' => array(
        'conditions' => array(),
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'd641b17a-1232-4e78-b84b-acf20638d6b8';
    $display->content['new-d641b17a-1232-4e78-b84b-acf20638d6b8'] = $pane;
    $display->panels['middle'][10] = 'new-d641b17a-1232-4e78-b84b-acf20638d6b8';
    $pane = new stdClass();
    $pane->pid = 'new-3e629ee6-a874-4a7b-845b-be08990c029a';
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
    $pane->uuid = '3e629ee6-a874-4a7b-845b-be08990c029a';
    $display->content['new-3e629ee6-a874-4a7b-845b-be08990c029a'] = $pane;
    $display->panels['middle'][11] = 'new-3e629ee6-a874-4a7b-845b-be08990c029a';
    $pane = new stdClass();
    $pane->pid = 'new-b17d3061-776a-4125-9d5b-d806c765aa08';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '%1',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = 'b17d3061-776a-4125-9d5b-d806c765aa08';
    $display->content['new-b17d3061-776a-4125-9d5b-d806c765aa08'] = $pane;
    $display->panels['middle'][12] = 'new-b17d3061-776a-4125-9d5b-d806c765aa08';
    $pane = new stdClass();
    $pane->pid = 'new-443fc396-2659-4e3f-aeef-bf0fc98479c6';
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
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '443fc396-2659-4e3f-aeef-bf0fc98479c6';
    $display->content['new-443fc396-2659-4e3f-aeef-bf0fc98479c6'] = $pane;
    $display->panels['middle'][13] = 'new-443fc396-2659-4e3f-aeef-bf0fc98479c6';
    $pane = new stdClass();
    $pane->pid = 'new-36a082b4-5667-421a-b26e-d4ed9b43dd57';
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
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '36a082b4-5667-421a-b26e-d4ed9b43dd57';
    $display->content['new-36a082b4-5667-421a-b26e-d4ed9b43dd57'] = $pane;
    $display->panels['middle'][14] = 'new-36a082b4-5667-421a-b26e-d4ed9b43dd57';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-7d2fe3ba-74fd-4809-bb60-96b292e8fd27';
  $panelizer->display = $display;
  $export['node:webform:default:full'] = $panelizer;

  return $export;
}
