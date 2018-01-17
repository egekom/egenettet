<?php
/**
 * Plugin definition.
 */

$plugin = array(
  'title' => t('Two column 75 25 top stacked'),
  'category' => t('Columns: 2'),
  'icon' => 'panels_twocol_75_25_top_stacked.png',
  'theme' => 'panels_twocol_75_25_top_stacked',
  /* 'css' => 'panels_twocol_75_25_top_stacked.css', */
  'admin css' => 'panels_twocol_75_25_top_stacked.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'bottom' => t('Bottom'),
  ),
);
