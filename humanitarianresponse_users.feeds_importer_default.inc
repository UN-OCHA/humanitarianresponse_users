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
  $feeds_importer->id = 'csv_functional_roles';
  $feeds_importer->config = array(
    'name' => 'CSV Functional Roles',
    'description' => 'Import functional roles from a CSV file',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'bundle' => 'functional_role',
        'mappings' => array(
          0 => array(
            'source' => 'Name:en',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Name:en',
            'target' => 'name_field:et:en',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Name:fr',
            'target' => 'name_field:et:fr',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Name:es',
            'target' => 'name_field:et:es',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 0,
          ),
          5 => array(
            'source' => 'Parent',
            'target' => 'parent',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'UUID',
            'target' => 'uuid:uuid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'vocabulary' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['csv_functional_roles'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_user_profiles';
  $feeds_importer->config = array(
    'name' => 'CSV User Profiles',
    'description' => 'Import user profiles from a CSV file',
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
      'plugin_key' => 'FeedsEntityProcessorProfile2',
      'config' => array(
        'values' => array(
          'type' => 'main',
          'label' => '',
          'user' => '0',
        ),
        'mappings' => array(
          0 => array(
            'source' => 'Email',
            'target' => 'field_email',
            'unique' => FALSE,
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
            'unique' => FALSE,
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
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          14 => array(
            'source' => 'Functional Roles',
            'target' => 'field_froles:field_functional_role',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => NULL,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_user_profiles'] = $feeds_importer;

  return $export;
}
