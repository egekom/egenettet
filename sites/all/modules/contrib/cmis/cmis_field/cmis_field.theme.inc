<?php

function theme_cmis_field_browser($variables) {
  $breadcrumbs = theme('cmis_field_browse_breadcrumbs', array('context' => $variables['breadcrumbs'], 'ajax' => TRUE));
  $children = theme('cmis_field_browse_children', array('context' => $variables['children']));

  return theme('container', array(
    'element' => array(
      '#attributes' => $variables['#attributes'],
      '#children' => $breadcrumbs . $children,
    ),
  ));
}

function theme_cmis_field_browse_breadcrumbs($variables) {
  $links = array();

  foreach ($variables['context'] as $child) {
    $links[] = l($child['title'], $child['url'], array(
      'attributes' => array(
        'class' => @$variables['ajax'] ? 'use-ajax' : ''
        )
      )
    );
  }

  return theme('breadcrumb', array('breadcrumb' => $links));
}

/**
 * Custom theme for cmis_browser_browse action
 *
 * @param $children
 */

function theme_cmis_field_browse_children($variables) {
  $header = array(t('name'), t('type'), t('size'), t('author'), t('last modified'), t('actions'), '');
  $rows = array();
  $folder_img = theme('image', array('path' => drupal_get_path('module', 'cmis_browser') .'/images/space.gif'));
  $document_img = theme('image', array('path' => drupal_get_path('module', 'cmis_browser') .'/images/file.png'));

  foreach ($variables['context'] as $child) {
    $author = $child['author'];
    $updated = format_date($child['updated']->getTimestamp());
    $actions = array();

    $use_link = '';
    switch ($child['type']) {
      case 'cmis:folder':
        $icon = $folder_img;

        $link = l($child['title'], $child['browse-url'], array(
          'attributes' => array(
            'class' => array(
              'use-ajax',
            ),
          ),)
        );

        $use_link = l(t('Use'), $child['browse-url'], array(
          'query' => array(
            'use' => 1
          ),
          'attributes' => array(
            'class' => array(
              'use-ajax',
            ),
          ),)
        );

        $mimetype = 'Space';
        $size = '';
        break;
      default:
        $icon = $document_img;
        $link = l($child['title'], $child['browse-url'], array(
          'attributes' => array(
            'class' => array(
              'use-ajax',
            ),
          ),)
        );

        $mimetype = $child['mimetype'];
        $size = format_size($child['size']);
    }

    $rows[] = array($icon .' '. $link, $mimetype, $size, $author, $updated, $use_link, theme('item_list', array('items' => $actions, 'title' => NULL, 'type' => 'ul', 'attributes' => array('class'=>'actions'))));
  }

  return theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('class' => array('cmis_field_browse_children'))));
}