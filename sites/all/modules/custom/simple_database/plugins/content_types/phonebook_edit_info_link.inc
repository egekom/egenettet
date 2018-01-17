<?php

/**
 * @file
 * Phonebook Edit info link plugin.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Edit info link'),
  'render callback' => 'roskilde_edit_info_link_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('Miscellaneous'),
);

/**
 * Render callback for the content.
 */
function roskilde_edit_info_link_render($subtype, $conf, $panel_args, $context) {
  drupal_add_js(drupal_get_path('module', 'simple_database') .'/js/info_signature_links.js');
  drupal_add_js(array(
    'phonebookNode' => $context->data,
  ), 'setting');

  $block = new stdClass();
  $block->content = '<div class="phonebook-edit-info-link-wrapper"><span></span></div>';

  return $block;
}
