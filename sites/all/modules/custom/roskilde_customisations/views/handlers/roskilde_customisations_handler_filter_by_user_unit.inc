<?php

/**
 * @file
 * Definition of roskilde_customisations_handler_filter_by_user_unit.
 */

class roskilde_customisations_handler_filter_by_user_unit extends views_handler_filter {

  public function query() {
    $tids = array();
    $page = homebox_get_page('user_dashboard');
    if ($page) {
      $user_page = _homebox_get_user_settings($page);
      if (!empty($user_page['roskilde_customisations_roskilde_my_units']['unit_tids'])) {
        $tids = array_filter($user_page['roskilde_customisations_roskilde_my_units']['unit_tids']);
      }
    }
    $phonebook = roskilde_phonebook_get_by_userid();
    if($phonebook && !empty($phonebook->field_unit)) {
        $tids += array_map(function($v){return (int) $v['tid'];}, $phonebook->field_unit[LANGUAGE_NONE]);
    }
    $base_table = 'node';
    $table = 'field_data_field_unit';
    $alias = NEWS_VIEW_TABLE_ALIAS_CENTER;

    $join = new views_join();
    $join->type = 'INNER';
    $join->table = $table;
    $join->field = 'entity_id';
    $join->left_table = $base_table;
    $join->left_field = 'nid';
    $join->extra = $alias . ".entity_type = 'node' AND " . $alias . ".deleted = '0'";

    $this->query->add_relationship($alias, $join, $base_table);
    $this->query->add_where(1, $alias . '.field_unit_tid', $tids, 'IN');
    $this->query->set_distinct();
  }
}
