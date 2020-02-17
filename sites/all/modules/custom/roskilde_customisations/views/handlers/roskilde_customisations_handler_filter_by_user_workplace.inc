<?php

/**
 * @file
 * Definition of roskilde_customisations_handler_filter_by_user_workplace.
 */

class roskilde_customisations_handler_filter_by_user_workplace extends views_handler_filter {

  public function query()
  {
    $phonebook = roskilde_phonebook_get_by_userid();
    $base_table = 'node';
    if ($phonebook && !empty($phonebook->field_work_place)) {
      $tid = $phonebook->field_work_place[LANGUAGE_NONE][0]['tid'];
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
      $this->query->add_where(1, $alias . '.field_workplace_reference_tid', $tid, '=');

      return $tid;

    }
  }

  /**
   * Load a terms parent.
   */
  function roskilde_customisations_taxonomy_get_parents($tid) {
    $parents = &drupal_static('roskilde_customisations_taxonomy_get_parents', array());

    if ($tid && !isset($parents[$tid])) {
      $query = db_select('taxonomy_term_data', 't');
      $query->join('taxonomy_term_hierarchy', 'h', 'h.parent = t.tid');
      $query->addField('t', 'tid');
      $query->condition('h.tid', $tid);
      $query->addTag('term_access');
      $query->orderBy('t.weight');
      $query->orderBy('t.name');
      // $tids = $query->execute()->fetchCol();
      // $parents[$tid] = taxonomy_term_load_multiple($tids);
      $tids = $query->execute()->fetchAll();
      $parents[$tid] =  $tids;
    }

    return isset($parents[$tid]) ? $parents[$tid] : array();
  }

  /**
   * Load all parents for a term.
   */

    function roskilde_customisations_taxonomy_get_parents_all($tid)
    {
      $cache = &drupal_static('roskilde_customisations_taxonomy_get_parents_all', array());

      if (isset($cache[$tid])) {
        return $cache[$tid];
      }

      $parents = array();
      if ($term = taxonomy_term_load($tid)) {
        $parents[] = $term;
        $n = 0;
        // while ($parent = taxonomy_get_parents($parents[$n]->tid)) {
        while ($parent = 'roskilde_customisations_taxonomy_get_parents'($parents[$n]->tid)) {
          $parents = array_merge($parents, $parent);
          $n++;
        }

        $cache[$tid] = $parents;

        return $parents;
      }
  }
}
