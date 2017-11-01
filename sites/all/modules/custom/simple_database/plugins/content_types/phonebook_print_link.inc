<?php

/**
 * @file
 * Phonebook print link plugin.
 */

$plugin = array(
  'title' => t('Print link'),
  'render callback' => 'roskilde_print_link_render',
  'category' => t('Miscellaneous'),
  'single' => TRUE,
);

/**
 * Render callback for the content.
 */
function roskilde_print_link_render($subtype, $conf, $panel_args) {
  $block = new stdClass();
  $content = '<div class="phonebook-print-link-wrapper">';
  $content .= l('<span>' . t('Print') . '</span>', '#', array(
    'external' => TRUE,
    'html' => TRUE,
    'attributes' => array('class' => 'print-this-page', 'title' => t('Print')))
  );
  $content .= '</div>';
  $block->content = $content;

  return $block;
}
