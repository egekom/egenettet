<?php

/**
 * @file
 * roskilde_panels_renderer_ipe_extra class.
 */

/**
 * Renderer class for all In-Place Editor (IPE) behavior.
 */
class roskilde_panels_renderer_ipe_extra extends panels_renderer_ipe {

  /**
   * Override to refresh page after save.
   *
   * @see parent:ajax_save_form
   */
  public function ajax_save_form($break = NULL) {
    if ($this->ipe_test_lock('save-form', $break)) {
      return;
    }

    // Reset the $_POST['ajax_html_ids'] values to preserve
    // proper IDs on form elements when they are rebuilt
    // by the Panels IPE without refreshing the page.
    $_POST['ajax_html_ids'] = array();

    $form_state = array(
      'renderer' => $this,
      'display' => &$this->display,
      'content_types' => $this->cache->content_types,
      'rerender' => FALSE,
      'no_redirect' => TRUE,
      // Panels needs this to make sure that the layout gets callbacks.
      'layout' => $this->plugins['layout'],
    );

    $output = drupal_build_form('panels_ipe_edit_control_form', $form_state);
    if (empty($form_state['executed'])) {
      // At this point, we want to save the cache to ensure that we have a lock.
      $this->cache->ipe_locked = TRUE;
      panels_edit_cache_set($this->cache);
      $this->commands[] = array(
        'command' => 'initIPE',
        'key' => $this->clean_key,
        'data' => drupal_render($output),
        'lockPath' => url($this->get_url('unlock_ipe')),
      );
      return;
    }

    // Check to see if we have a lock that was broken. If so we need to
    // inform the user and abort.
    if (empty($this->cache->ipe_locked)) {
      $this->commands[] = ajax_command_alert(t('A lock you had has been externally broken, and all your changes have been reverted.'));
      $this->commands[] = array(
        'command' => 'cancelIPE',
        'key' => $this->clean_key,
      );
      return;
    }

    // Otherwise it was submitted.
    if (!empty($form_state['clicked_button']['#save-display'])) {
      // Saved. Save the cache.
      panels_edit_cache_save($this->cache);
      // Clear the cache and make sure the current display reflects the most
      // recent data that was saved.
      panels_edit_cache_clear($this->cache);
      $this->cache = panels_edit_cache_get($this->display->cache_key);
      $this->display = $this->cache->display;
      // A rerender should fix IDs on added panes as well as
      // ensure style changes are rendered.
      $this->meta_location = 'inline';
      $this->commands[] = ajax_command_replace("#panels-ipe-display-{$this->clean_key}", panels_render_display($this->display, $this));
      // Refresh the page.
      $this->commands[] = ctools_ajax_command_reload();
    }
    else {
      // Cancelled. Clear the cache.
      panels_edit_cache_clear($this->cache);
    }

    $this->commands[] = array(
      'command' => 'endIPE',
      'key' => $this->clean_key,
    );
  }

}
