<?php
/**
 * @file
 * austrofeedr_hochwasser_messstellen_updates.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function austrofeedr_hochwasser_messstellen_updates_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'hw_messstellen_updates';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'hw_messstellen_updates';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'nid';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Relationship: Content: Bezirk (field_hw_bezirk) */
  $handler->display->display_options['relationships']['field_hw_bezirk_tid']['id'] = 'field_hw_bezirk_tid';
  $handler->display->display_options['relationships']['field_hw_bezirk_tid']['table'] = 'field_data_field_hw_bezirk';
  $handler->display->display_options['relationships']['field_hw_bezirk_tid']['field'] = 'field_hw_bezirk_tid';
  $handler->display->display_options['relationships']['field_hw_bezirk_tid']['required'] = 0;
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['relationship'] = 'field_hw_bezirk_tid';
  $handler->display->display_options['relationships']['nid']['required'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title_enable'] = 1;
  $handler->display->display_options['arguments']['nid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['nid']['title'] = 'Updates zu %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'hw_messstelle' => 'hw_messstelle',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'update' => 'update',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['hw_messstellen_updates'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('term from field_hw_bezirk'),
    t('node'),
    t('All'),
    t('Updates zu %1'),
    t('Block'),
  );
  $export['hw_messstellen_updates'] = $view;

  return $export;
}
