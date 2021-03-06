<?php
/**
 * Plugin definition.
 */

$plugin = array(
  'title' => t('Four column 25 left stack topic'),
  'category' => t('Columns: 4'),
  'icon' => 'panels_fourcol_25_left_stack_topic.png',
  'theme' => 'panels_fourcol_25_left_stack_topic',
  /* 'css' => 'panels_fourcol_25_left_stack_topic.css', */
  'admin css' => 'panels_fourcol_25_left_stack_topic.css',
  'regions' => array(
    'top' => t('Top'),
    'topl' => t('Top left'),
    'topr' => t('Top right'),
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
