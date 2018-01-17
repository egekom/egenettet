<?php
/**
 * @file
 * features_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access advuser'.
  $permissions['access advuser'] = array(
    'name' => 'access advuser',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'advuser',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access broken links report'.
  $permissions['access broken links report'] = array(
    'name' => 'access broken links report',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access cmis'.
  $permissions['access cmis'] = array(
    'name' => 'access cmis',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'cmis',
  );

  // Exported permission: 'access cmis views'.
  $permissions['access cmis views'] = array(
    'name' => 'access cmis views',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'cmis_views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access memcache statistics'.
  $permissions['access memcache statistics'] = array(
    'name' => 'access memcache statistics',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'memcache_admin',
  );

  // Exported permission: 'access own broken links report'.
  $permissions['access own broken links report'] = array(
    'name' => 'access own broken links report',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access simple database'.
  $permissions['access simple database'] = array(
    'name' => 'access simple database',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'simple_database',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access slab cachedump'.
  $permissions['access slab cachedump'] = array(
    'name' => 'access slab cachedump',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'memcache_admin',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'access_cmis_browser2_ajax'.
  $permissions['access_cmis_browser2_ajax'] = array(
    'name' => 'access_cmis_browser2_ajax',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'cmis_browser2',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer advuser'.
  $permissions['administer advuser'] = array(
    'name' => 'administer advuser',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'advuser',
  );

  // Exported permission: 'administer autoarch settings'.
  $permissions['administer autoarch settings'] = array(
    'name' => 'administer autoarch settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'autoarch',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer cer settings'.
  $permissions['administer cer settings'] = array(
    'name' => 'administer cer settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'cer',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer cmis'.
  $permissions['administer cmis'] = array(
    'name' => 'administer cmis',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'cmis',
  );

  // Exported permission: 'administer cmis views'.
  $permissions['administer cmis views'] = array(
    'name' => 'administer cmis views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'cmis_views',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer devel menu items'.
  $permissions['administer devel menu items'] = array(
    'name' => 'administer devel menu items',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer elysia_cron'.
  $permissions['administer elysia_cron'] = array(
    'name' => 'administer elysia_cron',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'elysia_cron',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer features menu items'.
  $permissions['administer features menu items'] = array(
    'name' => 'administer features menu items',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldable panels panes'.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer footer-menu menu items'.
  $permissions['administer footer-menu menu items'] = array(
    'name' => 'administer footer-menu menu items',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer homebox'.
  $permissions['administer homebox'] = array(
    'name' => 'administer homebox',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'homebox',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer jquery colorpicker'.
  $permissions['administer jquery colorpicker'] = array(
    'name' => 'administer jquery colorpicker',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'jquery_colorpicker',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer linkchecker'.
  $permissions['administer linkchecker'] = array(
    'name' => 'administer linkchecker',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer login destination settings'.
  $permissions['administer login destination settings'] = array(
    'name' => 'administer login destination settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'login_destination',
  );

  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer management menu items'.
  $permissions['administer management menu items'] = array(
    'name' => 'administer management menu items',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer menu-help menu items'.
  $permissions['administer menu-help menu items'] = array(
    'name' => 'administer menu-help menu items',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-search-pages menu items'.
  $permissions['administer menu-search-pages menu items'] = array(
    'name' => 'administer menu-search-pages menu items',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer navigation menu items'.
  $permissions['administer navigation menu items'] = array(
    'name' => 'administer navigation menu items',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer news-events menu items'.
  $permissions['administer news-events menu items'] = array(
    'name' => 'administer news-events menu items',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer nodeaccess'.
  $permissions['administer nodeaccess'] = array(
    'name' => 'administer nodeaccess',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer nodesymlinks'.
  $permissions['administer nodesymlinks'] = array(
    'name' => 'administer nodesymlinks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'nodesymlinks',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_article defaults'.
  $permissions['administer panelizer comment comment_node_article defaults'] = array(
    'name' => 'administer panelizer comment comment_node_article defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_banner_element defaults'.
  $permissions['administer panelizer comment comment_node_banner_element defaults'] = array(
    'name' => 'administer panelizer comment comment_node_banner_element defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_editorial_news defaults'.
  $permissions['administer panelizer comment comment_node_editorial_news defaults'] = array(
    'name' => 'administer panelizer comment comment_node_editorial_news defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_event defaults'.
  $permissions['administer panelizer comment comment_node_event defaults'] = array(
    'name' => 'administer panelizer comment comment_node_event defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_faq_qa defaults'.
  $permissions['administer panelizer comment comment_node_faq_qa defaults'] = array(
    'name' => 'administer panelizer comment comment_node_faq_qa defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_feed defaults'.
  $permissions['administer panelizer comment comment_node_feed defaults'] = array(
    'name' => 'administer panelizer comment comment_node_feed defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_feed_item defaults'.
  $permissions['administer panelizer comment comment_node_feed_item defaults'] = array(
    'name' => 'administer panelizer comment comment_node_feed_item defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_front_page defaults'.
  $permissions['administer panelizer comment comment_node_front_page defaults'] = array(
    'name' => 'administer panelizer comment comment_node_front_page defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_html_block defaults'.
  $permissions['administer panelizer comment comment_node_html_block defaults'] = array(
    'name' => 'administer panelizer comment comment_node_html_block defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_link_list defaults'.
  $permissions['administer panelizer comment comment_node_link_list defaults'] = array(
    'name' => 'administer panelizer comment comment_node_link_list defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_phonebook defaults'.
  $permissions['administer panelizer comment comment_node_phonebook defaults'] = array(
    'name' => 'administer panelizer comment comment_node_phonebook defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_promoted_search_results defaults'.
  $permissions['administer panelizer comment comment_node_promoted_search_results defaults'] = array(
    'name' => 'administer panelizer comment comment_node_promoted_search_results defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_short_event defaults'.
  $permissions['administer panelizer comment comment_node_short_event defaults'] = array(
    'name' => 'administer panelizer comment comment_node_short_event defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_short_news defaults'.
  $permissions['administer panelizer comment comment_node_short_news defaults'] = array(
    'name' => 'administer panelizer comment comment_node_short_news defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_tabbed defaults'.
  $permissions['administer panelizer comment comment_node_tabbed defaults'] = array(
    'name' => 'administer panelizer comment comment_node_tabbed defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_topic_frontpage defaults'.
  $permissions['administer panelizer comment comment_node_topic_frontpage defaults'] = array(
    'name' => 'administer panelizer comment comment_node_topic_frontpage defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_unit defaults'.
  $permissions['administer panelizer comment comment_node_unit defaults'] = array(
    'name' => 'administer panelizer comment comment_node_unit defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_warning defaults'.
  $permissions['administer panelizer comment comment_node_warning defaults'] = array(
    'name' => 'administer panelizer comment comment_node_warning defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_webform defaults'.
  $permissions['administer panelizer comment comment_node_webform defaults'] = array(
    'name' => 'administer panelizer comment comment_node_webform defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane alfresco_files defaults'.
  $permissions['administer panelizer fieldable_panels_pane alfresco_files defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane alfresco_files defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane banner_element_pane defaults'.
  $permissions['administer panelizer fieldable_panels_pane banner_element_pane defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane banner_element_pane defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane banner_link defaults'.
  $permissions['administer panelizer fieldable_panels_pane banner_link defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane banner_link defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane banner_link_element defaults'.
  $permissions['administer panelizer fieldable_panels_pane banner_link_element defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane banner_link_element defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane custom_block_with_links_and_color defaults'.
  $permissions['administer panelizer fieldable_panels_pane custom_block_with_links_and_color defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane custom_block_with_links_and_color defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane faq_pane defaults'.
  $permissions['administer panelizer fieldable_panels_pane faq_pane defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane faq_pane defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane fieldable_panels_pane defaults'.
  $permissions['administer panelizer fieldable_panels_pane fieldable_panels_pane defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane fieldable_panels_pane defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane link_list_pane defaults'.
  $permissions['administer panelizer fieldable_panels_pane link_list_pane defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane link_list_pane defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane tabbed_content defaults'.
  $permissions['administer panelizer fieldable_panels_pane tabbed_content defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane tabbed_content defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node agreements defaults'.
  $permissions['administer panelizer node agreements defaults'] = array(
    'name' => 'administer panelizer node agreements defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article defaults'.
  $permissions['administer panelizer node article defaults'] = array(
    'name' => 'administer panelizer node article defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node banner_element defaults'.
  $permissions['administer panelizer node banner_element defaults'] = array(
    'name' => 'administer panelizer node banner_element defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node editorial_news defaults'.
  $permissions['administer panelizer node editorial_news defaults'] = array(
    'name' => 'administer panelizer node editorial_news defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event defaults'.
  $permissions['administer panelizer node event defaults'] = array(
    'name' => 'administer panelizer node event defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq_qa defaults'.
  $permissions['administer panelizer node faq_qa defaults'] = array(
    'name' => 'administer panelizer node faq_qa defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node feed defaults'.
  $permissions['administer panelizer node feed defaults'] = array(
    'name' => 'administer panelizer node feed defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node feed_item defaults'.
  $permissions['administer panelizer node feed_item defaults'] = array(
    'name' => 'administer panelizer node feed_item defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node front_page content'.
  $permissions['administer panelizer node front_page content'] = array(
    'name' => 'administer panelizer node front_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node front_page context'.
  $permissions['administer panelizer node front_page context'] = array(
    'name' => 'administer panelizer node front_page context',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node front_page defaults'.
  $permissions['administer panelizer node front_page defaults'] = array(
    'name' => 'administer panelizer node front_page defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node front_page layout'.
  $permissions['administer panelizer node front_page layout'] = array(
    'name' => 'administer panelizer node front_page layout',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node front_page overview'.
  $permissions['administer panelizer node front_page overview'] = array(
    'name' => 'administer panelizer node front_page overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node front_page settings'.
  $permissions['administer panelizer node front_page settings'] = array(
    'name' => 'administer panelizer node front_page settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node html_block defaults'.
  $permissions['administer panelizer node html_block defaults'] = array(
    'name' => 'administer panelizer node html_block defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node link_list defaults'.
  $permissions['administer panelizer node link_list defaults'] = array(
    'name' => 'administer panelizer node link_list defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node phonebook defaults'.
  $permissions['administer panelizer node phonebook defaults'] = array(
    'name' => 'administer panelizer node phonebook defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node promoted_search_results defaults'.
  $permissions['administer panelizer node promoted_search_results defaults'] = array(
    'name' => 'administer panelizer node promoted_search_results defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node short_event defaults'.
  $permissions['administer panelizer node short_event defaults'] = array(
    'name' => 'administer panelizer node short_event defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node short_news defaults'.
  $permissions['administer panelizer node short_news defaults'] = array(
    'name' => 'administer panelizer node short_news defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tabbed defaults'.
  $permissions['administer panelizer node tabbed defaults'] = array(
    'name' => 'administer panelizer node tabbed defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node topic_frontpage content'.
  $permissions['administer panelizer node topic_frontpage content'] = array(
    'name' => 'administer panelizer node topic_frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node topic_frontpage context'.
  $permissions['administer panelizer node topic_frontpage context'] = array(
    'name' => 'administer panelizer node topic_frontpage context',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node topic_frontpage defaults'.
  $permissions['administer panelizer node topic_frontpage defaults'] = array(
    'name' => 'administer panelizer node topic_frontpage defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node topic_frontpage layout'.
  $permissions['administer panelizer node topic_frontpage layout'] = array(
    'name' => 'administer panelizer node topic_frontpage layout',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node topic_frontpage overview'.
  $permissions['administer panelizer node topic_frontpage overview'] = array(
    'name' => 'administer panelizer node topic_frontpage overview',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node topic_frontpage settings'.
  $permissions['administer panelizer node topic_frontpage settings'] = array(
    'name' => 'administer panelizer node topic_frontpage settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node unit content'.
  $permissions['administer panelizer node unit content'] = array(
    'name' => 'administer panelizer node unit content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node unit context'.
  $permissions['administer panelizer node unit context'] = array(
    'name' => 'administer panelizer node unit context',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node unit defaults'.
  $permissions['administer panelizer node unit defaults'] = array(
    'name' => 'administer panelizer node unit defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node unit layout'.
  $permissions['administer panelizer node unit layout'] = array(
    'name' => 'administer panelizer node unit layout',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node unit overview'.
  $permissions['administer panelizer node unit overview'] = array(
    'name' => 'administer panelizer node unit overview',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node unit settings'.
  $permissions['administer panelizer node unit settings'] = array(
    'name' => 'administer panelizer node unit settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node warning defaults'.
  $permissions['administer panelizer node warning defaults'] = array(
    'name' => 'administer panelizer node warning defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform defaults'.
  $permissions['administer panelizer node webform defaults'] = array(
    'name' => 'administer panelizer node webform defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term egedal_roads defaults'.
  $permissions['administer panelizer taxonomy_term egedal_roads defaults'] = array(
    'name' => 'administer panelizer taxonomy_term egedal_roads defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term feed_category defaults'.
  $permissions['administer panelizer taxonomy_term feed_category defaults'] = array(
    'name' => 'administer panelizer taxonomy_term feed_category defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term media_folders defaults'.
  $permissions['administer panelizer taxonomy_term media_folders defaults'] = array(
    'name' => 'administer panelizer taxonomy_term media_folders defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term organisational_unit defaults'.
  $permissions['administer panelizer taxonomy_term organisational_unit defaults'] = array(
    'name' => 'administer panelizer taxonomy_term organisational_unit defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term phonebook_department defaults'.
  $permissions['administer panelizer taxonomy_term phonebook_department defaults'] = array(
    'name' => 'administer panelizer taxonomy_term phonebook_department defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term tags defaults'.
  $permissions['administer panelizer taxonomy_term tags defaults'] = array(
    'name' => 'administer panelizer taxonomy_term tags defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term topics defaults'.
  $permissions['administer panelizer taxonomy_term topics defaults'] = array(
    'name' => 'administer panelizer taxonomy_term topics defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user defaults'.
  $permissions['administer panelizer user user defaults'] = array(
    'name' => 'administer panelizer user user defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer rh_node'.
  $permissions['administer rh_node'] = array(
    'name' => 'administer rh_node',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer role change configuration'.
  $permissions['administer role change configuration'] = array(
    'name' => 'administer role change configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user_role_changer',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer simple database'.
  $permissions['administer simple database'] = array(
    'name' => 'administer simple database',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'simple_database',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'smtp',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer system menus'.
  $permissions['administer system menus'] = array(
    'name' => 'administer system menus',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'content_menu',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer tracking code'.
  $permissions['administer tracking code'] = array(
    'name' => 'administer tracking code',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'tracking_code',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer user subscriptions'.
  $permissions['administer user subscriptions'] = array(
    'name' => 'administer user subscriptions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: 'administer user-menu menu items'.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer varnish'.
  $permissions['administer varnish'] = array(
    'name' => 'administer varnish',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'varnish',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'archive nodes using autoarch'.
  $permissions['archive nodes using autoarch'] = array(
    'name' => 'archive nodes using autoarch',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'autoarch',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bulk-administer user subscriptions'.
  $permissions['bulk-administer user subscriptions'] = array(
    'name' => 'bulk-administer user subscriptions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass maxlength'.
  $permissions['bypass maxlength'] = array(
    'name' => 'bypass maxlength',
    'roles' => array(),
    'module' => 'maxlength',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rh_node'.
  $permissions['bypass rh_node'] = array(
    'name' => 'bypass rh_node',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear csv_to_taxonomy_import feeds'.
  $permissions['clear csv_to_taxonomy_import feeds'] = array(
    'name' => 'clear csv_to_taxonomy_import feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear feed feeds'.
  $permissions['clear feed feeds'] = array(
    'name' => 'clear feed feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ldap_data_to_phonebook feeds'.
  $permissions['clear ldap_data_to_phonebook feeds'] = array(
    'name' => 'clear ldap_data_to_phonebook feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ldap_data_to_user_fields feeds'.
  $permissions['clear ldap_data_to_user_fields feeds'] = array(
    'name' => 'clear ldap_data_to_user_fields feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ldap_to_department_taxonomy feeds'.
  $permissions['clear ldap_to_department_taxonomy feeds'] = array(
    'name' => 'clear ldap_to_department_taxonomy feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear roskilde_phonebook_migration feeds'.
  $permissions['clear roskilde_phonebook_migration feeds'] = array(
    'name' => 'clear roskilde_phonebook_migration feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear test feeds'.
  $permissions['clear test feeds'] = array(
    'name' => 'clear test feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'cmis extra view ajax browse'.
  $permissions['cmis extra view ajax browse'] = array(
    'name' => 'cmis extra view ajax browse',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'cmis_extra',
  );

  // Exported permission: 'cmis extra view browse'.
  $permissions['cmis extra view browse'] = array(
    'name' => 'cmis extra view browse',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'cmis_extra',
  );

  // Exported permission: 'cmis extra view field'.
  $permissions['cmis extra view field'] = array(
    'name' => 'cmis extra view field',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'cmis_extra',
  );

  // Exported permission: 'cmis extra view views'.
  $permissions['cmis extra view views'] = array(
    'name' => 'cmis extra view views',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'cmis_extra',
  );

  // Exported permission: 'configure authcache blocks'.
  $permissions['configure authcache blocks'] = array(
    'name' => 'configure authcache blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'authcache_block',
  );

  // Exported permission: 'configure tablefield'.
  $permissions['configure tablefield'] = array(
    'name' => 'configure tablefield',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'create agreements content'.
  $permissions['create agreements content'] = array(
    'name' => 'create agreements content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'User' => 'User',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create banner_element content'.
  $permissions['create banner_element content'] = array(
    'name' => 'create banner_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create editorial_news content'.
  $permissions['create editorial_news content'] = array(
    'name' => 'create editorial_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'User' => 'User',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create faq_qa content'.
  $permissions['create faq_qa content'] = array(
    'name' => 'create faq_qa content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create feed content'.
  $permissions['create feed content'] = array(
    'name' => 'create feed content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create feed_item content'.
  $permissions['create feed_item content'] = array(
    'name' => 'create feed_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_alfresco_document'.
  $permissions['create field_alfresco_document'] = array(
    'name' => 'create field_alfresco_document',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_birthday'.
  $permissions['create field_birthday'] = array(
    'name' => 'create field_birthday',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_department'.
  $permissions['create field_department'] = array(
    'name' => 'create field_department',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_desk_id'.
  $permissions['create field_desk_id'] = array(
    'name' => 'create field_desk_id',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_email'.
  $permissions['create field_email'] = array(
    'name' => 'create field_email',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_first_name'.
  $permissions['create field_first_name'] = array(
    'name' => 'create field_first_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_image_data'.
  $permissions['create field_image_data'] = array(
    'name' => 'create field_image_data',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_last_name'.
  $permissions['create field_last_name'] = array(
    'name' => 'create field_last_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_mobile_number'.
  $permissions['create field_mobile_number'] = array(
    'name' => 'create field_mobile_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organizational_unit'.
  $permissions['create field_organizational_unit'] = array(
    'name' => 'create field_organizational_unit',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_phone_number'.
  $permissions['create field_phone_number'] = array(
    'name' => 'create field_phone_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_phonebook_contact'.
  $permissions['create field_phonebook_contact'] = array(
    'name' => 'create field_phonebook_contact',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_phonebook_contact_id'.
  $permissions['create field_phonebook_contact_id'] = array(
    'name' => 'create field_phonebook_contact_id',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_phonebook_image'.
  $permissions['create field_phonebook_image'] = array(
    'name' => 'create field_phonebook_image',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_position'.
  $permissions['create field_position'] = array(
    'name' => 'create field_position',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_related_agreements'.
  $permissions['create field_related_agreements'] = array(
    'name' => 'create field_related_agreements',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_related_article_content'.
  $permissions['create field_related_article_content'] = array(
    'name' => 'create field_related_article_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_related_content'.
  $permissions['create field_related_content'] = array(
    'name' => 'create field_related_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_related_faq'.
  $permissions['create field_related_faq'] = array(
    'name' => 'create field_related_faq',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_room_number'.
  $permissions['create field_room_number'] = array(
    'name' => 'create field_room_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_show_agreements_list'.
  $permissions['create field_show_agreements_list'] = array(
    'name' => 'create field_show_agreements_list',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_show_faq_list'.
  $permissions['create field_show_faq_list'] = array(
    'name' => 'create field_show_faq_list',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_table'.
  $permissions['create field_table'] = array(
    'name' => 'create field_table',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_user'.
  $permissions['create field_user'] = array(
    'name' => 'create field_user',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_video_data'.
  $permissions['create field_video_data'] = array(
    'name' => 'create field_video_data',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_webforms'.
  $permissions['create field_webforms'] = array(
    'name' => 'create field_webforms',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_work_assignments'.
  $permissions['create field_work_assignments'] = array(
    'name' => 'create field_work_assignments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create fieldable alfresco_files'.
  $permissions['create fieldable alfresco_files'] = array(
    'name' => 'create fieldable alfresco_files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable banner_element_pane'.
  $permissions['create fieldable banner_element_pane'] = array(
    'name' => 'create fieldable banner_element_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable banner_link'.
  $permissions['create fieldable banner_link'] = array(
    'name' => 'create fieldable banner_link',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable banner_link_element'.
  $permissions['create fieldable banner_link_element'] = array(
    'name' => 'create fieldable banner_link_element',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable custom_block_with_links_and_color'.
  $permissions['create fieldable custom_block_with_links_and_color'] = array(
    'name' => 'create fieldable custom_block_with_links_and_color',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable faq_pane'.
  $permissions['create fieldable faq_pane'] = array(
    'name' => 'create fieldable faq_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable fieldable_panels_pane'.
  $permissions['create fieldable fieldable_panels_pane'] = array(
    'name' => 'create fieldable fieldable_panels_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable link_list_pane'.
  $permissions['create fieldable link_list_pane'] = array(
    'name' => 'create fieldable link_list_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable tabbed_content'.
  $permissions['create fieldable tabbed_content'] = array(
    'name' => 'create fieldable tabbed_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create front_page content'.
  $permissions['create front_page content'] = array(
    'name' => 'create front_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create html_block content'.
  $permissions['create html_block content'] = array(
    'name' => 'create html_block content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create link_list content'.
  $permissions['create link_list content'] = array(
    'name' => 'create link_list content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create phonebook content'.
  $permissions['create phonebook content'] = array(
    'name' => 'create phonebook content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create short_event content'.
  $permissions['create short_event content'] = array(
    'name' => 'create short_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'User' => 'User',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create short_news content'.
  $permissions['create short_news content'] = array(
    'name' => 'create short_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
      'User' => 'User',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tabbed content'.
  $permissions['create tabbed content'] = array(
    'name' => 'create tabbed content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create topic_frontpage content'.
  $permissions['create topic_frontpage content'] = array(
    'name' => 'create topic_frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create unit content'.
  $permissions['create unit content'] = array(
    'name' => 'create unit content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create warning content'.
  $permissions['create warning content'] = array(
    'name' => 'create warning content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any agreements content'.
  $permissions['delete any agreements content'] = array(
    'name' => 'delete any agreements content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any banner_element content'.
  $permissions['delete any banner_element content'] = array(
    'name' => 'delete any banner_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any editorial_news content'.
  $permissions['delete any editorial_news content'] = array(
    'name' => 'delete any editorial_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq_qa content'.
  $permissions['delete any faq_qa content'] = array(
    'name' => 'delete any faq_qa content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any feed content'.
  $permissions['delete any feed content'] = array(
    'name' => 'delete any feed content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any feed_item content'.
  $permissions['delete any feed_item content'] = array(
    'name' => 'delete any feed_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any front_page content'.
  $permissions['delete any front_page content'] = array(
    'name' => 'delete any front_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any html_block content'.
  $permissions['delete any html_block content'] = array(
    'name' => 'delete any html_block content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any link_list content'.
  $permissions['delete any link_list content'] = array(
    'name' => 'delete any link_list content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any phonebook content'.
  $permissions['delete any phonebook content'] = array(
    'name' => 'delete any phonebook content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any short_event content'.
  $permissions['delete any short_event content'] = array(
    'name' => 'delete any short_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any short_news content'.
  $permissions['delete any short_news content'] = array(
    'name' => 'delete any short_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tabbed content'.
  $permissions['delete any tabbed content'] = array(
    'name' => 'delete any tabbed content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any topic_frontpage content'.
  $permissions['delete any topic_frontpage content'] = array(
    'name' => 'delete any topic_frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any unit content'.
  $permissions['delete any unit content'] = array(
    'name' => 'delete any unit content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any warning content'.
  $permissions['delete any warning content'] = array(
    'name' => 'delete any warning content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete fieldable alfresco_files'.
  $permissions['delete fieldable alfresco_files'] = array(
    'name' => 'delete fieldable alfresco_files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable banner_element_pane'.
  $permissions['delete fieldable banner_element_pane'] = array(
    'name' => 'delete fieldable banner_element_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable banner_link'.
  $permissions['delete fieldable banner_link'] = array(
    'name' => 'delete fieldable banner_link',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable banner_link_element'.
  $permissions['delete fieldable banner_link_element'] = array(
    'name' => 'delete fieldable banner_link_element',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable custom_block_with_links_and_color'.
  $permissions['delete fieldable custom_block_with_links_and_color'] = array(
    'name' => 'delete fieldable custom_block_with_links_and_color',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable faq_pane'.
  $permissions['delete fieldable faq_pane'] = array(
    'name' => 'delete fieldable faq_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable fieldable_panels_pane'.
  $permissions['delete fieldable fieldable_panels_pane'] = array(
    'name' => 'delete fieldable fieldable_panels_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable link_list_pane'.
  $permissions['delete fieldable link_list_pane'] = array(
    'name' => 'delete fieldable link_list_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable tabbed_content'.
  $permissions['delete fieldable tabbed_content'] = array(
    'name' => 'delete fieldable tabbed_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete own agreements content'.
  $permissions['delete own agreements content'] = array(
    'name' => 'delete own agreements content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own banner_element content'.
  $permissions['delete own banner_element content'] = array(
    'name' => 'delete own banner_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own editorial_news content'.
  $permissions['delete own editorial_news content'] = array(
    'name' => 'delete own editorial_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq_qa content'.
  $permissions['delete own faq_qa content'] = array(
    'name' => 'delete own faq_qa content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own feed content'.
  $permissions['delete own feed content'] = array(
    'name' => 'delete own feed content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own feed_item content'.
  $permissions['delete own feed_item content'] = array(
    'name' => 'delete own feed_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own front_page content'.
  $permissions['delete own front_page content'] = array(
    'name' => 'delete own front_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own html_block content'.
  $permissions['delete own html_block content'] = array(
    'name' => 'delete own html_block content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own link_list content'.
  $permissions['delete own link_list content'] = array(
    'name' => 'delete own link_list content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own phonebook content'.
  $permissions['delete own phonebook content'] = array(
    'name' => 'delete own phonebook content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own short_event content'.
  $permissions['delete own short_event content'] = array(
    'name' => 'delete own short_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own short_news content'.
  $permissions['delete own short_news content'] = array(
    'name' => 'delete own short_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tabbed content'.
  $permissions['delete own tabbed content'] = array(
    'name' => 'delete own tabbed content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own topic_frontpage content'.
  $permissions['delete own topic_frontpage content'] = array(
    'name' => 'delete own topic_frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own unit content'.
  $permissions['delete own unit content'] = array(
    'name' => 'delete own unit content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own warning content'.
  $permissions['delete own warning content'] = array(
    'name' => 'delete own warning content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in feed_category'.
  $permissions['delete terms in feed_category'] = array(
    'name' => 'delete terms in feed_category',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in media_folders'.
  $permissions['delete terms in media_folders'] = array(
    'name' => 'delete terms in media_folders',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organisational_unit'.
  $permissions['delete terms in organisational_unit'] = array(
    'name' => 'delete terms in organisational_unit',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in topics'.
  $permissions['delete terms in topics'] = array(
    'name' => 'delete terms in topics',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any agreements content'.
  $permissions['edit any agreements content'] = array(
    'name' => 'edit any agreements content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any banner_element content'.
  $permissions['edit any banner_element content'] = array(
    'name' => 'edit any banner_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any editorial_news content'.
  $permissions['edit any editorial_news content'] = array(
    'name' => 'edit any editorial_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any faq_qa content'.
  $permissions['edit any faq_qa content'] = array(
    'name' => 'edit any faq_qa content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any feed content'.
  $permissions['edit any feed content'] = array(
    'name' => 'edit any feed content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any feed_item content'.
  $permissions['edit any feed_item content'] = array(
    'name' => 'edit any feed_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any front_page content'.
  $permissions['edit any front_page content'] = array(
    'name' => 'edit any front_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any html_block content'.
  $permissions['edit any html_block content'] = array(
    'name' => 'edit any html_block content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any link_list content'.
  $permissions['edit any link_list content'] = array(
    'name' => 'edit any link_list content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any phonebook content'.
  $permissions['edit any phonebook content'] = array(
    'name' => 'edit any phonebook content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any short_event content'.
  $permissions['edit any short_event content'] = array(
    'name' => 'edit any short_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any short_news content'.
  $permissions['edit any short_news content'] = array(
    'name' => 'edit any short_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tabbed content'.
  $permissions['edit any tabbed content'] = array(
    'name' => 'edit any tabbed content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any topic_frontpage content'.
  $permissions['edit any topic_frontpage content'] = array(
    'name' => 'edit any topic_frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any unit content'.
  $permissions['edit any unit content'] = array(
    'name' => 'edit any unit content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any warning content'.
  $permissions['edit any warning content'] = array(
    'name' => 'edit any warning content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_alfresco_document'.
  $permissions['edit field_alfresco_document'] = array(
    'name' => 'edit field_alfresco_document',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_birthday'.
  $permissions['edit field_birthday'] = array(
    'name' => 'edit field_birthday',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_department'.
  $permissions['edit field_department'] = array(
    'name' => 'edit field_department',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_desk_id'.
  $permissions['edit field_desk_id'] = array(
    'name' => 'edit field_desk_id',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_email'.
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_first_name'.
  $permissions['edit field_first_name'] = array(
    'name' => 'edit field_first_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_image_data'.
  $permissions['edit field_image_data'] = array(
    'name' => 'edit field_image_data',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_last_name'.
  $permissions['edit field_last_name'] = array(
    'name' => 'edit field_last_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_mobile_number'.
  $permissions['edit field_mobile_number'] = array(
    'name' => 'edit field_mobile_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organizational_unit'.
  $permissions['edit field_organizational_unit'] = array(
    'name' => 'edit field_organizational_unit',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_phone_number'.
  $permissions['edit field_phone_number'] = array(
    'name' => 'edit field_phone_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_phonebook_contact'.
  $permissions['edit field_phonebook_contact'] = array(
    'name' => 'edit field_phonebook_contact',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_phonebook_contact_id'.
  $permissions['edit field_phonebook_contact_id'] = array(
    'name' => 'edit field_phonebook_contact_id',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_phonebook_image'.
  $permissions['edit field_phonebook_image'] = array(
    'name' => 'edit field_phonebook_image',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_position'.
  $permissions['edit field_position'] = array(
    'name' => 'edit field_position',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_related_agreements'.
  $permissions['edit field_related_agreements'] = array(
    'name' => 'edit field_related_agreements',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_related_article_content'.
  $permissions['edit field_related_article_content'] = array(
    'name' => 'edit field_related_article_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_related_content'.
  $permissions['edit field_related_content'] = array(
    'name' => 'edit field_related_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_related_faq'.
  $permissions['edit field_related_faq'] = array(
    'name' => 'edit field_related_faq',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_room_number'.
  $permissions['edit field_room_number'] = array(
    'name' => 'edit field_room_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_show_agreements_list'.
  $permissions['edit field_show_agreements_list'] = array(
    'name' => 'edit field_show_agreements_list',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_show_faq_list'.
  $permissions['edit field_show_faq_list'] = array(
    'name' => 'edit field_show_faq_list',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_table'.
  $permissions['edit field_table'] = array(
    'name' => 'edit field_table',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_user'.
  $permissions['edit field_user'] = array(
    'name' => 'edit field_user',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_video_data'.
  $permissions['edit field_video_data'] = array(
    'name' => 'edit field_video_data',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_webforms'.
  $permissions['edit field_webforms'] = array(
    'name' => 'edit field_webforms',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_work_assignments'.
  $permissions['edit field_work_assignments'] = array(
    'name' => 'edit field_work_assignments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit fieldable alfresco_files'.
  $permissions['edit fieldable alfresco_files'] = array(
    'name' => 'edit fieldable alfresco_files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable banner_element_pane'.
  $permissions['edit fieldable banner_element_pane'] = array(
    'name' => 'edit fieldable banner_element_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable banner_link'.
  $permissions['edit fieldable banner_link'] = array(
    'name' => 'edit fieldable banner_link',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable banner_link_element'.
  $permissions['edit fieldable banner_link_element'] = array(
    'name' => 'edit fieldable banner_link_element',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable custom_block_with_links_and_color'.
  $permissions['edit fieldable custom_block_with_links_and_color'] = array(
    'name' => 'edit fieldable custom_block_with_links_and_color',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable faq_pane'.
  $permissions['edit fieldable faq_pane'] = array(
    'name' => 'edit fieldable faq_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable fieldable_panels_pane'.
  $permissions['edit fieldable fieldable_panels_pane'] = array(
    'name' => 'edit fieldable fieldable_panels_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable link_list_pane'.
  $permissions['edit fieldable link_list_pane'] = array(
    'name' => 'edit fieldable link_list_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable tabbed_content'.
  $permissions['edit fieldable tabbed_content'] = array(
    'name' => 'edit fieldable tabbed_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit link settings'.
  $permissions['edit link settings'] = array(
    'name' => 'edit link settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'edit linkit picker settings'.
  $permissions['edit linkit picker settings'] = array(
    'name' => 'edit linkit picker settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkit_picker',
  );

  // Exported permission: 'edit own agreements content'.
  $permissions['edit own agreements content'] = array(
    'name' => 'edit own agreements content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'User' => 'User',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own banner_element content'.
  $permissions['edit own banner_element content'] = array(
    'name' => 'edit own banner_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own editorial_news content'.
  $permissions['edit own editorial_news content'] = array(
    'name' => 'edit own editorial_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'User' => 'User',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own faq_qa content'.
  $permissions['edit own faq_qa content'] = array(
    'name' => 'edit own faq_qa content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own feed content'.
  $permissions['edit own feed content'] = array(
    'name' => 'edit own feed content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own feed_item content'.
  $permissions['edit own feed_item content'] = array(
    'name' => 'edit own feed_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_alfresco_document'.
  $permissions['edit own field_alfresco_document'] = array(
    'name' => 'edit own field_alfresco_document',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_birthday'.
  $permissions['edit own field_birthday'] = array(
    'name' => 'edit own field_birthday',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_department'.
  $permissions['edit own field_department'] = array(
    'name' => 'edit own field_department',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_desk_id'.
  $permissions['edit own field_desk_id'] = array(
    'name' => 'edit own field_desk_id',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_email'.
  $permissions['edit own field_email'] = array(
    'name' => 'edit own field_email',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_first_name'.
  $permissions['edit own field_first_name'] = array(
    'name' => 'edit own field_first_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_image_data'.
  $permissions['edit own field_image_data'] = array(
    'name' => 'edit own field_image_data',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_last_name'.
  $permissions['edit own field_last_name'] = array(
    'name' => 'edit own field_last_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_mobile_number'.
  $permissions['edit own field_mobile_number'] = array(
    'name' => 'edit own field_mobile_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organizational_unit'.
  $permissions['edit own field_organizational_unit'] = array(
    'name' => 'edit own field_organizational_unit',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_phone_number'.
  $permissions['edit own field_phone_number'] = array(
    'name' => 'edit own field_phone_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_phonebook_contact'.
  $permissions['edit own field_phonebook_contact'] = array(
    'name' => 'edit own field_phonebook_contact',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_phonebook_contact_id'.
  $permissions['edit own field_phonebook_contact_id'] = array(
    'name' => 'edit own field_phonebook_contact_id',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_phonebook_image'.
  $permissions['edit own field_phonebook_image'] = array(
    'name' => 'edit own field_phonebook_image',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_position'.
  $permissions['edit own field_position'] = array(
    'name' => 'edit own field_position',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_related_agreements'.
  $permissions['edit own field_related_agreements'] = array(
    'name' => 'edit own field_related_agreements',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_related_article_content'.
  $permissions['edit own field_related_article_content'] = array(
    'name' => 'edit own field_related_article_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_related_content'.
  $permissions['edit own field_related_content'] = array(
    'name' => 'edit own field_related_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_related_faq'.
  $permissions['edit own field_related_faq'] = array(
    'name' => 'edit own field_related_faq',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_room_number'.
  $permissions['edit own field_room_number'] = array(
    'name' => 'edit own field_room_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_show_agreements_list'.
  $permissions['edit own field_show_agreements_list'] = array(
    'name' => 'edit own field_show_agreements_list',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_show_faq_list'.
  $permissions['edit own field_show_faq_list'] = array(
    'name' => 'edit own field_show_faq_list',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_table'.
  $permissions['edit own field_table'] = array(
    'name' => 'edit own field_table',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_user'.
  $permissions['edit own field_user'] = array(
    'name' => 'edit own field_user',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_video_data'.
  $permissions['edit own field_video_data'] = array(
    'name' => 'edit own field_video_data',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_webforms'.
  $permissions['edit own field_webforms'] = array(
    'name' => 'edit own field_webforms',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_work_assignments'.
  $permissions['edit own field_work_assignments'] = array(
    'name' => 'edit own field_work_assignments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own front_page content'.
  $permissions['edit own front_page content'] = array(
    'name' => 'edit own front_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own html_block content'.
  $permissions['edit own html_block content'] = array(
    'name' => 'edit own html_block content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own link_list content'.
  $permissions['edit own link_list content'] = array(
    'name' => 'edit own link_list content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own phonebook content'.
  $permissions['edit own phonebook content'] = array(
    'name' => 'edit own phonebook content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'User' => 'User',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own short_event content'.
  $permissions['edit own short_event content'] = array(
    'name' => 'edit own short_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'User' => 'User',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own short_news content'.
  $permissions['edit own short_news content'] = array(
    'name' => 'edit own short_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
      'User' => 'User',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tabbed content'.
  $permissions['edit own tabbed content'] = array(
    'name' => 'edit own tabbed content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own topic_frontpage content'.
  $permissions['edit own topic_frontpage content'] = array(
    'name' => 'edit own topic_frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own unit content'.
  $permissions['edit own unit content'] = array(
    'name' => 'edit own unit content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own warning content'.
  $permissions['edit own warning content'] = array(
    'name' => 'edit own warning content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in feed_category'.
  $permissions['edit terms in feed_category'] = array(
    'name' => 'edit terms in feed_category',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media_folders'.
  $permissions['edit terms in media_folders'] = array(
    'name' => 'edit terms in media_folders',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organisational_unit'.
  $permissions['edit terms in organisational_unit'] = array(
    'name' => 'edit terms in organisational_unit',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in topics'.
  $permissions['edit terms in topics'] = array(
    'name' => 'edit terms in topics',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'exclude nodes from apache solr'.
  $permissions['exclude nodes from apache solr'] = array(
    'name' => 'exclude nodes from apache solr',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'apachesolr_exclude_node',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'export tablefield'.
  $permissions['export tablefield'] = array(
    'name' => 'export tablefield',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'flag bookmarks'.
  $permissions['flag bookmarks'] = array(
    'name' => 'flag bookmarks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag favorite_colleagues'.
  $permissions['flag favorite_colleagues'] = array(
    'name' => 'flag favorite_colleagues',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'grant deletable node permissions'.
  $permissions['grant deletable node permissions'] = array(
    'name' => 'grant deletable node permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'grant editable node permissions'.
  $permissions['grant editable node permissions'] = array(
    'name' => 'grant editable node permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'grant node permissions'.
  $permissions['grant node permissions'] = array(
    'name' => 'grant node permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'grant own node permissions'.
  $permissions['grant own node permissions'] = array(
    'name' => 'grant own node permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'import csv_to_taxonomy_import feeds'.
  $permissions['import csv_to_taxonomy_import feeds'] = array(
    'name' => 'import csv_to_taxonomy_import feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import feed feeds'.
  $permissions['import feed feeds'] = array(
    'name' => 'import feed feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import ldap_data_to_phonebook feeds'.
  $permissions['import ldap_data_to_phonebook feeds'] = array(
    'name' => 'import ldap_data_to_phonebook feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import ldap_data_to_user_fields feeds'.
  $permissions['import ldap_data_to_user_fields feeds'] = array(
    'name' => 'import ldap_data_to_user_fields feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import ldap_to_department_taxonomy feeds'.
  $permissions['import ldap_to_department_taxonomy feeds'] = array(
    'name' => 'import ldap_to_department_taxonomy feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import roskilde_phonebook_migration feeds'.
  $permissions['import roskilde_phonebook_migration feeds'] = array(
    'name' => 'import roskilde_phonebook_migration feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import test feeds'.
  $permissions['import test feeds'] = array(
    'name' => 'import test feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'moderate content from approved to draft'.
  $permissions['moderate content from approved to draft'] = array(
    'name' => 'moderate content from approved to draft',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from approved to published'.
  $permissions['moderate content from approved to published'] = array(
    'name' => 'moderate content from approved to published',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to published'.
  $permissions['moderate content from draft to published'] = array(
    'name' => 'moderate content from draft to published',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to approved'.
  $permissions['moderate content from needs_review to approved'] = array(
    'name' => 'moderate content from needs_review to approved',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to published'.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to draft'.
  $permissions['moderate content from published to draft'] = array(
    'name' => 'moderate content from published to draft',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to needs_review'.
  $permissions['moderate content from published to needs_review'] = array(
    'name' => 'moderate content from published to needs_review',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'php redirect rh_node'.
  $permissions['php redirect rh_node'] = array(
    'name' => 'php redirect rh_node',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rebuild tablefield'.
  $permissions['rebuild tablefield'] = array(
    'name' => 'rebuild tablefield',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'receive email advuser'.
  $permissions['receive email advuser'] = array(
    'name' => 'receive email advuser',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'advuser',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send email advuser'.
  $permissions['send email advuser'] = array(
    'name' => 'send email advuser',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'advuser',
  );

  // Exported permission: 'show format selection for cer'.
  $permissions['show format selection for cer'] = array(
    'name' => 'show format selection for cer',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for comment'.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for field_collection_item'.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for fieldable_panels_pane'.
  $permissions['show format selection for fieldable_panels_pane'] = array(
    'name' => 'show format selection for fieldable_panels_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for flagging'.
  $permissions['show format selection for flagging'] = array(
    'name' => 'show format selection for flagging',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'subscribe to all content types'.
  $permissions['subscribe to all content types'] = array(
    'name' => 'subscribe to all content types',
    'roles' => array(),
    'module' => 'subscriptions',
  );

  // Exported permission: 'subscribe to content'.
  $permissions['subscribe to content'] = array(
    'name' => 'subscribe to content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: 'subscribe to content types'.
  $permissions['subscribe to content types'] = array(
    'name' => 'subscribe to content types',
    'roles' => array(),
    'module' => 'subscriptions',
  );

  // Exported permission: 'subscribe to taxonomy terms'.
  $permissions['subscribe to taxonomy terms'] = array(
    'name' => 'subscribe to taxonomy terms',
    'roles' => array(),
    'module' => 'subscriptions',
  );

  // Exported permission: 'suspend own subscriptions'.
  $permissions['suspend own subscriptions'] = array(
    'name' => 'suspend own subscriptions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'tamper csv_to_taxonomy_import'.
  $permissions['tamper csv_to_taxonomy_import'] = array(
    'name' => 'tamper csv_to_taxonomy_import',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper feed'.
  $permissions['tamper feed'] = array(
    'name' => 'tamper feed',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ldap_data_to_phonebook'.
  $permissions['tamper ldap_data_to_phonebook'] = array(
    'name' => 'tamper ldap_data_to_phonebook',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ldap_data_to_user_fields'.
  $permissions['tamper ldap_data_to_user_fields'] = array(
    'name' => 'tamper ldap_data_to_user_fields',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ldap_to_department_taxonomy'.
  $permissions['tamper ldap_to_department_taxonomy'] = array(
    'name' => 'tamper ldap_to_department_taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper roskilde_phonebook_migration'.
  $permissions['tamper roskilde_phonebook_migration'] = array(
    'name' => 'tamper roskilde_phonebook_migration',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper test'.
  $permissions['tamper test'] = array(
    'name' => 'tamper test',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unflag bookmarks'.
  $permissions['unflag bookmarks'] = array(
    'name' => 'unflag bookmarks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag favorite_colleagues'.
  $permissions['unflag favorite_colleagues'] = array(
    'name' => 'unflag favorite_colleagues',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unlock csv_to_taxonomy_import feeds'.
  $permissions['unlock csv_to_taxonomy_import feeds'] = array(
    'name' => 'unlock csv_to_taxonomy_import feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock feed feeds'.
  $permissions['unlock feed feeds'] = array(
    'name' => 'unlock feed feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ldap_data_to_phonebook feeds'.
  $permissions['unlock ldap_data_to_phonebook feeds'] = array(
    'name' => 'unlock ldap_data_to_phonebook feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ldap_data_to_user_fields feeds'.
  $permissions['unlock ldap_data_to_user_fields feeds'] = array(
    'name' => 'unlock ldap_data_to_user_fields feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ldap_to_department_taxonomy feeds'.
  $permissions['unlock ldap_to_department_taxonomy feeds'] = array(
    'name' => 'unlock ldap_to_department_taxonomy feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock roskilde_phonebook_migration feeds'.
  $permissions['unlock roskilde_phonebook_migration feeds'] = array(
    'name' => 'unlock roskilde_phonebook_migration feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock test feeds'.
  $permissions['unlock test feeds'] = array(
    'name' => 'unlock test feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
      'User' => 'User',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
      'User' => 'User',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view field_alfresco_document'.
  $permissions['view field_alfresco_document'] = array(
    'name' => 'view field_alfresco_document',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_birthday'.
  $permissions['view field_birthday'] = array(
    'name' => 'view field_birthday',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_department'.
  $permissions['view field_department'] = array(
    'name' => 'view field_department',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_desk_id'.
  $permissions['view field_desk_id'] = array(
    'name' => 'view field_desk_id',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_email'.
  $permissions['view field_email'] = array(
    'name' => 'view field_email',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_first_name'.
  $permissions['view field_first_name'] = array(
    'name' => 'view field_first_name',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_image_data'.
  $permissions['view field_image_data'] = array(
    'name' => 'view field_image_data',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_last_name'.
  $permissions['view field_last_name'] = array(
    'name' => 'view field_last_name',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_mobile_number'.
  $permissions['view field_mobile_number'] = array(
    'name' => 'view field_mobile_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organizational_unit'.
  $permissions['view field_organizational_unit'] = array(
    'name' => 'view field_organizational_unit',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_phone_number'.
  $permissions['view field_phone_number'] = array(
    'name' => 'view field_phone_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_phonebook_contact'.
  $permissions['view field_phonebook_contact'] = array(
    'name' => 'view field_phonebook_contact',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_phonebook_contact_id'.
  $permissions['view field_phonebook_contact_id'] = array(
    'name' => 'view field_phonebook_contact_id',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_phonebook_image'.
  $permissions['view field_phonebook_image'] = array(
    'name' => 'view field_phonebook_image',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_position'.
  $permissions['view field_position'] = array(
    'name' => 'view field_position',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_related_agreements'.
  $permissions['view field_related_agreements'] = array(
    'name' => 'view field_related_agreements',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_related_article_content'.
  $permissions['view field_related_article_content'] = array(
    'name' => 'view field_related_article_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_related_content'.
  $permissions['view field_related_content'] = array(
    'name' => 'view field_related_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_related_faq'.
  $permissions['view field_related_faq'] = array(
    'name' => 'view field_related_faq',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_room_number'.
  $permissions['view field_room_number'] = array(
    'name' => 'view field_room_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_show_agreements_list'.
  $permissions['view field_show_agreements_list'] = array(
    'name' => 'view field_show_agreements_list',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_show_faq_list'.
  $permissions['view field_show_faq_list'] = array(
    'name' => 'view field_show_faq_list',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_table'.
  $permissions['view field_table'] = array(
    'name' => 'view field_table',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_user'.
  $permissions['view field_user'] = array(
    'name' => 'view field_user',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_video_data'.
  $permissions['view field_video_data'] = array(
    'name' => 'view field_video_data',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_webforms'.
  $permissions['view field_webforms'] = array(
    'name' => 'view field_webforms',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_work_assignments'.
  $permissions['view field_work_assignments'] = array(
    'name' => 'view field_work_assignments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
      'User' => 'User',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own field_alfresco_document'.
  $permissions['view own field_alfresco_document'] = array(
    'name' => 'view own field_alfresco_document',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
      'User' => 'User',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_birthday'.
  $permissions['view own field_birthday'] = array(
    'name' => 'view own field_birthday',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_department'.
  $permissions['view own field_department'] = array(
    'name' => 'view own field_department',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_desk_id'.
  $permissions['view own field_desk_id'] = array(
    'name' => 'view own field_desk_id',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_email'.
  $permissions['view own field_email'] = array(
    'name' => 'view own field_email',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_first_name'.
  $permissions['view own field_first_name'] = array(
    'name' => 'view own field_first_name',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_image_data'.
  $permissions['view own field_image_data'] = array(
    'name' => 'view own field_image_data',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_last_name'.
  $permissions['view own field_last_name'] = array(
    'name' => 'view own field_last_name',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_mobile_number'.
  $permissions['view own field_mobile_number'] = array(
    'name' => 'view own field_mobile_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organizational_unit'.
  $permissions['view own field_organizational_unit'] = array(
    'name' => 'view own field_organizational_unit',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_phone_number'.
  $permissions['view own field_phone_number'] = array(
    'name' => 'view own field_phone_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_phonebook_contact'.
  $permissions['view own field_phonebook_contact'] = array(
    'name' => 'view own field_phonebook_contact',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_phonebook_contact_id'.
  $permissions['view own field_phonebook_contact_id'] = array(
    'name' => 'view own field_phonebook_contact_id',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_phonebook_image'.
  $permissions['view own field_phonebook_image'] = array(
    'name' => 'view own field_phonebook_image',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_position'.
  $permissions['view own field_position'] = array(
    'name' => 'view own field_position',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_related_agreements'.
  $permissions['view own field_related_agreements'] = array(
    'name' => 'view own field_related_agreements',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_related_article_content'.
  $permissions['view own field_related_article_content'] = array(
    'name' => 'view own field_related_article_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_related_content'.
  $permissions['view own field_related_content'] = array(
    'name' => 'view own field_related_content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_related_faq'.
  $permissions['view own field_related_faq'] = array(
    'name' => 'view own field_related_faq',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_room_number'.
  $permissions['view own field_room_number'] = array(
    'name' => 'view own field_room_number',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_show_agreements_list'.
  $permissions['view own field_show_agreements_list'] = array(
    'name' => 'view own field_show_agreements_list',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_show_faq_list'.
  $permissions['view own field_show_faq_list'] = array(
    'name' => 'view own field_show_faq_list',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_table'.
  $permissions['view own field_table'] = array(
    'name' => 'view own field_table',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_user'.
  $permissions['view own field_user'] = array(
    'name' => 'view own field_user',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_video_data'.
  $permissions['view own field_video_data'] = array(
    'name' => 'view own field_video_data',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_webforms'.
  $permissions['view own field_webforms'] = array(
    'name' => 'view own field_webforms',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Calendar editor' => 'Calendar editor',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
      'Phonebook editor' => 'Phonebook editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_work_assignments'.
  $permissions['view own field_work_assignments'] = array(
    'name' => 'view own field_work_assignments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'User' => 'User',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content supplier' => 'Content supplier',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Intranet editor' => 'Intranet editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
