<?php

/**
 * @file
 * Date query type plugin for the Apache Solr adapter.
 */

/**
 * Plugin for "from_to_date" query types.
 */
class ApacheSolrFacetapiDateExtend extends ApacheSolrFacetapiDate implements FacetapiQueryTypeInterface {

  /**
   * Overrides ApacheSolrFacetapiDate::getType().
   *
   * Returns the query type associated with the plugin.
   *
   * @return string
   *   The query type.
   */
  static public function getType() {
    return 'from_to_date';
  }

  /**
   * Overrides FacetapiQueryTypeDate::extract().
   *
   * Adds the "start" and "end" values for the date range.
   */
  public function extract(array $item) {
    $return = parent::extract($item);
    if (empty($return)) {
      if (preg_match(FACETAPI_FROMTO_DATERANGE_REGEX, $item['value'], $matches)) {
        $return['start'] = $return['end'] = '';
      }
    }

    return $return;
  }
}
