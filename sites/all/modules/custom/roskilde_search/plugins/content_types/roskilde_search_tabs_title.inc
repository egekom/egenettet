<?php
/**
 * @file
 * Imitate facets for Alfresco search
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Roskilde title only block'),
  'category' => t('Miscellaneous'),
  'edit form' => 'roskilde_search_title_pane_settings',
  'render callback' => 'roskilde_search_title_pane_render',
  'all contexts' => TRUE,
);

/**
 * An edit form for the pane's settings.
 */
function roskilde_search_title_pane_settings($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for roskilde_search_pages_tabs_settings.
 */
function roskilde_search_title_pane_settings_submit(&$form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}

/**
 * Render tabs
 */
function roskilde_search_title_pane_render($subtype, $conf, $args, $contexts) {

  $block = new stdClass();
  $block->title = (empty($conf['override_title']) ? NULL : t($conf['override_title_text']));
  $block->content = '<div></div>';
  return $block;
}
