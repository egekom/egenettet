<?php
/**
 * @file
 * feature_mini_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function feature_mini_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'print_bookmark_and_read_laud_but';
  $mini->category = '';
  $mini->admin_title = 'Print, Bookmark and Read Laud Buttons';
  $mini->admin_description = 'Print, Bookmark and Read Laud Buttons';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '50010c3c-2282-4025-9173-7db202854a30';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-647f17f0-7bf1-4c4d-9b93-69dafc4abe22';
    $pane->panel = 'middle';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '647f17f0-7bf1-4c4d-9b93-69dafc4abe22';
    $display->content['new-647f17f0-7bf1-4c4d-9b93-69dafc4abe22'] = $pane;
    $display->panels['middle'][0] = 'new-647f17f0-7bf1-4c4d-9b93-69dafc4abe22';
    $pane = new stdClass();
    $pane->pid = 'new-e1c84b47-c0fb-45f2-a754-4065aca3073d';
    $pane->panel = 'middle';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'bookmarks',
      'context' => 'requiredcontext_entity:node_1',
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
    $pane->uuid = 'e1c84b47-c0fb-45f2-a754-4065aca3073d';
    $display->content['new-e1c84b47-c0fb-45f2-a754-4065aca3073d'] = $pane;
    $display->panels['middle'][1] = 'new-e1c84b47-c0fb-45f2-a754-4065aca3073d';
    $pane = new stdClass();
    $pane->pid = 'new-2b7ced8b-4d05-4a55-a209-f00cb952dbdd';
    $pane->panel = 'middle';
    $pane->type = 'phonebook_accessibility_link';
    $pane->subtype = 'phonebook_accessibility_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'url' => 'http://www.adgangforalle.dk',
      'form_build_id' => 'form-_Bi95DRFoMybTAkPgpWRze9TgnNwMZ1aojD-0AxMTTU',
      'form_token' => 'FeVprryY2DF6ic6hlRpXpn4uTLE6b651NVqMyEiW3tk',
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
    $pane->uuid = '2b7ced8b-4d05-4a55-a209-f00cb952dbdd';
    $display->content['new-2b7ced8b-4d05-4a55-a209-f00cb952dbdd'] = $pane;
    $display->panels['middle'][2] = 'new-2b7ced8b-4d05-4a55-a209-f00cb952dbdd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-647f17f0-7bf1-4c4d-9b93-69dafc4abe22';
  $mini->display = $display;
  $export['print_bookmark_and_read_laud_but'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'print_bookmark_read_phonebook';
  $mini->category = '';
  $mini->admin_title = 'Print, Bookmark, Read, Phonebook';
  $mini->admin_description = 'Print, Bookmark, Read Loud buttons for Phonebook profile page';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f90dba20-35f0-4c53-9a1d-e8f2d15161f1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7e7897bb-ffad-4ad4-8ff6-a8590f2dfb93';
    $pane->panel = 'middle';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e7897bb-ffad-4ad4-8ff6-a8590f2dfb93';
    $display->content['new-7e7897bb-ffad-4ad4-8ff6-a8590f2dfb93'] = $pane;
    $display->panels['middle'][0] = 'new-7e7897bb-ffad-4ad4-8ff6-a8590f2dfb93';
    $pane = new stdClass();
    $pane->pid = 'new-47ff006e-73b3-46c1-aff7-9ca132044e15';
    $pane->panel = 'middle';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'bookmarks',
      'context' => 'requiredcontext_entity:node_1',
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
    $pane->uuid = '47ff006e-73b3-46c1-aff7-9ca132044e15';
    $display->content['new-47ff006e-73b3-46c1-aff7-9ca132044e15'] = $pane;
    $display->panels['middle'][1] = 'new-47ff006e-73b3-46c1-aff7-9ca132044e15';
    $pane = new stdClass();
    $pane->pid = 'new-a5ea649d-383a-4d76-a40e-03cf6762caab';
    $pane->panel = 'middle';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'favorite_colleagues',
      'context' => 'requiredcontext_entity:node_1',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a5ea649d-383a-4d76-a40e-03cf6762caab';
    $display->content['new-a5ea649d-383a-4d76-a40e-03cf6762caab'] = $pane;
    $display->panels['middle'][2] = 'new-a5ea649d-383a-4d76-a40e-03cf6762caab';
    $pane = new stdClass();
    $pane->pid = 'new-aee043c5-e6de-4539-b240-edd75056548d';
    $pane->panel = 'middle';
    $pane->type = 'phonebook_accessibility_link';
    $pane->subtype = 'phonebook_accessibility_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'url' => 'http://www.adgangforalle.dk',
      'form_build_id' => 'form-6ky-_rNmAb2rLaCVtUghD12OD4FhtHtBtpaoz9ruUWo',
      'form_token' => 'uOhONbe0r7P86AGqd7zaBHhajzkc2guA9o4FdD7hPOs',
      'form_id' => 'roskilde_accessibility_links_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'aee043c5-e6de-4539-b240-edd75056548d';
    $display->content['new-aee043c5-e6de-4539-b240-edd75056548d'] = $pane;
    $display->panels['middle'][3] = 'new-aee043c5-e6de-4539-b240-edd75056548d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['print_bookmark_read_phonebook'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'topic_front_page_menu';
  $mini->category = '';
  $mini->admin_title = 'Topic Front Page Menu';
  $mini->admin_description = 'Topic Front Page Menu';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33_threerow';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left1' => NULL,
      'middle1' => NULL,
      'right1' => NULL,
      'left2' => NULL,
      'middle2' => NULL,
      'right2' => NULL,
      'left3' => NULL,
      'middle3' => NULL,
      'right3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '10f03469-5408-41c9-9f64-abd2352ccd06';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d281ba0b-2991-47a5-b8fd-12556f507cff';
    $pane->panel = 'left1';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:203';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd281ba0b-2991-47a5-b8fd-12556f507cff';
    $display->content['new-d281ba0b-2991-47a5-b8fd-12556f507cff'] = $pane;
    $display->panels['left1'][0] = 'new-d281ba0b-2991-47a5-b8fd-12556f507cff';
    $pane = new stdClass();
    $pane->pid = 'new-ba7d6f5c-0425-4b75-91ba-1bf00aceec2d';
    $pane->panel = 'left2';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:206';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ba7d6f5c-0425-4b75-91ba-1bf00aceec2d';
    $display->content['new-ba7d6f5c-0425-4b75-91ba-1bf00aceec2d'] = $pane;
    $display->panels['left2'][0] = 'new-ba7d6f5c-0425-4b75-91ba-1bf00aceec2d';
    $pane = new stdClass();
    $pane->pid = 'new-f348d9d5-a74a-4ce4-8823-b7e8e50782a7';
    $pane->panel = 'left3';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:209';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f348d9d5-a74a-4ce4-8823-b7e8e50782a7';
    $display->content['new-f348d9d5-a74a-4ce4-8823-b7e8e50782a7'] = $pane;
    $display->panels['left3'][0] = 'new-f348d9d5-a74a-4ce4-8823-b7e8e50782a7';
    $pane = new stdClass();
    $pane->pid = 'new-c39ef2db-33eb-4393-80e1-89a7e89ba923';
    $pane->panel = 'middle1';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:204';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c39ef2db-33eb-4393-80e1-89a7e89ba923';
    $display->content['new-c39ef2db-33eb-4393-80e1-89a7e89ba923'] = $pane;
    $display->panels['middle1'][0] = 'new-c39ef2db-33eb-4393-80e1-89a7e89ba923';
    $pane = new stdClass();
    $pane->pid = 'new-eac0a125-194f-4938-bc29-35e60dd416f8';
    $pane->panel = 'middle2';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:207';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eac0a125-194f-4938-bc29-35e60dd416f8';
    $display->content['new-eac0a125-194f-4938-bc29-35e60dd416f8'] = $pane;
    $display->panels['middle2'][0] = 'new-eac0a125-194f-4938-bc29-35e60dd416f8';
    $pane = new stdClass();
    $pane->pid = 'new-3b12bbef-cfa1-4de3-a235-6a00408d27df';
    $pane->panel = 'middle3';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:210';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3b12bbef-cfa1-4de3-a235-6a00408d27df';
    $display->content['new-3b12bbef-cfa1-4de3-a235-6a00408d27df'] = $pane;
    $display->panels['middle3'][0] = 'new-3b12bbef-cfa1-4de3-a235-6a00408d27df';
    $pane = new stdClass();
    $pane->pid = 'new-b4daef28-0f1c-4f6d-aea0-225af4984889';
    $pane->panel = 'right1';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:205';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4daef28-0f1c-4f6d-aea0-225af4984889';
    $display->content['new-b4daef28-0f1c-4f6d-aea0-225af4984889'] = $pane;
    $display->panels['right1'][0] = 'new-b4daef28-0f1c-4f6d-aea0-225af4984889';
    $pane = new stdClass();
    $pane->pid = 'new-e4818450-b7c6-4bd2-8135-3064e851da3a';
    $pane->panel = 'right2';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:208';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4818450-b7c6-4bd2-8135-3064e851da3a';
    $display->content['new-e4818450-b7c6-4bd2-8135-3064e851da3a'] = $pane;
    $display->panels['right2'][0] = 'new-e4818450-b7c6-4bd2-8135-3064e851da3a';
    $pane = new stdClass();
    $pane->pid = 'new-ee0549da-7871-4ef9-8f9d-2f56360dc6b4';
    $pane->panel = 'right3';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:211';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ee0549da-7871-4ef9-8f9d-2f56360dc6b4';
    $display->content['new-ee0549da-7871-4ef9-8f9d-2f56360dc6b4'] = $pane;
    $display->panels['right3'][0] = 'new-ee0549da-7871-4ef9-8f9d-2f56360dc6b4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['topic_front_page_menu'] = $mini;

  return $export;
}
