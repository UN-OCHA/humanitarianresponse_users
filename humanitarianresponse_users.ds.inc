<?php
/**
 * @file
 * humanitarianresponse_users.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function humanitarianresponse_users_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'profile2_created';
  $ds_field->label = 'Date Created';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[profile2:created]',
      'format' => 'plain_text',
    ),
    'use_token' => 1,
  );
  $export['profile2_created'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'profile2_user';
  $ds_field->label = 'Profile2 User';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a href="[profile2:user:url]">View user account</a></p>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['profile2_user'] = $ds_field;

  return $export;
}
