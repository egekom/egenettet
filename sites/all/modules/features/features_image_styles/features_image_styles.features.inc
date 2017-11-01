<?php
/**
 * @file
 * features_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function features_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: author_image_36x36.
  $styles['author_image_36x36'] = array(
    'name' => 'author_image_36x36',
    'label' => 'Author image 36x36',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 36,
          'height' => 36,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_desaturate.
  $styles['banner_desaturate'] = array(
    'name' => 'banner_desaturate',
    'label' => 'Banner Desaturate 632',
    'effects' => array(
      7 => array(
        'label' => 'Desaturate',
        'help' => 'Desaturate converts an image to grayscale.',
        'effect callback' => 'image_desaturate_effect',
        'dimensions passthrough' => TRUE,
        'module' => 'image',
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 2,
      ),
      8 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 632,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: contact_image.
  $styles['contact_image'] = array(
    'name' => 'contact_image',
    'label' => 'Contact Image 148x148',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 148,
          'height' => 148,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: contact_image_86x86.
  $styles['contact_image_86x86'] = array(
    'name' => 'contact_image_86x86',
    'label' => 'Contact Image 86x86',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 86,
          'height' => 86,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: contact_image_big.
  $styles['contact_image_big'] = array(
    'name' => 'contact_image_big',
    'label' => 'Contact Image Big 212x212',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 212,
          'height' => 212,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: contact_image_small.
  $styles['contact_image_small'] = array(
    'name' => 'contact_image_small',
    'label' => 'Contact Image Small 143x143',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 143,
          'height' => 143,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: dashboard_user_image.
  $styles['dashboard_user_image'] = array(
    'name' => 'dashboard_user_image',
    'label' => 'Dashboard user image 640x400',
    'effects' => array(
      9 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_event_style.
  $styles['news_event_style'] = array(
    'name' => 'news_event_style',
    'label' => 'News and Event 640x360',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: phonebook_search_image.
  $styles['phonebook_search_image'] = array(
    'name' => 'phonebook_search_image',
    'label' => 'Phonebook Search Image 64x64',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 64,
          'height' => 64,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
