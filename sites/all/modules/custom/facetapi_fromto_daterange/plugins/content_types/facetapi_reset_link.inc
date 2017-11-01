<?php

/**
 * @file
 * Facetapi reset filters link plugin.
 */

$plugin = array(
  // TRUE means has no subtypes.
  'single' => TRUE,
  'title' => t('Fasetapi Reset Filters Link'),
  'description' => t('The link clears the serch filters.'),
  // Name of a function which will render the block.
  'render callback' => 'facetapi_fromto_daterange_reset_link_render',
  'category' => t('System'),
);

/**
 * Render callback.
 */
function facetapi_fromto_daterange_reset_link_render($subtype, $conf, $panel_args, &$context) {
  $clean_search_url = current_path();
  $options = array(
    'attributes' => array('class' => array('facetapi-teset-filters-link')),
  );
  $output = l(t('Reset Filters'), $clean_search_url, $options);

  return (object) array('content' => $output);
}
