<?php

/**
 * Implement hook_rules_action_info().
 */
function intra_automatic_employee_rules_action_info() {
  return array(
    'intra_automatic_employee_rules_action_create_user_in_alfresco' => array(
      'label' => t('Create user in Alfresco'),
      'group' => t('Alfresco Integration'),
      'parameter' => array(
        '$uid' => array(
          'type' => 'integer',
          'label' => t('User ID'),
        ),
      ),
    ),
    'intra_automatic_employee_rules_action_delete_user_in_alfresco' => array(
      'label' => t('Delete user in Alfresco'),
      'group' => t('Alfresco Integration'),
      'parameter' => array(
        'username' => array(
          'type' => 'text',
          'label' => t('Name of the user'),
        ),
      ),
    ),
  );
}

// This method renames the folder in Alfresco
function intra_automatic_employee_rules_action_create_user_in_alfresco($uid) {

watchdog("intra_employee", "Inside intra employee");

$new_user = user_load($uid);

$userName = $new_user->name;
$email = $new_user->mail;


if(isset($new_user->field_first_name['und'][0]['value']))
{
    $firstName = $new_user->field_first_name['und'][0]['value'];
}
else {
    $firstName = $userName;
}

if(isset($new_user->field_last_name['und'][0]['value']))
{
    $lastName = $new_user->field_last_name['und'][0]['value'];
}
else
{
	$lastName = "";
}

$data = array(
     'userName' => $userName,
     'password' => createRandomPassword(),
     'firstName' => $firstName,
     'lastName' => $lastName,
     'email' => $email
	 );

watchdog("intra_employee", "data: " . print_r($data, true));

$options = array(
                'method' => 'POST',
                'data' => json_encode($data),
                'timeout' => 15,
                'headers' => getExternalAuthHeaders()
        );
watchdog("intra_employee", "Ready to send rest call");
$result = drupal_http_request(getUrl(), $options);
watchdog("intra_employee", "REST call sent");
}

// This method renames the folder in Alfresco
function intra_automatic_employee_rules_action_delete_user_in_alfresco($username) {

$options = array(
                'method' => 'DELETE',
                'timeout' => 15,
                'headers' => getExternalAuthHeaders()
        );		

$result = drupal_http_request(getUrl() . '/' . $username, $options);

}

function getUrl() { 	
	$hostname = variable_get('intra_automatic_employee_hostname');
        return $hostname . '/alfresco/s/api/people';
}

function getExternalAuthHeaders() {
    $extAuthPassword = variable_get('intra_automatic_employee_ext_auth_password');
    return array(
        'X-Alfresco-Remote-User' => 'admin',
        'X-Alfresco-Run-As-Password' => $extAuthPassword,
        'Content-Type' => 'application/json'
    );
}

function createRandomPassword() {
    $chars = "abcdefghijkmnopqrstuvwxyz023456789";
    srand((double)microtime()*1000000);
    $i = 0;
    $pass = '' ;
    while ($i <= 7) {
        $num = rand() % 33;
        $tmp = substr($chars, $num, 1);
        $pass = $pass . $tmp;
        $i++;
    } 
    return substr(md5($pass), 0, 8);
} 
