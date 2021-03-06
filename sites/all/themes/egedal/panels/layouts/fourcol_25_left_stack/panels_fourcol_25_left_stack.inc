<?php
/**
 * Plugin definition.
 */

$plugin = array(
  'title' => t('Four column 25 left stack'),
  'category' => t('Columns: 4'),
  'icon' => 'panels_fourcol_25_left_stack.png',
  'theme' => 'panels_fourcol_25_left_stack',
  /* 'css' => 'panels_fourcol_25_left_stack.css', */
  'admin css' => 'panels_fourcol_25_left_stack.css',
  'regions' => array(
    'top' => t('Top'),
    'bannerl' => t('Banner left'),
    'bannerr' => t('Banner right'),
    'middle' => t('Middle wide'),
    'first' => t('First column'),
    'second' => t('Second column'),
    'third' => t('Third column'),
    'fourth' => t('Forth column'),
    'bottom' => t('Bottom'),
  ),
);
