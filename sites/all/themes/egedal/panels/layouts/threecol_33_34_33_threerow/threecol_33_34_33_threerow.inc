<?php

// Plugin definition
$plugin = array(
  'title' => t('Three column three rows 33/34/33'),
  'category' => t('Columns: 3'),
  'icon' => 'threecol_33_34_33_threerow.png',
  'theme' => 'panels_threecol_33_34_33_threerow',
  'admin css' => 'threecol_33_34_33_threerow.css',
  'regions' => array(
    'left1' => t('Left top'),
    'middle1' => t('Middle top'),
    'right1' => t('Right top'),
    'left2' => t('Left side'),
    'middle2' => t('Middle column'),
    'right2' => t('Right side'),
    'left3' => t('Left Bottom'),
    'middle3' => t('Middle Bottom'),
    'right3' => t('Right Bottom')
   ),
);
