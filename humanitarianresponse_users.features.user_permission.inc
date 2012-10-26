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
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'follow',
  );

  // Exported permission: assign roles.
  $permissions['assign roles'] = array(
    'name' => 'assign roles',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'roleassign',
  );

  // Exported permission: change follow link titles.
  $permissions['change follow link titles'] = array(
    'name' => 'change follow link titles',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'follow',
  );

  // Exported permission: edit site follow links.
  $permissions['edit site follow links'] = array(
    'name' => 'edit site follow links',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'follow',
  );

  return $permissions;
}
