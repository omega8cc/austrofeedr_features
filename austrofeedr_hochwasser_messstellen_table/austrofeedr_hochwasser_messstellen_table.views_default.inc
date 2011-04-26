<?php
/**
 * @file
 * austrofeedr_hochwasser_messstellen_table.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function austrofeedr_hochwasser_messstellen_table_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'hw_messstellen_table';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hochwasser Messstellen Table';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hochwasser Messstellen Table';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_hw_bezirk' => 'field_hw_bezirk',
    'field_hw_dbmsnr' => 'field_hw_dbmsnr',
    'field_hw_gewaesser' => 'field_hw_gewaesser',
    'field_hw_wert_aktuell' => 'field_hw_wert_aktuell',
    'field_hw_einheit' => 'field_hw_einheit',
    'field_hw_last_updated' => 'field_hw_last_updated',
    'field_hw_status' => 'field_hw_status',
    'field_hw_trend' => 'field_hw_trend',
    'field_hw_url' => 'field_hw_url',
    'field_hw_wert_hq1' => 'field_hw_wert_hq1',
    'field_hw_wert_hq10' => 'field_hw_wert_hq10',
    'field_hw_wert_hq100' => 'field_hw_wert_hq100',
    'field_hw_wert_hq2' => 'field_hw_wert_hq2',
    'field_hw_wert_hq30' => 'field_hw_wert_hq30',
    'field_hw_wert_hq5' => 'field_hw_wert_hq5',
    'field_hw_wert_mjnq' => 'field_hw_wert_mjnq',
    'field_hw_wert_mq' => 'field_hw_wert_mq',
    'field_hw_wert_rhhq' => 'field_hw_wert_rhhq',
    'field_lat' => 'field_lat',
    'field_lng' => 'field_lng',
    'field_hw_parameter' => 'field_hw_parameter',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_bezirk' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_hw_dbmsnr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_gewaesser' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_wert_aktuell' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_einheit' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_last_updated' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_trend' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_wert_hq1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_wert_hq10' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_wert_hq100' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_wert_hq2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_wert_hq30' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_wert_hq5' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_wert_mjnq' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_wert_mq' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_wert_rhhq' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_lat' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_lng' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_parameter' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Messstelle';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Bezirk */
  $handler->display->display_options['fields']['field_hw_bezirk']['id'] = 'field_hw_bezirk';
  $handler->display->display_options['fields']['field_hw_bezirk']['table'] = 'field_data_field_hw_bezirk';
  $handler->display->display_options['fields']['field_hw_bezirk']['field'] = 'field_hw_bezirk';
  $handler->display->display_options['fields']['field_hw_bezirk']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_bezirk']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_bezirk']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_bezirk']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_bezirk']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_bezirk']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_bezirk']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_bezirk']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_bezirk']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_bezirk']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_bezirk']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_bezirk']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_bezirk']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_bezirk']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_bezirk']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_bezirk']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_hw_bezirk']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hw_bezirk']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_hw_bezirk']['field_api_classes'] = 0;
  /* Field: Content: ID (dbmsnr) */
  $handler->display->display_options['fields']['field_hw_dbmsnr']['id'] = 'field_hw_dbmsnr';
  $handler->display->display_options['fields']['field_hw_dbmsnr']['table'] = 'field_data_field_hw_dbmsnr';
  $handler->display->display_options['fields']['field_hw_dbmsnr']['field'] = 'field_hw_dbmsnr';
  $handler->display->display_options['fields']['field_hw_dbmsnr']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_dbmsnr']['field_api_classes'] = 0;
  /* Field: Content: Wasserstand Aktuell */
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['id'] = 'field_hw_wert_aktuell';
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['table'] = 'field_data_field_hw_wert_aktuell';
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['field'] = 'field_hw_wert_aktuell';
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['field_api_classes'] = 0;
  /* Field: Content: Einheit */
  $handler->display->display_options['fields']['field_hw_einheit']['id'] = 'field_hw_einheit';
  $handler->display->display_options['fields']['field_hw_einheit']['table'] = 'field_data_field_hw_einheit';
  $handler->display->display_options['fields']['field_hw_einheit']['field'] = 'field_hw_einheit';
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_einheit']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_einheit']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['field_api_classes'] = 0;
  /* Field: Content: Wasserstand Last Update */
  $handler->display->display_options['fields']['field_hw_last_updated']['id'] = 'field_hw_last_updated';
  $handler->display->display_options['fields']['field_hw_last_updated']['table'] = 'field_data_field_hw_last_updated';
  $handler->display->display_options['fields']['field_hw_last_updated']['field'] = 'field_hw_last_updated';
  $handler->display->display_options['fields']['field_hw_last_updated']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_last_updated']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_last_updated']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_last_updated']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_last_updated']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_last_updated']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_last_updated']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_last_updated']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_last_updated']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_last_updated']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_last_updated']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_last_updated']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_last_updated']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_last_updated']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_last_updated']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_last_updated']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_hw_last_updated']['field_api_classes'] = 0;
  /* Field: Content: Wasserstand Status */
  $handler->display->display_options['fields']['field_hw_status']['id'] = 'field_hw_status';
  $handler->display->display_options['fields']['field_hw_status']['table'] = 'field_data_field_hw_status';
  $handler->display->display_options['fields']['field_hw_status']['field'] = 'field_hw_status';
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
  $handler->display->display_options['fields']['field_hw_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_status']['empty_zero'] = 0;
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
  $handler->display->display_options['fields']['field_hw_trend']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_trend']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_trend']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_trend']['empty_zero'] = 0;
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
  $handler->display->display_options['fields']['field_hw_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_hw_link']['field_api_classes'] = 0;
  /* Field: Content: Kennwert HQ1 */
  $handler->display->display_options['fields']['field_hw_wert_hq1']['id'] = 'field_hw_wert_hq1';
  $handler->display->display_options['fields']['field_hw_wert_hq1']['table'] = 'field_data_field_hw_wert_hq1';
  $handler->display->display_options['fields']['field_hw_wert_hq1']['field'] = 'field_hw_wert_hq1';
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['replace_spaces'] = 0;
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
  /* Field: Content: Gewässer */
  $handler->display->display_options['fields']['field_hw_gewaesser']['id'] = 'field_hw_gewaesser';
  $handler->display->display_options['fields']['field_hw_gewaesser']['table'] = 'field_data_field_hw_gewaesser';
  $handler->display->display_options['fields']['field_hw_gewaesser']['field'] = 'field_hw_gewaesser';
  $handler->display->display_options['fields']['field_hw_gewaesser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_gewaesser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_gewaesser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_gewaesser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_gewaesser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_gewaesser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_gewaesser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_gewaesser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_gewaesser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_gewaesser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_gewaesser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_gewaesser']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_gewaesser']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_gewaesser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_gewaesser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_gewaesser']['field_api_classes'] = 0;
  /* Field: Content: Kennwert HQ10 */
  $handler->display->display_options['fields']['field_hw_wert_hq10']['id'] = 'field_hw_wert_hq10';
  $handler->display->display_options['fields']['field_hw_wert_hq10']['table'] = 'field_data_field_hw_wert_hq10';
  $handler->display->display_options['fields']['field_hw_wert_hq10']['field'] = 'field_hw_wert_hq10';
  $handler->display->display_options['fields']['field_hw_wert_hq10']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq10']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_hw_wert_hq10']['field_api_classes'] = 0;
  /* Field: Content: Kennwert HQ100 */
  $handler->display->display_options['fields']['field_hw_wert_hq100']['id'] = 'field_hw_wert_hq100';
  $handler->display->display_options['fields']['field_hw_wert_hq100']['table'] = 'field_data_field_hw_wert_hq100';
  $handler->display->display_options['fields']['field_hw_wert_hq100']['field'] = 'field_hw_wert_hq100';
  $handler->display->display_options['fields']['field_hw_wert_hq100']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq100']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_hw_wert_hq100']['field_api_classes'] = 0;
  /* Field: Content: Kennwert HQ2 */
  $handler->display->display_options['fields']['field_hw_wert_hq2']['id'] = 'field_hw_wert_hq2';
  $handler->display->display_options['fields']['field_hw_wert_hq2']['table'] = 'field_data_field_hw_wert_hq2';
  $handler->display->display_options['fields']['field_hw_wert_hq2']['field'] = 'field_hw_wert_hq2';
  $handler->display->display_options['fields']['field_hw_wert_hq2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq2']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_hw_wert_hq2']['field_api_classes'] = 0;
  /* Field: Content: Kennwert HQ30 */
  $handler->display->display_options['fields']['field_hw_wert_hq30']['id'] = 'field_hw_wert_hq30';
  $handler->display->display_options['fields']['field_hw_wert_hq30']['table'] = 'field_data_field_hw_wert_hq30';
  $handler->display->display_options['fields']['field_hw_wert_hq30']['field'] = 'field_hw_wert_hq30';
  $handler->display->display_options['fields']['field_hw_wert_hq30']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq30']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_hw_wert_hq30']['field_api_classes'] = 0;
  /* Field: Content: Kennwert HQ5 */
  $handler->display->display_options['fields']['field_hw_wert_hq5']['id'] = 'field_hw_wert_hq5';
  $handler->display->display_options['fields']['field_hw_wert_hq5']['table'] = 'field_data_field_hw_wert_hq5';
  $handler->display->display_options['fields']['field_hw_wert_hq5']['field'] = 'field_hw_wert_hq5';
  $handler->display->display_options['fields']['field_hw_wert_hq5']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq5']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_hw_wert_hq5']['field_api_classes'] = 0;
  /* Field: Content: Kennwert MJNQ */
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['id'] = 'field_hw_wert_mjnq';
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['table'] = 'field_data_field_hw_wert_mjnq';
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['field'] = 'field_hw_wert_mjnq';
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_hw_wert_mjnq']['field_api_classes'] = 0;
  /* Field: Content: Kennwert MQ */
  $handler->display->display_options['fields']['field_hw_wert_mq']['id'] = 'field_hw_wert_mq';
  $handler->display->display_options['fields']['field_hw_wert_mq']['table'] = 'field_data_field_hw_wert_mq';
  $handler->display->display_options['fields']['field_hw_wert_mq']['field'] = 'field_hw_wert_mq';
  $handler->display->display_options['fields']['field_hw_wert_mq']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mq']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mq']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mq']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mq']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mq']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mq']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mq']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_mq']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_mq']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mq']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mq']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_mq']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_mq']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mq']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_mq']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_hw_wert_mq']['field_api_classes'] = 0;
  /* Field: Content: Kennwert RHHQ */
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['id'] = 'field_hw_wert_rhhq';
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['table'] = 'field_data_field_hw_wert_rhhq';
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['field'] = 'field_hw_wert_rhhq';
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_hw_wert_rhhq']['field_api_classes'] = 0;
  /* Field: Fields: Latitude */
  $handler->display->display_options['fields']['field_lat']['id'] = 'field_lat';
  $handler->display->display_options['fields']['field_lat']['table'] = 'field_data_field_lat';
  $handler->display->display_options['fields']['field_lat']['field'] = 'field_lat';
  $handler->display->display_options['fields']['field_lat']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lat']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lat']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lat']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lat']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lat']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lat']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lat']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_lat']['field_api_classes'] = 0;
  /* Field: Fields: Longitude */
  $handler->display->display_options['fields']['field_lng']['id'] = 'field_lng';
  $handler->display->display_options['fields']['field_lng']['table'] = 'field_data_field_lng';
  $handler->display->display_options['fields']['field_lng']['field'] = 'field_lng';
  $handler->display->display_options['fields']['field_lng']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lng']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lng']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lng']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lng']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lng']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lng']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lng']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_lng']['field_api_classes'] = 0;
  /* Field: Content: Parameter */
  $handler->display->display_options['fields']['field_hw_parameter']['id'] = 'field_hw_parameter';
  $handler->display->display_options['fields']['field_hw_parameter']['table'] = 'field_data_field_hw_parameter';
  $handler->display->display_options['fields']['field_hw_parameter']['field'] = 'field_hw_parameter';
  $handler->display->display_options['fields']['field_hw_parameter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_parameter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_parameter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_parameter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_parameter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_parameter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_parameter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_parameter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_parameter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_parameter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_parameter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_parameter']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_parameter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_parameter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_parameter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_parameter']['field_api_classes'] = 0;
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
  $handler->display->display_options['filters']['title']['expose']['required'] = FALSE;
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
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'messstellen-table';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Messstellen Table';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'messstellen-export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['hw_messstellen_table'] = array(
    t('Master'),
    t('Hochwasser Messstellen Table'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Messstelle'),
    t('Bezirk'),
    t('ID (dbmsnr)'),
    t('Wasserstand Aktuell'),
    t('Einheit'),
    t('Wasserstand Last Update'),
    t('Wasserstand Status'),
    t('Wasserstand Trend'),
    t('Link'),
    t('Kennwert HQ1'),
    t('Gewässer'),
    t('Kennwert HQ10'),
    t('Kennwert HQ100'),
    t('Kennwert HQ2'),
    t('Kennwert HQ30'),
    t('Kennwert HQ5'),
    t('Kennwert MJNQ'),
    t('Kennwert MQ'),
    t('Kennwert RHHQ'),
    t('Latitude'),
    t('Longitude'),
    t('Parameter'),
    t('Content: Type'),
    t('Suche'),
    t('Status'),
    t('Trend'),
    t('Page'),
    t('Data export'),
  );
  $export['hw_messstellen_table'] = $view;

  return $export;
}
