<?php
/**
 * @file
 * Define Linkit class attribute plugin.
 */

$plugin = array(
  'name' => t('Target'),
  'callback' => 'linkit_target_attribute_plugin_target',
);

/**
 * Create a FAPI element.
 *
 * @param array $plugin
 *   This is the plugin definition.
 *
 * @param array $settings
 *   An array of settings for this attribute. This is from the profile settings.
 *
 * @return
 *   An FAPI element.
 *
 * @see LinkitProfile::setAttributes()
 */
function linkit_target_attribute_plugin_target($plugin, $settings = array()) {
  return array(
    '#type' => 'select',
    '#title' => $plugin['name'],
    '#options' =>  array(
      '' => 'None',
      '_blank' => 'New window (_blank)',
      '_self' => 'Same window (_self)',
      '_parent' => 'Parent Frame (_parent)',
      '_top' => 'Top Window (_top)',
    ),
    '#default_value' => '',
    '#weight' => isset($settings['weight']) ? $settings['weight'] : 0,
  );
}