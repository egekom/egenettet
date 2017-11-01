<?php 
/**
  * @file
  * Administration page callbacks for the CMIS Search module
  */

/**
  * Form builder. Configure search
  *
  */

function cmis_search_admin_settings() {
  $dftext = '';
  if (variable_get('noresultstext')!=''){
    $dftext = variable_get('noresultstext');
  }else{
    $dftext = t('Sorry, there are no results to match your query');
  }
  $form['cmis_search_settings']['rootfolder'] = array(
    '#type' => 'textfield',
    '#title' => t('Root folder:'),
    '#description' => t('Enter a UUID for the root folder to search from'),
    '#default_value' => variable_get('rootfolder'),
    '#size' => 100,
    '#maxlength' => 255,
  );
  $form['cmis_search_settings']['noresultstext'] = array(
    '#type' => 'textfield',
    '#title' => t('No results text:'),
    '#description' => t('Enter the text that you want to appear when zero results are returned'),
    '#required' => TRUE,
    '#default_value' => $dftext,
    '#size' => 100,
    '#maxlength' => 255,    
  );
  $form['cmis_search_settings']['#submit'] = 'cmis_search_admin_settings_submit';
  return system_settings_form($form);
}