<?php
/**
 * @file
 * features_roskilde_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function features_roskilde_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Favourite pages';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'my_bookmarks';
  $fe_block_boxes->body = '<p>my&nbsp;bookmarks</p>
';

  $export['my_bookmarks'] = $fe_block_boxes;

  return $export;
}
