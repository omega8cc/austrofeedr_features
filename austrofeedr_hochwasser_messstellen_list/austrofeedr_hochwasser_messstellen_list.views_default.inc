<?php
/**
 * @file
 * austrofeedr_hochwasser_messstellen_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function austrofeedr_hochwasser_messstellen_list_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'hw_messstellen_list';
  $view->description = '';
  $view->tag = 'austrofeedr';
  $view->base_table = 'node';
  $view->human_name = 'Hochwasser Messstellen Liste';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Messstellen';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['field_hw_werte']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hw_werte']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_werte']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['type'] = 'datastore_visualization_datastore_field_formatter';
  $handler->display->display_options['fields']['field_hw_werte']['settings'] = array(
    'chart_id' => '',
    'chart_class' => 'hochwasserstand_teaser',
    'chart_type' => 'Line 2D',
    'num_values' => '10',
    'chart_title' => '',
    'axis_1' => '',
    'axis_2' => '',
    'chart_width' => '300',
    'chart_height' => '150',
    'date_format' => 'H:i',
  );
  $handler->display->display_options['fields']['field_hw_werte']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_hw_werte']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hw_werte']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_hw_werte']['field_api_classes'] = 0;
  /* Field: Content: Geo Position */
  $handler->display->display_options['fields']['field_hw_geoposition']['id'] = 'field_hw_geoposition';
  $handler->display->display_options['fields']['field_hw_geoposition']['table'] = 'field_data_field_hw_geoposition';
  $handler->display->display_options['fields']['field_hw_geoposition']['field'] = 'field_hw_geoposition';
  $handler->display->display_options['fields']['field_hw_geoposition']['label'] = '';
  $handler->display->display_options['fields']['field_hw_geoposition']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_geoposition']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_geoposition']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hw_geoposition']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_geoposition']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_hw_geoposition']['type'] = 'geofield_openlayers';
  $handler->display->display_options['fields']['field_hw_geoposition']['settings'] = array(
    'map_preset' => 'hw_messstelle_map_geofield_preset',
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_hw_geoposition']['field_api_classes'] = 0;
  /* Field: Content: Bezirk */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_hw_bezirk';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_hw_bezirk';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id']['element_type'] = 'span';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['group_rows'] = 1;
  $handler->display->display_options['fields']['entity_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['entity_id']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['entity_id']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['entity_id']['field_api_classes'] = 0;
  /* Field: Content: Wasserstand Status */
  $handler->display->display_options['fields']['field_hw_status']['id'] = 'field_hw_status';
  $handler->display->display_options['fields']['field_hw_status']['table'] = 'field_data_field_hw_status';
  $handler->display->display_options['fields']['field_hw_status']['field'] = 'field_hw_status';
  $handler->display->display_options['fields']['field_hw_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hw_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['field_api_classes'] = 0;
  /* Field: Content: Wasserstand Trend */
  $handler->display->display_options['fields']['field_hw_trend']['id'] = 'field_hw_trend';
  $handler->display->display_options['fields']['field_hw_trend']['table'] = 'field_data_field_hw_trend';
  $handler->display->display_options['fields']['field_hw_trend']['field'] = 'field_hw_trend';
  $handler->display->display_options['fields']['field_hw_trend']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hw_trend']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_trend']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_trend']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_hw_link']['id'] = 'field_hw_link';
  $handler->display->display_options['fields']['field_hw_link']['table'] = 'field_data_field_hw_link';
  $handler->display->display_options['fields']['field_hw_link']['field'] = 'field_hw_link';
  $handler->display->display_options['fields']['field_hw_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hw_link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_hw_link']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Suche';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'messstellen';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Messstellen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['hw_messstellen_list'] = $view;

  return $export;
}
