<?php

/**
 * @file
 * Phonebook accessibility link plugin.
 */

$plugin = array(
  // TRUE means has no subtypes.
  'single' => TRUE,
  'title' => t('Accessibility link'),
  'render callback' => 'roskilde_accessibility_link_render',
  'edit form' => 'roskilde_accessibility_links_form',
  'category' => t('Miscellaneous'),
);

/**
 * Edit form callback for the content type.
 */
function roskilde_accessibility_links_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['url'] = array(
    '#type' => 'textfield',
    '#title' => t('URL'),
    '#default_value' => isset($conf['url']) ? $conf['url'] : 'http://www.adgangforalle.dk',
  );

  return $form;
}

/**
 * Form submission handler for the roskilde_accessibility_links_form().
 */
function roskilde_accessibility_links_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render callback for the content.
 */
function roskilde_accessibility_link_render($subtype, $conf, $panel_args) {
  $block = new stdClass();
  $content = '<div class="phonebook-accessibility-link-wrapper">';
  $content .= l('<span>' . t('Read Out Loud') . '</span>', $conf['url'], array(
    'external' => TRUE,
    'html' => TRUE,
    'attributes' => array('target' => '_blank', 'title' => t('Accessibility')))
  );
  $content .= '</div>';
  $block->content = $content;

  return $block;
}
