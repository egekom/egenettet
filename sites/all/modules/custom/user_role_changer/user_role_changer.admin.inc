<?php

/**
 * @file
 * Admin page callbacks for the user_role_changer module.
 */

/**
 * Menu callback for Role change permisssions.
 *
 * @see theme_user_role_changer_permissions()
 * @see user_role_changer_permissions_after_build()
 */
function user_role_changer_permissions() {
  $roles = user_roles();
  $options = array();
  $disabled_options = array();
  // Building grid of checkbox options.
  foreach ($roles as $main_id => $main_role) {
    foreach ($roles as $id => $role) {
      $options[$main_id . '_' . $id] = '';
      if ($main_id == $id) {
        $disabled_options[] = $main_id . '_' . $id;
      }
    }
  }

  $form['role_change_permissions'] = array(
    '#type' => 'checkboxes',
    '#options' => $options,
    '#description' => t('Choose all that apply.'),
    '#default_value' => variable_get('user_role_changer_permissions'),
  );
  $form['role_change_permissions']['#after_build'][] = 'user_role_changer_permissions_after_build';

  $static_var = &drupal_static('user_role_changer_disabled_options');
  $static_var = $disabled_options;

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
    '#submit' => array('user_role_changer_permissions_submit'),
  );

  return $form;

}
/**
 * Disable checkboxes allowing a role to switch to itself.
 */
function user_role_changer_permissions_after_build($element) {
  $disabled = &drupal_static('user_role_changer_disabled_options');
  foreach ($disabled as $disabled_field) {
    $element[$disabled_field]['#attributes'] = array('disabled' => 'disabled');
  }
  return $element;
}
/**
 * Theme the role change permisssions page.
 *
 * Set up a grid of checkboxes to define which roles can switch
 * to which ones
 */
function theme_user_role_changer_permissions($variables) {

  $form = $variables['form'];
  $roles = user_roles();
  $element = $form['role_change_permissions'];
  unset($form['role_change_permissions']);
  $elements = element_children(form_process_checkboxes($element));

  $column_number = count($roles);
  $item_count = count($elements);
  $row = array();
  $rows = array();
  $row_counter = 0;
  $role_ids = array_keys($roles);
  $row[] = "<b>" . $roles[$role_ids[0]] . "</b>";
  for ($i = 0; $i < $item_count; $i++) {
    if ($i % $column_number == 0 && $i != 0) {
      $rows[] = $row;
      $row = array();
      $row_counter++;
      if (isset($role_ids[$row_counter])) {
        $row[] = "<b>" . $roles[$role_ids[$row_counter]] . "</b>";
      }
    }
    $row[] = drupal_render($element[$elements[$i]]);

  }
  $rows[] = $row;

  $variable = array(
    'header' => array_merge(array(" "), array_values($roles)),
    'rows' => $rows,
    'attributes' => array('class' => 'checkbox_columns'),
    'caption' => NULL,
    'colgroups' => NULL,
    'sticky' => NULL,
    'empty' => NULL,
  );

  $output = theme_table($variable);
  $output .= drupal_render_children($form);

  return $output;
}

/**
 * Role changer permissions form submit handler.
 *
 * @see user_role_changer_permissions
 */
function user_role_changer_permissions_submit($form, &$form_state) {
  variable_set('user_role_changer_permissions', $form_state['values']['role_change_permissions']);
  drupal_set_message(t('The changes have been saved.'));

}
