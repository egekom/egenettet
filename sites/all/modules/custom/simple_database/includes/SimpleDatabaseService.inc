<?php

/**
 * @file
 * Holds the definition of the configuration management service of the module.
 */

/**
 * SimpleDatabaseService that handles the configuration calls and related
 * custom table DB table management.
 *
 * @author ndobromirov
 */
class SimpleDatabaseService {

  /**
   * Configuration handler method.
   *
   * Used to assign new configuration state to a given bundle. Also manages
   * internal and static caches timely invalidation.
   *
   * @param bool $state
   *   New enabled/disabled (TRUE/FALSE) configuration state.
   * @param string $bundle
   *   Name of the bundle to manage.
   */
  public function changeBundleConfiguration($state, $bundle) {
    try {
      if ((bool) $state) {
        $this->enable($bundle);
      }
      else {
        $this->disable($bundle);
      }
      // Refresh the static cache.
      $this->getBundles(TRUE);
    }
    catch (Exception $e) {
      watchdog_exception('simple_database', $e);
    }
  }

  /**
   * Enables simple_database module functionality for a given bundle.
   *
   * @param string $bundle
   *   Name of the bundle.
   */
  public function enable($bundle) {
    if (!$this->isEnabled($bundle, TRUE)) {
      db_insert('simple_database')
        ->fields(array('bundle'))
        ->values(array($bundle))
        ->execute();
      variable_set("simple_database_node_$bundle", 1);
    }
  }

  /**
   * Disables the simple_database functionality for a given bundle.
   *
   * @param string $bundle
   *   Name of the bundle
   */
  public function disable($bundle) {
    if ($this->isEnabled($bundle, TRUE)) {
      db_delete('simple_database')
        ->condition('bundle', $bundle)
        ->execute();
      variable_set("simple_database_node_$bundle", 0);
    }
  }

  /**
   * Internal, high-level cleanup utility method.
   *
   * Regenerates the global module's table data, acording to the configuration
   * variables for all bundles in the system. Refreshes the static cache for
   * enabled bundles.
   *
   * @see SimpleDatabaseService::getBundles()
   */
  public function refreshTableData() {
    $all_bundles = array_keys(node_type_get_types());
    $enabled_bundles = $this->getBundles(TRUE);

    $transaction = db_transaction();
    try {
      // Delete disabled bundles from DB.
      $disabled_bundles = array_diff($all_bundles, $enabled_bundles);
      if (!empty($disabled_bundles)) {
        db_delete('simple_database')
          ->condition('bundle', $disabled_bundles, 'IN')
          ->execute();
      }

      // Get the enabled ones currently available in DB.
      $listed_bundles = db_select('simple_database', 'sd')
        ->fields('sd', array('bundle'))
        ->execute()
        ->fetchCol();

      // Add the missing bundles to the simple_database table.
      $missing_bundles = array_diff($enabled_bundles, $listed_bundles);
      if (!empty($missing_bundles)) {
        $insert = db_insert('simple_database')->fields(array('bundle'));
        foreach ($missing_bundles as $type_name) {
          $insert->values(array($type_name));
        }
        $insert->execute();
      }
    }
    catch (Exception $e) {
      watchdog_exception('simple_database', $e);
      $transaction->rollback();
    }
  }

  /**
   * Provides a list of bundles having simple_database functionality enabled.
   *
   * @param bool $ignore_cache
   *   Whether to utilize the static cache or regenerate it.
   *
   * @return array
   *   List of bundle names.
   */
  public function getBundles($ignore_cache = FALSE) {
    $bundles = &drupal_static(__METHOD__);
    if (!$ignore_cache && isset($bundles)) {
      return $bundles;
    }

    // Collect a list of enabled content types based on variables convention.
    $bundles = array();
    $all_types = array_keys(node_type_get_types());
    foreach ($all_types as $type) {
      $var_name = "simple_database_node_$type";
      if (variable_get($var_name, 0)) {
        $bundles[] = $type;
      }
    }

    return $bundles;
  }

  /**
   * Checks the configuration, for the bundle.
   *
   * @see SimpleDatabaseService::getBundles()
   *
   * @param string $bundle
   *   Bundle's machine name.
   * @param bool $ignore_cache
   *   Whether to utilize the static cache or regenerate it.
   *
   * @return bool
   *   TRUE - when the bundle uses simple_database, FALSE otherwise.
   */
  public function isEnabled($bundle, $ignore_cache = FALSE) {
    return array_key_exists($bundle, array_flip($this->getBundles($ignore_cache)));
  }

  /**
   * Provides a named list of enabled bundles.
   *
   * @param bool $ignore_cache
   *   Whether to utilize the static cache or regenerate it.
   *
   * @return array
   *   Associative array holding bundle_machine_name -> bundle_lable pairs.
   */
  public function getNamedBundles($ignore_cache = FALSE) {
    $result = array();
    $node_types = node_type_get_types();
    $enabled = $this->getBundles($ignore_cache);
    foreach ($enabled as $name) {
      $result[$name] = $node_types[$name]->name;
    }
    asort($result);
    return $result;
  }

}
