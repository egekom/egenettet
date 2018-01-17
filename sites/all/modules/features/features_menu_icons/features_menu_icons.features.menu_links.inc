<?php
/**
 * @file
 * features_menu_icons.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_menu_icons_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_menu-icon-settings:admin/config/user-interface/menu_icons
  $menu_links['management_menu-icon-settings:admin/config/user-interface/menu_icons'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/menu_icons',
    'router_path' => 'admin/config/user-interface/menu_icons',
    'link_title' => 'Menu Icon settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Associates icons with menu items',
      ),
      'identifier' => 'management_menu-icon-settings:admin/config/user-interface/menu_icons',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu Icon settings');


  return $menu_links;
}
