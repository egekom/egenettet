<?php
/**
 * @file
 * Linkit panel pages plugin.
 */

$plugin = array(
  'ui_title' => t("Pages"),
  'ui_description' => t('Extend Linkit with page support. (Pages from page_manager)'),
  'handler' => array(
      'class' => 'LinkitPanelPagesPlugin',
      'file' => 'linkt_panel_pages.class.php',
  ),
);