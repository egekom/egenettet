<?php
/**
 * @file
 * features_system_specific_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function features_system_specific_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search Info Block';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'search_info_block';
  $fe_block_boxes->body = '<p>Leder du efter en person, skal du se i <a href="/search/phonebook">telefonbogen</a></p>';

  $export['search_info_block'] = $fe_block_boxes;

  return $export;
}
