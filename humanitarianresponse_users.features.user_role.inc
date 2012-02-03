<?php
/**
 * @file
 * humanitarianresponse_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function humanitarianresponse_users_user_default_roles() {
  $roles = array();

  // Exported role: trusted
  $roles['trusted'] = array(
    'name' => 'trusted',
    'weight' => '3',
  );

  return $roles;
}
