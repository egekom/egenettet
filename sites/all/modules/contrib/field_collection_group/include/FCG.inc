<?php
/**
 * @file
 * Encapsulates field formatter logic for Field Collection Group module.
 */

abstract class FCG {
  /**
   * Reterns the FCG formatters classes that are defined in this module.
   */
  static public function formatters() {
    return array(
      'CollectionFormatterHorizontal',
      'CollectionFormatterVertical',
      'CollectionFormatterAccordion',
      'CollectionFormatterFieldset',
    );
  }

  /**
   * Load a single FCG fotmatter class.
   */
  static public function formatterLoad($formatter_name) {
    if (class_exists($formatter_name)) {
      if (is_subclass_of($formatter_name, 'CollectionFormatter')) {
        return new $formatter_name();
      }
      else {
        watchdog('field_collection_group', 'Formatter not valid: %class', array('%class' => $formatter_name), WATCHDOG_WARNING);
      }
    }
    else {
      watchdog('field_collection_group', 'Formatter not found with class %class', array('%class' => $formatter_name), WATCHDOG_WARNING);
    }
  }

  /**
   * Returns the formatter info for all FCG formatter classes.
   */
  static public function formatterInfo() {
    $info = array();
    $formatters = module_invoke_all('collection_group_formatters');
    drupal_alter('collection_group_formatters', $formatters);

    foreach ($formatters as $formatter_name) {
      if ($formatter = FCG::formatterLoad($formatter_name)) {
        $info[$formatter_name] = $formatter->info();
      }
    }

    return $info;
  }

  /**
   * Loads the formatter and returns the settings form.
   */
  static public function formatterSettingsForm($field, $instance, $view_mode) {
    $display = $instance['display'][$view_mode];
    $settings = $display['settings'];

    if ($formatter = FCG::formatterLoad($display['type'])) {
      return $formatter->settingsForm($field, $settings);
    }
  }

  /**
   * Loads the formatter and returns the settings summary.
   */
  static public function formatterSettingsSummary($field, $instance, $view_mode) {
    $display = $instance['display'][$view_mode];
    $settings = $display['settings'];

    if ($formatter = FCG::formatterLoad($display['type'])) {
      $summary = $formatter->settingsSummary($settings);
      return implode('<br />', $summary);
    }
  }

  /**
   * Loads the formatter and returns the view.
   */
  static public function formatterView($items, $display) {
    $settings = $display['settings'];

    if ($formatter = FCG::formatterLoad($display['type'])) {
      return array(
        0 => array(
          '#pre_render' => array('field_collection_group_prerender'),
          '#display_settings' => $settings,
          '#group_class' => $formatter->groupClass(),
          'collections' => $formatter->view($items, $settings),
        ),
      );
    }
  }

  /**
   * Prerender that invokes the grouping functionality of the collection.
   */
  static public function prerender($element) {
    $settings = $element['#display_settings'];
    $group_class = $element['#group_class'];
    $group_instance = new $group_class($settings);
    $element['collections'] = $group_instance->group($element['collections']);
    return $element;
  }
}
