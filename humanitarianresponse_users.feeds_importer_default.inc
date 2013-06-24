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
  $feeds_importer->id = 'csv_users';
  $feeds_importer->config = array(
    'name' => 'CSV Users',
    'description' => 'Import users from a CSV file',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
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
        'update_existing' => '2',
        'status' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Salutation',
            'target' => 'field_salutation',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'First name',
            'target' => 'field_first_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Last name',
            'target' => 'field_last_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Telephones',
            'target' => 'field_phones',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Organization',
            'target' => 'field_organizations',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          6 => array(
            'source' => 'Clusters',
            'target' => 'field_clusters',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Location',
            'target' => 'field_locations',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Coordination Hub',
            'target' => 'field_coordination_hubs',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Fundings',
            'target' => 'field_fundings',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Theme(s)',
            'target' => 'field_themes',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Emergencies',
            'target' => 'field_emergencies',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Job Title',
            'target' => 'field_job_title',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Email',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'defuse_mail' => 0,
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['csv_users'] = $feeds_importer;

  return $export;
}
