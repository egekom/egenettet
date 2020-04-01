<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function egedal_profile_form_install_configure_form_alter(&$form, $form_state) {
    // Pre-populate the site name with the server name.
    $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}

if (!function_exists('media_multi_load')) {
    /**
     * Load callback for %media_multi placeholder in menu paths.
     *
     * This is implemented here, as it is missing in media. Implementation taken
     * from media_bulk_upload module's media_bulk_upload_multi_load function.
     *
     * @param string $fids
     *   Separated by space (e.g., "3 6 12 99"). This often appears as "+" within
     *   URLs (e.g., "3+6+12+99"), but Drupal automatically decodes paths when
     *   intializing $_GET['q'].
     *
     * @return array
     *   An array of corresponding file entities.
     */
    function media_multi_load($fids) {
        return file_load_multiple(explode(' ', $fids));
    }
}
