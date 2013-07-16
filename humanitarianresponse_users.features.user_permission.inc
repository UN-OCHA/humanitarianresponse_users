<?php
/**
 * @file
 * humanitarianresponse_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer follow.
  $permissions['administer follow'] = array(
    'name' => 'administer follow',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'follow',
  );

  // Exported permission: assign roles.
  $permissions['assign roles'] = array(
    'name' => 'assign roles',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'roleassign',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: change follow link titles.
  $permissions['change follow link titles'] = array(
    'name' => 'change follow link titles',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'follow',
  );

  // Exported permission: edit field_key.
  $permissions['edit field_key'] = array(
    'name' => 'edit field_key',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit site follow links.
  $permissions['edit site follow links'] = array(
    'name' => 'edit site follow links',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'follow',
  );

  // Exported permission: view field_key.
  $permissions['view field_key'] = array(
    'name' => 'view field_key',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
