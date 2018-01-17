<?php
/**
 * Plugin definition.
 */

$plugin = array(
  'title' => t('Four column 25 left stack profile'),
  'category' => t('Columns: 4'),
  'icon' => 'panels_fourcol_25_left_stack_profile.png',
  'theme' => 'panels_fourcol_25_left_stack_profile',
  /* 'css' => 'panels_fourcol_25_left_stack_profile.css', */
  'admin css' => 'panels_fourcol_25_left_stack_profile.css',
  'regions' => array(
    'top' => t('Top'),
    'left_top' => t('Left top'),
    'left_one' => t('Left one'),
    'left_two' => t('Left two'),
    'left_three' => t('Left three'),
    'left_four' => t('Left four'),
    'left_bottom' => t('Left bottom'),
    'right' => t('Right column'),
    'bottom' => t('Bottom'),
  ),
);
