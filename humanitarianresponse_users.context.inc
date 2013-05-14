<?php
/**
 * @file
 * humanitarianresponse_users.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function humanitarianresponse_users_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_users';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'humanitarianresponse_users-user' => array(
          'module' => 'humanitarianresponse_users',
          'delta' => 'user',
          'region' => 'user_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide_users'] = $context;

  return $export;
}
