<?php
/**
 * @file
 * humanitarianresponse_users.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function humanitarianresponse_users_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_email'
  $field_bases['field_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_emails_other'
  $field_bases['field_emails_other'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_emails_other',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_first_name'
  $field_bases['field_first_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_first_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_key'
  $field_bases['field_key'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_key',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'taxonomy_term_data' => array(
        'columns' => array(
          'target_id' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'clusters' => 'clusters',
          'coordination_hubs' => 'coordination_hubs',
          'emergencies' => 'emergencies',
          'funding' => 'funding',
          'locations' => 'locations',
          'organizations' => 'organizations',
          'themes' => 'themes',
        ),
      ),
      'profile2_private' => 0,
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_last_name'
  $field_bases['field_last_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_last_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_other_contact_info'
  $field_bases['field_other_contact_info'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_other_contact_info',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'path' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_phones'
  $field_bases['field_phones'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_phones',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'countrycode' => array(
        0 => 'countrycode',
      ),
      'numbertype' => array(
        0 => 'numbertype',
      ),
    ),
    'locked' => 0,
    'module' => 'phone',
    'settings' => array(
      'enable_numbertype' => 1,
      'entity_translation_sync' => FALSE,
      'numbertype_allowed_values' => array(
        'cell' => 'cell',
        'fax' => 'fax',
        'home' => 'home',
        'work' => 'work',
      ),
    ),
    'translatable' => 0,
    'type' => 'phone',
  );

  // Exported field_base: 'field_profile_privacy'
  $field_bases['field_profile_privacy'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_profile_privacy',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'profile2_privacy',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'profile2_privacy',
  );

  // Exported field_base: 'field_salutation'
  $field_bases['field_salutation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_salutation',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Mr' => 'Mr',
        'Ms' => 'Ms',
        'Mrs' => 'Mrs',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_social_id'
  $field_bases['field_social_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_social_id',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_social_network'
  $field_bases['field_social_network'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_social_network',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'skype' => 'Skype',
        'hangout' => 'Google Hangout',
        'yahoo' => 'Yahoo Messenger',
        'facebook' => 'Facebook',
        'linkedin' => 'LinkedIn',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
