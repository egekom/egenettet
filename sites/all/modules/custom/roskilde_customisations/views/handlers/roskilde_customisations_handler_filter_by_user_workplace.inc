<?php

/**
 * @file
 * Definition of roskilde_customisations_handler_filter_by_user_workplace.
 */

class roskilde_customisations_handler_filter_by_user_workplace extends views_handler_filter {

  public function query() {
    $phonebook = roskilde_phonebook_get_by_userid();
    if ($phonebook && !empty($phonebook->field_work_place)) {
      $tid = $phonebook->field_work_place[LANGUAGE_NONE][0]['tid'];
      $base_table = 'node';
      $table = 'field_data_field_workplace_reference';
      $alias = 'fd_field_work_place';

      $join = new views_join();
      $join->type = 'INNER';
      $join->table = $table;
      $join->field = 'entity_id';
      $join->left_table = $base_table;
      $join->left_field = 'nid';
      $join->extra = $alias . ".entity_type = 'node' AND " . $alias . ".deleted = '0'";

      $this->query->add_relationship($alias, $join, $base_table);
      $this->query->add_where(1, $alias . '.field_workplace_reference_tid', $tid , '=');
    }
    else {
      // Force an empty result.
      $this->query->add_where(1, $base_table . '.nid', FALSE, '=');
    }
  }
}
