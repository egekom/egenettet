<?php
/**
 * @file
 * Main class for a Field collection group formatter.
 */

abstract class CollectionFormatter {
  protected $groupClass = 'CollectionGroup';

  /**
   * Get the group class for this formatter.
   */
  public function groupClass() {
    return $this->groupClass;
  }

  /**
   * Field formatter info.
   */
  public function info() {
    return array(
      'label' => t('Collections grouped somehow'),
      'field types' => array('field_collection'),
      'settings' => array(
        'view_mode' => 'full',
        'heading' => '',
      ),
    );
  }

  /**
   * Field formatter settings form.
   */
  public function settingsForm($field, $settings) {
    $element = array();

    // Heading is used as title or tab text for each collection item.
    $options = array('' => t('None'));
    $fields_info = field_info_instances('field_collection_item', $field['field_name']);
    foreach ($fields_info as $field_info) {
      $options[$field_info['field_name']] = $field_info['label'];
    }
    $element['heading'] = array(
      '#type' => 'select',
      '#title' => t('Legend'),
      '#options' => $options,
      '#default_value' => $settings['heading'],
      '#description' => t('Heading is used as title or tab text for each collection item.'),
    );

    // View mode for the rendered collection item.
    $options = array();
    $entity_type = entity_get_info('field_collection_item');
    foreach ($entity_type['view modes'] as $mode => $info) {
      $options[$mode] = $info['label'];
    }
    $element['view_mode'] = array(
      '#type' => 'select',
      '#title' => t('View mode'),
      '#options' => $options,
      '#default_value' => $settings['view_mode'],
      '#description' => t('Select the view mode.'),
    );

    return $element;
  }

  /**
   * Field formatter settings summary.
   */
  public function settingsSummary($settings) {
    $summary = array();
    $entity_type = entity_get_info('field_collection_item');
    if (!empty($entity_type['view modes'][$settings['view_mode']]['label'])) {
      $summary[] = t('View mode: @mode', array('@mode' => $entity_type['view modes'][$settings['view_mode']]['label']));
    }
    if ($settings['heading']) {
      $summary[] = t('Legend: @field', array('@field' => $settings['heading']));
    }
    return $summary;
  }

  /**
   * Field formatter view.
   */
  public function view($items, $settings) {
    $elements = array();

    foreach ($items as $delta => $item) {
      if ($field_collection = field_collection_field_get_entity($item)) {
        // @TODO - token for Heading
        $elements[$delta]['#collection-id'] = 'todo'; // @TODO - accordion to have expanded item in URL.
        $elements[$delta]['entity'] = $field_collection->view($settings['view_mode']);
        if ($settings['heading']) {
          $display = array('type' => 'text_plain');
          $title = field_view_field('field_collection_item', $field_collection, $settings['heading'], $display);
          if (isset($title[0]['#markup'])) {
            $elements[$delta]['#title'] = $title[0]['#markup'];
          }
        }
      }
    }

    return $elements;
  }
}
