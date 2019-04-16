<?php
/**
 * @file
 * Definition of roskilde_customisations_handler_filter_by_user_department.
 */
class roskilde_customisations_handler_filter_by_user_department extends views_handler_filter {
  public function query() {
    $phonebook = roskilde_phonebook_get_by_userid();
    $base_table = 'node';
    if ($phonebook && !empty($phonebook->field_department)) {
      $tid = $phonebook->field_department[LANGUAGE_NONE][0]['tid'];
      $table = 'field_data_field_department';
      $alias = 'fd_field_department';
      $join = new views_join();
      $join->type = 'INNER';
      $join->table = $table;
      $join->field = 'entity_id';
      $join->left_table = $base_table;
      $join->left_field = 'nid';
      $join->extra = $alias . ".entity_type = 'node' AND " . $alias . ".deleted = '0'";
      $this->query->add_relationship($alias, $join, $base_table);
      $this->query->add_where(1, $alias . '.field_department_tid', $tid , '=');
    }
    else {
      // Force an empty result.
      $this->query->add_where(1, $base_table . '.nid', FALSE, '=');
    }
  }
}
