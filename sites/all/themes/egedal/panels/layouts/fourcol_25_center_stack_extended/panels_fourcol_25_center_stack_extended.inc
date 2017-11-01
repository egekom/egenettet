<?php
/**
 * Plugin definition.
 */

$plugin = array(
  'title' => t('Four column 25 center stack extended'),
  'category' => t('Columns: 4'),
  'icon' => 'panels_fourcol_25_center_stack_extended.png',
  'theme' => 'panels_fourcol_25_center_stack_extended',
  /* 'css' => 'panels_fourcol_25_center_stack.css', */
  'admin css' => 'panels_fourcol_25_center_stack_extended.css',
  'regions' => array(
    'top' => t('Top'),
    'bannerl' => t('Banner left'),
    'bannerr' => t('Banner right'),
    'middle' => t('Middle wide'),
    'first' => t('First column'),
    'second' => t('Second column'),
    'middle2' => t('Middle wide below'),
    'third' => t('Third column'),
    'fourth' => t('Forth column'),
    'bottom' => t('Bottom'),
  ),
);
