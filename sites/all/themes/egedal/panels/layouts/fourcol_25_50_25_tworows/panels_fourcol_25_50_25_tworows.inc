<?php
/**
 * Plugin definition.
 */

$plugin = array(
  'title' => t('Four column 25 50 25 two rows'),
  'category' => t('Columns: 4'),
  'icon' => 'panels_fourcol_25_50_25_tworows.png',
  'theme' => 'panels_fourcol_25_50_25_tworows',
  /* 'css' => 'panels_fourcol_25_50_25_tworows.css', */
  'admin css' => 'panels_fourcol_25_50_25_tworows.css',
  'regions' => array(
    'top' => t('Top'),
    'top_left' => t('Top left'),
    'top_middle' => t('Top middle'),
    'top_right' => t('Top right'),
    'bottom_left' => t('Bottom left'),
    'bottom_middle' => t('Bottom middle'),
    'bottom_right' => t('Bottom right'),
    'bottom' => t('Bottom'),
  ),
);
