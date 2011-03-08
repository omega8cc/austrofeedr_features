<?php

/**
 * Implementation of hook_views_default_views().
 */
function austrofeedr_hochwasser_messwerte_list_views_default_views() {
  $views = array();

  // Exported view: hw_messwerte_view
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
  $handler->display->display_options['style_plugin'] = 'datastore_fusioncharts';
  $handler->display->display_options['style_options']['num_values'] = '0';
  $handler->display->display_options['style_options']['chart_width'] = '400';
  $handler->display->display_options['style_options']['chart_height'] = '300';
  $handler->display->display_options['style_options']['chart_type'] = 'Line.swf';
  /* Field: Fields: Wasserstand Werte */
  $handler->display->display_options['fields']['field_hw_werte']['id'] = 'field_hw_werte';
  $handler->display->display_options['fields']['field_hw_werte']['table'] = 'field_data_field_hw_werte';
  $handler->display->display_options['fields']['field_hw_werte']['field'] = 'field_hw_werte';
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
  $handler->display->display_options['fields']['field_hw_werte']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_hw_werte']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hw_werte']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['field_api_classes'] = 0;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

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
    t('Sort By'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Wasserstand Werte'),
    t('All'),
    t('Page'),
  );

  $views[$view->name] = $view;

  return $views;
}