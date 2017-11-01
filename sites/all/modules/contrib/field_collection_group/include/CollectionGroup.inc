<?php
/**
 * @file
 * Main class for a Field collection grouping functionality.
 */

abstract class CollectionGroup {
  protected $valueFormat = NULL;
  protected $wrapperFomat = NULL;
  protected $settings;
  protected $weight;

  /**
   * Default counstructor function for field collection group.
   */
  public function __construct(array $settings = array()) {
    $this->settings = $settings;
  }

  /**
   * Get default configuration for a FCG group.
   */
  protected function baseGroup() {
    $group = new stdClass();
    $group->weight = 0;
    $group->group_name = 'fcg';
    $group->collapsible = TRUE;
    $group->collapsed = TRUE;
    $group->format_settings['instance_settings']['id'] = drupal_html_id('fcg');
    return $group;
  }

  /**
   * Get the value group for a field value.
   */
  protected function valueGroup() {
    $group = $this->baseGroup();
    $this->weight++;
    $group->format_type = $this->valueFormat;
    $group->group_name = "fcg$this->weight";
    $group->weight = $this->weight;
    $group->label = '';
    $group->parent_name = 'fcg';
    return $group;
  }

  /**
   * Get the wrapper group for a field.
   */
  protected function wrapperGroup() {
    $group = $this->baseGroup();
    $group->format_type = $this->wrapperFomat;
    return $group;
  }

  /**
   * Get the wrapper group for a field value.
   */
  public function group($elements) {
    $element = array();
    $this->weight = 0;
    if ($elements) {
      // Temporary fake some properties to suppress errors from
      // field_group_pre_render().
      $element['#view_mode'] = $element['#entity_type'] = $element['#bundle'] = 'fcg';
      if ($this->valueFormat) {
        foreach ($elements as $tab) {
          $group = $this->valueGroup();
          $this->valuePreRender($tab, $group, $element);
          $element['tabs'][] = $tab;
        }
      }
      if ($this->wrapperFomat) {
        $group = $this->wrapperGroup();
        $this->wrapperPreRender($element, $group, $element);
      }
      // Cleanup the fake properties we needed for calling
      // field_group_pre_render().
      unset($element['#view_mode'], $element['#entity_type'], $element['#bundle']);
      $this->addAttached($element['#attached']);
    }
    return $element;
  }

  /**
   * Make sure that the group tab has title.
   */
  protected function ensureTitle(&$tab) {
    $tab += array(
      '#title' => t('Group @number', array('@number' => $this->weight)),
    );
  }

  /**
   * Invoke Field group module to pre-render a group tab.
   */
  protected function valuePreRender(&$tab, stdClass $group, &$element) {
    $this->ensureTitle($tab);
    // This is where field_group module does it's thing.
    field_group_pre_render($tab, $group, $element);
  }

  /**
   * Invoke Field group module to pre-render the group itself.
   */
  protected function wrapperPreRender(&$tab, stdClass $group, &$element) {
    // This is where field_group module does it's thing.
    field_group_pre_render($tab, $group, $element);
  }

  /**
   * Attach some css/js to collection render array.
   */
  protected function addAttached(&$attached) {
    // Do nothing.
  }
}
