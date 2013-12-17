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

  // Exported permission: 'administer follow'.
  $permissions['administer follow'] = array(
    'name' => 'administer follow',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'assign roles'.
  $permissions['assign roles'] = array(
    'name' => 'assign roles',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'roleassign',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change follow link titles'.
  $permissions['change follow link titles'] = array(
    'name' => 'change follow link titles',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'create field_froles'.
  $permissions['create field_froles'] = array(
    'name' => 'create field_froles',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_functional_role'.
  $permissions['create field_functional_role'] = array(
    'name' => 'create field_functional_role',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_functional_role_of'.
  $permissions['create field_functional_role_of'] = array(
    'name' => 'create field_functional_role_of',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_key'.
  $permissions['create field_key'] = array(
    'name' => 'create field_key',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_key_collection'.
  $permissions['create field_key_collection'] = array(
    'name' => 'create field_key_collection',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_key_weight'.
  $permissions['create field_key_weight'] = array(
    'name' => 'create field_key_weight',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit any main profile'.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit field_froles'.
  $permissions['edit field_froles'] = array(
    'name' => 'edit field_froles',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_functional_role'.
  $permissions['edit field_functional_role'] = array(
    'name' => 'edit field_functional_role',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_functional_role_of'.
  $permissions['edit field_functional_role_of'] = array(
    'name' => 'edit field_functional_role_of',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_key'.
  $permissions['edit field_key'] = array(
    'name' => 'edit field_key',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_key_collection'.
  $permissions['edit field_key_collection'] = array(
    'name' => 'edit field_key_collection',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_key_weight'.
  $permissions['edit field_key_weight'] = array(
    'name' => 'edit field_key_weight',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_froles'.
  $permissions['edit own field_froles'] = array(
    'name' => 'edit own field_froles',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_functional_role'.
  $permissions['edit own field_functional_role'] = array(
    'name' => 'edit own field_functional_role',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_functional_role_of'.
  $permissions['edit own field_functional_role_of'] = array(
    'name' => 'edit own field_functional_role_of',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_key'.
  $permissions['edit own field_key'] = array(
    'name' => 'edit own field_key',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_key_collection'.
  $permissions['edit own field_key_collection'] = array(
    'name' => 'edit own field_key_collection',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_key_weight'.
  $permissions['edit own field_key_weight'] = array(
    'name' => 'edit own field_key_weight',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own main profile'.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit site follow links'.
  $permissions['edit site follow links'] = array(
    'name' => 'edit site follow links',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'view any main profile'.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view field_froles'.
  $permissions['view field_froles'] = array(
    'name' => 'view field_froles',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_functional_role'.
  $permissions['view field_functional_role'] = array(
    'name' => 'view field_functional_role',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_functional_role_of'.
  $permissions['view field_functional_role_of'] = array(
    'name' => 'view field_functional_role_of',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_key'.
  $permissions['view field_key'] = array(
    'name' => 'view field_key',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_key_collection'.
  $permissions['view field_key_collection'] = array(
    'name' => 'view field_key_collection',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_key_weight'.
  $permissions['view field_key_weight'] = array(
    'name' => 'view field_key_weight',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_froles'.
  $permissions['view own field_froles'] = array(
    'name' => 'view own field_froles',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_functional_role'.
  $permissions['view own field_functional_role'] = array(
    'name' => 'view own field_functional_role',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_functional_role_of'.
  $permissions['view own field_functional_role_of'] = array(
    'name' => 'view own field_functional_role_of',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_key'.
  $permissions['view own field_key'] = array(
    'name' => 'view own field_key',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_key_collection'.
  $permissions['view own field_key_collection'] = array(
    'name' => 'view own field_key_collection',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_key_weight'.
  $permissions['view own field_key_weight'] = array(
    'name' => 'view own field_key_weight',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own main profile'.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
