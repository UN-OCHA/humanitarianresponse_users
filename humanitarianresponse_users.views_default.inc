<?php
/**
 * @file
 * humanitarianresponse_users.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_users_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'User profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Key Contacts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no key contacts';
  $handler->display->display_options['empty']['area']['format'] = 'simple';
  /* Field: Profile: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Profile: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Profile: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_title']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Profile: Telephone(s) */
  $handler->display->display_options['fields']['field_phones']['id'] = 'field_phones';
  $handler->display->display_options['fields']['field_phones']['table'] = 'field_data_field_phones';
  $handler->display->display_options['fields']['field_phones']['field'] = 'field_phones';
  $handler->display->display_options['fields']['field_phones']['label'] = '';
  $handler->display->display_options['fields']['field_phones']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phones']['click_sort_column'] = 'numbertype';
  $handler->display->display_options['fields']['field_phones']['settings'] = array(
    'components' => array(
      'country' => 0,
      'numbertype' => 0,
    ),
    'full_hcard' => 0,
    'as_tel_link' => 0,
    'allow_alpha' => 0,
    'country_name_position' => 'after',
    'numbertype_position' => 'before',
  );
  $handler->display->display_options['fields']['field_phones']['delta_offset'] = '0';
  /* Sort criterion: Profile: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Contextual filter: Profile: Key on these pages (field_key) */
  $handler->display->display_options['arguments']['field_key_target_id']['id'] = 'field_key_target_id';
  $handler->display->display_options['arguments']['field_key_target_id']['table'] = 'field_data_field_key';
  $handler->display->display_options['arguments']['field_key_target_id']['field'] = 'field_key_target_id';
  $handler->display->display_options['arguments']['field_key_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_key_target_id']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_key_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_key_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_key_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_key_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_key_target_id']['validate']['type'] = 'taxonomy_term';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'key_per_term');
  $handler->display->display_options['block_description'] = 'Key Contacts per term';
  $translatables['user_profiles'] = array(
    t('Master'),
    t('Key Contacts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('There are no key contacts'),
    t('[field_first_name] [field_last_name]'),
    t('All'),
    t('Block'),
    t('Key Contacts per term'),
  );
  $export['user_profiles'] = $view;

  return $export;
}
