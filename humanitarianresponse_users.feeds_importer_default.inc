<?php
/**
 * @file
 * humanitarianresponse_users.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function humanitarianresponse_users_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'contacts_users_import';
  $feeds_importer->config = array(
    'name' => 'Contacts/users import',
    'description' => 'Import users/contacts from a CSV file',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          218860149 => 0,
          200153887 => 0,
          52310416 => 0,
          30037204 => 0,
        ),
        'update_existing' => 1,
        'status' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'First Name',
            'target' => 'field_user_first_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Last Name',
            'target' => 'field_user_last_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Organization',
            'target' => 'field_organizations',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Job title',
            'target' => 'field_job_title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Email Address',
            'target' => 'mail',
            'unique' => 1,
          ),
          5 => array(
            'source' => 'Location',
            'target' => 'field_locations',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Clusters',
            'target' => 'field_clusters',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Mobile Phone (Including country code)',
            'target' => 'field_phone_numbers',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Email Address',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'defuse_mail' => 0,
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['contacts_users_import'] = $feeds_importer;

  return $export;
}
