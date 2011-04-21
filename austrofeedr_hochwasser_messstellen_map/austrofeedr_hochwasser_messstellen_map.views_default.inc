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
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'bezirk';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'hw_austria';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hw_messstelle' => 'hw_messstelle',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content: Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 0;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'hw_status';
  $handler->display->display_options['filters']['tid']['error_message'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['group'] = 0;
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Trend';
  $handler->display->display_options['filters']['tid_1']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'trend';
  $handler->display->display_options['filters']['tid_1']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'hw_trend';
  $handler->display->display_options['filters']['tid_1']['error_message'] = 1;

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
    'wkt' => 'title',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
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
  $handler->display->display_options['fields']['entity_id_1']['alter']['replace_spaces'] = 0;
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
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id']['group_rows'] = 1;
  $handler->display->display_options['fields']['entity_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['entity_id']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['entity_id']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Wasserstand Status */
  $handler->display->display_options['fields']['field_hw_status']['id'] = 'field_hw_status';
  $handler->display->display_options['fields']['field_hw_status']['table'] = 'field_data_field_hw_status';
  $handler->display->display_options['fields']['field_hw_status']['field'] = 'field_hw_status';
  $handler->display->display_options['fields']['field_hw_status']['label'] = '';
  $handler->display->display_options['fields']['field_hw_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_hw_status']['field_api_classes'] = 0;
  /* Field: Content: Wasserstand Trend */
  $handler->display->display_options['fields']['field_hw_trend']['id'] = 'field_hw_trend';
  $handler->display->display_options['fields']['field_hw_trend']['table'] = 'field_data_field_hw_trend';
  $handler->display->display_options['fields']['field_hw_trend']['field'] = 'field_hw_trend';
  $handler->display->display_options['fields']['field_hw_trend']['label'] = '';
  $handler->display->display_options['fields']['field_hw_trend']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_hw_trend']['field_api_classes'] = 0;
  /* Field: Custom text: Trend URL */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom text: Trend URL';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'profiles/austrofeedr/themes/austrofeedr/images/[field_hw_trend].png';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;

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
    t('Content: Type'),
    t('Status'),
    t('Trend'),
    t('OpenLayers Data Overlay'),
    t('Title'),
    t('Nid'),
    t('profiles/austrofeedr/themes/austrofeedr/images/[field_hw_trend].png'),
    t('Page'),
  );
  $export['hw_messstellen_map'] = $view;

  return $export;
}
