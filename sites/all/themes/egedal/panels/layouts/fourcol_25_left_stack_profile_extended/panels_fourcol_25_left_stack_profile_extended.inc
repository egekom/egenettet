<?php
/**
 * Plugin definition.
 */

$plugin = array(
  'title' => t('Four column 25 left stack profile extended'),
  'category' => t('Columns: 4'),
  'icon' => 'panels_fourcol_25_left_stack_profile_extended.png',
  'theme' => 'panels_fourcol_25_left_stack_profile_extended',
  'admin css' => 'panels_fourcol_25_left_stack_profile_extended.css',
  'regions' => array(
    'top' => t('Top'),
    'left_top' => t('Left top'),
    'left_one' => t('Left one'),
    'left_two' => t('Left two'),
    'left_three' => t('Left three'),
    'left_four' => t('Left four'),
    'left_one_2' => t('Left one Row 2'),
    'left_two_2' => t('Left two Row 2'),
    'left_bottom' => t('Left bottom'),
    'right' => t('Right column'),
    'bottom' => t('Bottom'),
  ),
);
