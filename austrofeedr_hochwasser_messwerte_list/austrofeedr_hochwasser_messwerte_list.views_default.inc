<?php
/**
 * @file
 * austrofeedr_hochwasser_messwerte_list.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function austrofeedr_hochwasser_messwerte_list_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'hw_messwerte_view';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Hochwasser Messwerte';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'title';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Wasserstand Werte */
  $handler->display->display_options['fields']['field_hw_werte']['id'] = 'field_hw_werte';
  $handler->display->display_options['fields']['field_hw_werte']['table'] = 'field_data_field_hw_werte';
  $handler->display->display_options['fields']['field_hw_werte']['field'] = 'field_hw_werte';
  $handler->display->display_options['fields']['field_hw_werte']['label'] = '';
  $handler->display->display_options['fields']['field_hw_werte']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_werte']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_werte']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hw_werte']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Wasserstand Werte (field_hw_werte) - timestamp */
  $handler->display->display_options['sorts']['field_hw_werte_timestamp']['id'] = 'field_hw_werte_timestamp';
  $handler->display->display_options['sorts']['field_hw_werte_timestamp']['table'] = 'field_data_field_hw_werte';
  $handler->display->display_options['sorts']['field_hw_werte_timestamp']['field'] = 'field_hw_werte_timestamp';
  $handler->display->display_options['sorts']['field_hw_werte_timestamp']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title_enable'] = 1;
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '215';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hw_messstelle' => 'hw_messstelle',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'messwerte';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Messwerte';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['hw_messwerte_view'] = array(
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
    t('All'),
    t('Page'),
  );
  $export['hw_messwerte_view'] = $view;

  return $export;
}
