<?php
/**
 * @file
 * humanitarianresponse_users.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function humanitarianresponse_users_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'profile2|main|default';
  $ds_fieldsetting->entity_type = 'profile2';
  $ds_fieldsetting->bundle = 'main';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'profile2_created' => array(
      'weight' => '17',
      'label' => 'inline',
      'format' => 'default',
    ),
    'profile2_user' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['profile2|main|default'] = $ds_fieldsetting;

  return $export;
}

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

/**
 * Implements hook_ds_layout_settings_info().
 */
function humanitarianresponse_users_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|main|default';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'main';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_salutation',
        1 => 'field_first_name',
        2 => 'field_last_name',
        3 => 'field_phones',
        4 => 'field_email',
        5 => 'field_organizations',
        6 => 'field_oganization_other',
        7 => 'field_job_title',
        8 => 'field_clusters',
        9 => 'field_locations',
        10 => 'field_coordination_hubs',
        11 => 'field_themes',
        12 => 'field_fundings',
        13 => 'field_emergencies',
        14 => 'field_key',
        15 => 'field_opt_out',
        16 => 'field_functional_roles',
        17 => 'profile2_created',
        18 => 'profile2_user',
      ),
    ),
    'fields' => array(
      'field_salutation' => 'ds_content',
      'field_first_name' => 'ds_content',
      'field_last_name' => 'ds_content',
      'field_phones' => 'ds_content',
      'field_email' => 'ds_content',
      'field_organizations' => 'ds_content',
      'field_oganization_other' => 'ds_content',
      'field_job_title' => 'ds_content',
      'field_clusters' => 'ds_content',
      'field_locations' => 'ds_content',
      'field_coordination_hubs' => 'ds_content',
      'field_themes' => 'ds_content',
      'field_fundings' => 'ds_content',
      'field_emergencies' => 'ds_content',
      'field_key' => 'ds_content',
      'field_opt_out' => 'ds_content',
      'field_functional_roles' => 'ds_content',
      'profile2_created' => 'ds_content',
      'profile2_user' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['profile2|main|default'] = $ds_layout;

  return $export;
}
