<?php
/**
 * @file
 * austrofeedr_hochwasser_messstellen_map.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function austrofeedr_hochwasser_messstellen_map_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'hw_messstellen_map';
  $view->description = 'openlayers';
  $view->tag = 'austrofeedr';
  $view->base_table = 'node';
  $view->human_name = 'Hochwasser Messstellen';
  $view->core = 0;
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
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Field: Content: Bezirk */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_hw_bezirk';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_hw_bezirk';
  /* Field: Fields: Latitude */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_lat';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_lat';
  /* Field: Fields: Longitude */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_lng';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_lng';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hw_messstelle' => 'hw_messstelle',
  );
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'other_latlon',
    'other_lat' => 'entity_id_1',
    'other_lon' => 'entity_id_2',
    'wkt' => 'entity_id_3',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'field_hw_werte',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Fields: Latitude */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_lat';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_lat';
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '10',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['entity_id_1']['field_api_classes'] = 0;
  /* Field: Fields: Longitude */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_lng';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_lng';
  $handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '10',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['entity_id_2']['field_api_classes'] = 0;
  /* Field: Content: Bezirk */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_hw_bezirk';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_hw_bezirk';
  /* Field: Content: Geo Position */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_hw_geoposition';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_hw_geoposition';
  $handler->display->display_options['fields']['entity_id_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['click_sort_column'] = 'lat';
  /* Field: Content: Wasserstand Werte */
  $handler->display->display_options['fields']['field_hw_werte']['id'] = 'field_hw_werte';
  $handler->display->display_options['fields']['field_hw_werte']['table'] = 'field_data_field_hw_werte';
  $handler->display->display_options['fields']['field_hw_werte']['field'] = 'field_hw_werte';
  $handler->display->display_options['fields']['field_hw_werte']['label'] = '';
  $handler->display->display_options['fields']['field_hw_werte']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_werte']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['type'] = 'datastore_visualization_datastore_field_formatter';
  $handler->display->display_options['fields']['field_hw_werte']['settings'] = array(
    'chart_id' => '',
    'chart_class' => '',
    'chart_type' => 'Line 2D',
    'num_values' => '10',
    'chart_title' => 'hochwasserstand_teaser',
    'axis_1' => '',
    'axis_2' => '',
    'chart_width' => '600',
    'chart_height' => '150',
    'date_format' => 'd.m H:i',
  );
  $handler->display->display_options['fields']['field_hw_werte']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_hw_werte']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hw_werte']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['field_api_classes'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['preset'] = 'hw_messstellen_map_preset';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'messstellen-map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Messstellen Map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['hw_messstellen_map'] = array(
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
    t('Bezirk'),
    t('Latitude'),
    t('Longitude'),
    t('OpenLayers Data Overlay'),
    t('Title'),
    t('Geo Position'),
    t('Page'),
  );
  $export['hw_messstellen_map'] = $view;

  return $export;
}
