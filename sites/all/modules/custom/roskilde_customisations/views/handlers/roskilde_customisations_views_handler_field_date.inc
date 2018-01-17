<?php

/**
 * @file
 * Definition of roskilde_customisations_views_handler_field_date.
 */

class roskilde_customisations_views_handler_field_date extends views_handler_field_date {

  /**
   * Render the field.
   *
   * @param object $values
   *   The values retrieved from the database.
   */
  public function render($values) {
    if ("latest_news" == $this->view->name && "default" == $this->view->plugin_name) {
      if (isset($values->scheduler_publish_on) && !empty($values->scheduler_publish_on)) {
        $values->node_created = $values->scheduler_publish_on;
      }
    }

    return parent::render($values);
  }

}
