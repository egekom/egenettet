<?php

/**
 * @file
 * Admin page callbacks for the roskilde_customisations module.
 */

/**
 * Menu callback for Workbench approval settings form.
 */
function _workbench_approval_settings_form() {

  $token_types = array('user', 'node');
  $form['workbench_skip_roles'] = array(
    '#type' => 'checkboxes',
    '#options' => user_roles(),
    '#title' => t('Skip roles for approval'),
    '#default_value' => variable_get('workbench_skip_roles', array()),
  );
  $defaults = variable_get('workbench_approval_notification', array(
    'body' => t('There is a new content for approval: :token', array(':token' => '[node:url]')),
    'subject' => t('Content approval'),
    'email' => 'presse&kommunikation@egekom.dk',
  ));
  $form['workbench_approval_notification'] = array(
    '#type' => 'fieldset',
    '#tree' => TRUE,
    '#title' => t('Email notification'),
  );
  $form['workbench_approval_notification']['email'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Email'),
    '#description' => t('Use comma (,) if more than one email are needed.'),
    '#default_value' => $defaults['email'],
  );
  $form['workbench_approval_notification']['subject'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Subject'),
    '#default_value' => $defaults['subject'],
  );
  $form['workbench_approval_notification']['body'] = array(
    '#type' => 'textarea',
    '#required' => TRUE,
    '#title' => t('Message'),
    '#default_value' => $defaults['body'],
    // Add validation to body textareas.
    '#element_validate' => array('token_element_validate'),
    '#token_types' => $token_types,
  );

  $rejected_defaults = variable_get('workbench_rejected_notification', array(
    'body' => t('The following content did not pass administrator review: :token', array(':token' => '[node:url]')),
    'subject' => t('Rejected content'),
  ));
  $form['workbench_rejected_notification'] = array(
    '#type' => 'fieldset',
    '#tree' => TRUE,
    '#title' => t('Rejected content notification'),
  );
  $form['workbench_rejected_notification']['subject'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Subject'),
    '#default_value' => $rejected_defaults['subject'],
  );
  $form['workbench_rejected_notification']['body'] = array(
    '#type' => 'textarea',
    '#required' => TRUE,
    '#title' => t('Reject Message'),
    '#default_value' => $rejected_defaults['body'],
    // Add validation to body textareas.
    '#element_validate' => array('token_element_validate'),
    '#token_types' => $token_types,
  );

  // Add the token tree UI.
  $form['workbench_approval_notification']['token_tree'] = array(
    '#theme' => 'token_tree',
    '#token_types' => $token_types,
    '#show_restricted' => TRUE,
    '#dialog' => TRUE,
    '#weight' => 90,
  );

  return system_settings_form($form);
}
