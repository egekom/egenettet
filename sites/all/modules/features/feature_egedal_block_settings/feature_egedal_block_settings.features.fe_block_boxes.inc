<?php
/**
 * @file
 * feature_egedal_block_settings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function feature_egedal_block_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer elements';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_elements';
  $fe_block_boxes->body = '<ul>
	<li><a href="#">Sitemap</a></li>
	<li><a href="#">Retningslinjer</a></li>
</ul>
';

  $export['footer_elements'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Logo Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_logo_block';
  $fe_block_boxes->body = '<p><img alt="Egedal" class="media-image attr__typeof__foaf:Image img__fid__944 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__Egedal attr__field_file_image_title_text[und][0][value]__Egedal logo attr__field_folder[und]__1" src="/sites/all/themes/egedal/footer-logo.png" title="Egedal logo" typeof="foaf:Image" /></p>
';

  $export['footer_logo_block'] = $fe_block_boxes;

  return $export;
}
