<?php
/**
 * @file
 * austrofeedr_hochwasser_messstellen_import.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function austrofeedr_hochwasser_messstellen_import_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'hw_messstellen_admin';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'hw_messstellen_admin';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entity_id_1' => 'entity_id_1',
    'title' => 'title',
    'entity_id' => 'entity_id',
    'entity_id_3' => 'entity_id_3',
    'entity_id_4' => 'entity_id_4',
    'entity_id_2' => 'entity_id_2',
    'entity_id_6' => 'entity_id_6',
    'entity_id_5' => 'entity_id_5',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entity_id_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id' => array(
      'align' => '',
      'separator' => '',
    ),
    'entity_id_3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_4' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'align' => '',
      'separator' => '',
    ),
    'entity_id_6' => array(
      'align' => '',
      'separator' => '',
    ),
    'entity_id_5' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: Content: ID (dbmsnr) */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_hw_dbmsnr';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_hw_dbmsnr';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Bezirk */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_hw_bezirk';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_hw_bezirk';
  $handler->display->display_options['fields']['entity_id']['label'] = 'field_hw_bezirk';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['external'] = 0;
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
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'tid';
  $handler->display->display_options['fields']['entity_id']['group_rows'] = 1;
  $handler->display->display_options['fields']['entity_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['entity_id']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['entity_id']['field_api_classes'] = 0;
  /* Field: Content: Wasserstand Status */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_hw_status';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_hw_status';
  /* Field: Content: Wasserstand Trend */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_hw_trend';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_hw_trend';
  /* Field: Content: Geo Position */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_hw_geoposition';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_hw_geoposition';
  /* Field: Content: Wasserstand Werte */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_hw_werte';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_hw_werte';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_hw_url';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_hw_url';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* Field: Content: Kennwert HQ1 */
  $handler->display->display_options['fields']['field_hw_wert_hq1']['id'] = 'field_hw_wert_hq1';
  $handler->display->display_options['fields']['field_hw_wert_hq1']['table'] = 'field_data_field_hw_wert_hq1';
  $handler->display->display_options['fields']['field_hw_wert_hq1']['field'] = 'field_hw_wert_hq1';
  $handler->display->display_options['fields']['field_hw_wert_hq1']['label'] = 'Kennwert HQ10';
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_hw_wert_hq1']['field_api_classes'] = 0;
  /* Field: Content: Kennwert HQ10 */
  $handler->display->display_options['fields']['field_hw_wert_hq10']['id'] = 'field_hw_wert_hq10';
  $handler->display->display_options['fields']['field_hw_wert_hq10']['table'] = 'field_data_field_hw_wert_hq10';
  $handler->display->display_options['fields']['field_hw_wert_hq10']['field'] = 'field_hw_wert_hq10';
  /* Field: Content: Kennwert HQ100 */
  $handler->display->display_options['fields']['field_hw_wert_hq100']['id'] = 'field_hw_wert_hq100';
  $handler->display->display_options['fields']['field_hw_wert_hq100']['table'] = 'field_data_field_hw_wert_hq100';
  $handler->display->display_options['fields']['field_hw_wert_hq100']['field'] = 'field_hw_wert_hq100';
  /* Field: Content: Kennwert HQ2 */
  $handler->display->display_options['fields']['field_hw_wert_hq2']['id'] = 'field_hw_wert_hq2';
  $handler->display->display_options['fields']['field_hw_wert_hq2']['table'] = 'field_data_field_hw_wert_hq2';
  $handler->display->display_options['fields']['field_hw_wert_hq2']['field'] = 'field_hw_wert_hq2';
  /* Field: Content: Kennwert HQ30 */
  $handler->display->display_options['fields']['field_hw_wert_hq30']['id'] = 'field_hw_wert_hq30';
  $handler->display->display_options['fields']['field_hw_wert_hq30']['table'] = 'field_data_field_hw_wert_hq30';
  $handler->display->display_options['fields']['field_hw_wert_hq30']['field'] = 'field_hw_wert_hq30';
  /* Field: Content: Kennwert HQ5 */
  $handler->display->display_options['fields']['field_hw_wert_hq5']['id'] = 'field_hw_wert_hq5';
  $handler->display->display_options['fields']['field_hw_wert_hq5']['table'] = 'field_data_field_hw_wert_hq5';
  $handler->display->display_options['fields']['field_hw_wert_hq5']['field'] = 'field_hw_wert_hq5';
  /* Field: Content: Kennwert MJNQ */
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['id'] = 'field_hw_wert_mjnq';
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['table'] = 'field_data_field_hw_wert_mjnq';
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['field'] = 'field_hw_wert_mjnq';
  /* Field: Content: Kennwert MQ */
  $handler->display->display_options['fields']['field_hw_wert_mq']['id'] = 'field_hw_wert_mq';
  $handler->display->display_options['fields']['field_hw_wert_mq']['table'] = 'field_data_field_hw_wert_mq';
  $handler->display->display_options['fields']['field_hw_wert_mq']['field'] = 'field_hw_wert_mq';
  /* Field: Content: Kennwert RHHQ */
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['id'] = 'field_hw_wert_rhhq';
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['table'] = 'field_data_field_hw_wert_rhhq';
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['field'] = 'field_hw_wert_rhhq';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_hw_url']['id'] = 'field_hw_url';
  $handler->display->display_options['fields']['field_hw_url']['table'] = 'field_data_field_hw_url';
  $handler->display->display_options['fields']['field_hw_url']['field'] = 'field_hw_url';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hw_messstelle' => 'hw_messstelle',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'messstellen/admin';
  $translatables['hw_messstellen_admin'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('ID (dbmsnr)'),
    t('Title'),
    t('field_hw_bezirk'),
    t('Wasserstand Status'),
    t('Wasserstand Trend'),
    t('Geo Position'),
    t('Wasserstand Werte'),
    t('URL'),
    t('Updated date'),
    t('Kennwert HQ10'),
    t('Kennwert HQ100'),
    t('Kennwert HQ2'),
    t('Kennwert HQ30'),
    t('Kennwert HQ5'),
    t('Kennwert MJNQ'),
    t('Kennwert MQ'),
    t('Kennwert RHHQ'),
    t('Page'),
  );
  $export['hw_messstellen_admin'] = $view;

  return $export;
}
