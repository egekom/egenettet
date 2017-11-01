<?php

/**
 * @file
 * Roskilde menu pages.
 */

/**
 * My departmen page callback.
 */
function roskilde_menu_mydeparment_page() {
  $my_department = _roskilde_menu_get_user_department();
  $nid = $my_department->field_unit_page[LANGUAGE_NONE][0]['target_id'];
  $node = node_load($nid);
  if ($node) {
    drupal_set_title('');
    menu_set_active_item('node/' . $node->nid);
    return node_show($node);
  }
  drupal_set_message(t('There is no unit page attached to this term.'), 'error');
  drupal_not_found();
}
