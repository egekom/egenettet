<?php

/**
 * @file
 * Apache Solr search adapter for "from_to_date" query type.
 */

/**
 * Facet API adapter for the Apache Solr Search Integration module.
 */
class ApacheSolrFacetapiAdapterExtend extends ApacheSolrFacetapiAdapter {

  /**
   * Overrides FacetapiAdapter::processFacets().
   *
   * Initializes facet builds, sets the breadcrumb trail.
   *
   * Facets are built via FacetapiFacetProcessor objects. Facets only need to be
   * processed, or built, once regardless of how many realms they are rendered
   * in. The FacetapiAdapter::processed semaphore is set when this method is
   * called ensuring that facets are built only once regardless of how many
   * times this method is called.
   *
   * @todo For clarity, should this method be named buildFacets()?
   */
  public function processFacets() {
    if (!$this->processed) {
      $this->processed = TRUE;

      // Initialize each facet's render array. This render array is a common
      // base for all realms and widgets.
      foreach ($this->getEnabledFacets() as $facet) {
        $processor = new FacetapiFacetProcessorExtend($this->getFacet($facet));
        $this->processors[$facet['name']] = $processor;
        $this->processors[$facet['name']]->process();
      }

      // Set the breadcrumb trail if a search was executed.
      if ($this->searchExecuted()) {
        $this->urlProcessor->setBreadcrumb();
      }
    }
  }
}

class FacetapiFacetProcessorExtend extends FacetapiFacetProcessor {

  /**
   * Overrides FacetapiFacetProcessor::mapValues().
   *
   * Maps the IDs to human readable values via the facet's mapping callback.
   *
   * @param array $build
   *   The initialized render array.
   *
   * @return array
   *   The initialized render array with mapped values. See the return of
   *   FacetapiFacetProcessor::initializeBuild() for the structure of the return
   *   array.
   */
  protected function mapValues(array $build) {
    if ($this->facet['map callback']) {
      // Get available items and active items, invoke the map callback only when
      // there are values to map.
      // NOTE: array_merge() doesn't work here when the values are numeric.
      if ($values = array_unique(array_keys($build + $this->getActiveItems()))) {
        if ('facetapi_map_date' == $this->facet['map callback']) {
          $this->map = _facetapi_fromto_daterange_facetapi_map_date(
            $values,
            $this->facet['map options']
          );
        }
        else {
          $this->map = call_user_func(
            $this->facet['map callback'],
            $values, $this->facet['map options']
          );
        }
        // Normalize all mapped values to a two element array.
        foreach ($this->map as $key => $value) {
          if (!is_array($value)) {
            $this->map[$key] = array();
            $this->map[$key]['#markup'] = $value;
            $this->map[$key]['#html'] = FALSE;
          }
          if (isset($build[$key])) {
            $build[$key]['#markup'] = $this->map[$key]['#markup'];
            $build[$key]['#html'] = !empty($this->map[$key]['#html']);
          }
        }
      }
    }
    return $build;
  }
}
