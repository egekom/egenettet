<?php
/**
 * @file
 * features_menu_icons.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function features_menu_icons_image_default_styles() {
  $styles = array();

  // Exported image style: menu_icon_custom.
  $styles['menu_icon_custom'] = array(
    'name' => 'menu_icon_custom',
    'label' => 'menu_icon_custom',
    'effects' => array(
      13 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 65,
          'height' => 52,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
