<?php
/**
 * @file
 * austrofeedr_hochwasser_messstellen_map.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function austrofeedr_hochwasser_messstellen_map_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'hw_messstellen_map';
  $view->description = 'openlayers';
  $view->tag = 'austrofeedr';
  $view->base_table = 'node';
  $view->human_name = 'Hochwasser Messstellen Map';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'hw_messstellen_map_preset';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="hw-map-legende">
  <h3>Legende</h3>
  <ol>
    <li><img src="sites/default/files/map_icons/hochwasserstufe_3.png" alt="Hochwasserstufe 3 Icon" /> Hochwasserstufe 3</li>
    <li><img src="sites/default/files/map_icons/hochwasserstufe_2.png" alt="Hochwasserstufe 2 Icon" /> Hochwasserstufe 2</li>
    <li><img src="sites/default/files/map_icons/hochwasserstufe_1.png" alt="Hochwasserstufe 1 Icon" /> Hochwasserstufe 1</li>
    <li><img src="sites/default/files/map_icons/erhoete_wasserfuehrung.png" alt="Erhöhte Wasserführung Icon" /> erhöhte Wasserführung</li>
    <li><img src="sites/default/files/map_icons/mittelwasser.png" alt="Mittelwasser Icon" /> Mittelwasser</li>
    <li><img src="sites/default/files/map_icons/niederwasser.png" alt="Niederwasser Icon" /> Niederwasser</li>
  </ul>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Field: Content: Bezirk */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_hw_bezirk';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_hw_bezirk';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '2';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hw_messstelle' => 'hw_messstelle',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
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
  $handler->display->display_options['filters']['title']['group'] = 0;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Messstelle';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 0;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Status';
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
    'value' => 'wkt',
    'other_lat' => 'entity_id_1',
    'other_lon' => 'entity_id_2',
    'wkt' => 'field_hw_geoposition',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Bezirk */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_hw_bezirk';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_hw_bezirk';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_hw_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_hw_trend']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_hw_trend']['field_api_classes'] = 0;
  /* Field: Content: Geo Position */
  $handler->display->display_options['fields']['field_hw_geoposition']['id'] = 'field_hw_geoposition';
  $handler->display->display_options['fields']['field_hw_geoposition']['table'] = 'field_data_field_hw_geoposition';
  $handler->display->display_options['fields']['field_hw_geoposition']['field'] = 'field_hw_geoposition';
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
  $handler->display->display_options['fields']['field_hw_geoposition']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_geoposition']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_geoposition']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_geoposition']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_hw_geoposition']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_hw_geoposition']['field_api_classes'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $export['hw_messstellen_map'] = $view;

  return $export;
}
