<?php

/**
 * @file
 * Definition of simple_database_handler_filter_node_type.
 */

/**
 * Filter by simple_database bundle.
 *
 * @ingroup views_filter_handlers
 */
class simple_database_handler_filter_node_type extends views_handler_filter_node_type {

  /**
   * Return the possible options for this filter.
   */
  public function get_value_options() {
    if (!isset($this->value_options)) {
      $this->value_title = t('Simple Database types');
      $this->value_options = simple_database()->getNamedBundles();
    }
  }
}
