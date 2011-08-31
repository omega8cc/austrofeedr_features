<?php
/**
 * @file
 * austrofeedr_hochwasser_messstellen_import.views_default.inc
 */

/**
 * Implements hook_views_default_views().
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
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Messstellen Admin';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'status' => 'status',
    'entity_id_1' => 'entity_id_1',
    'title' => 'title',
    'entity_id' => 'entity_id',
    'field_hw_wert_aktuell' => 'field_hw_wert_aktuell',
    'field_hw_einheit' => 'field_hw_einheit',
    'changed' => 'changed',
    'entity_id_3' => 'entity_id_3',
    'entity_id_4' => 'entity_id_4',
    'field_lat' => 'field_lat',
    'field_lng' => 'field_lng',
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
  );
  $handler->display->display_options['style_options']['default'] = 'entity_id_1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
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
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['status']['not'] = 0;
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
  /* Field: Content: Wasserstand Aktuell */
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['id'] = 'field_hw_wert_aktuell';
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['table'] = 'field_data_field_hw_wert_aktuell';
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['field'] = 'field_hw_wert_aktuell';
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_aktuell']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_einheit']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_einheit']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_einheit']['field_api_classes'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* Field: Content: Wasserstand Status */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_hw_status';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_hw_status';
  /* Field: Content: Wasserstand Trend */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_hw_trend';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_hw_trend';
  /* Field: Field: Latitude */
  $handler->display->display_options['fields']['field_lat']['id'] = 'field_lat';
  $handler->display->display_options['fields']['field_lat']['table'] = 'field_data_field_lat';
  $handler->display->display_options['fields']['field_lat']['field'] = 'field_lat';
  $handler->display->display_options['fields']['field_lat']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lat']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lat']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lat']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lat']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lat']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lat']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lat']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lat']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lat']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_lat']['field_api_classes'] = 0;
  /* Field: Field: Longitude */
  $handler->display->display_options['fields']['field_lng']['id'] = 'field_lng';
  $handler->display->display_options['fields']['field_lng']['table'] = 'field_data_field_lng';
  $handler->display->display_options['fields']['field_lng']['field'] = 'field_lng';
  $handler->display->display_options['fields']['field_lng']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lng']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lng']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lng']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lng']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lng']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lng']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lng']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lng']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lng']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_lng']['field_api_classes'] = 0;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_hw_url']['id'] = 'field_hw_url';
  $handler->display->display_options['fields']['field_hw_url']['table'] = 'field_data_field_hw_url';
  $handler->display->display_options['fields']['field_hw_url']['field'] = 'field_hw_url';
  /* Field: Content: Kennwert HQ1 */
  $handler->display->display_options['fields']['field_hw_wert_hq1']['id'] = 'field_hw_wert_hq1';
  $handler->display->display_options['fields']['field_hw_wert_hq1']['table'] = 'field_data_field_hw_wert_hq1';
  $handler->display->display_options['fields']['field_hw_wert_hq1']['field'] = 'field_hw_wert_hq1';
  $handler->display->display_options['fields']['field_hw_wert_hq1']['label'] = 'Kennwert HQ10';
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_wert_hq1']['alter']['trim'] = 0;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hw_messstelle' => 'hw_messstelle',
  );
  /* Filter criterion: Content: Bezirk (field_hw_bezirk) */
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['id'] = 'field_hw_bezirk_tid';
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['table'] = 'field_data_field_hw_bezirk';
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['field'] = 'field_hw_bezirk_tid';
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['expose']['operator_id'] = 'field_hw_bezirk_tid_op';
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['expose']['label'] = 'Bezirk (field_hw_bezirk)';
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['expose']['operator'] = 'field_hw_bezirk_tid_op';
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['expose']['identifier'] = 'field_hw_bezirk_tid';
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['vocabulary'] = 'hw_austria';
  $handler->display->display_options['filters']['field_hw_bezirk_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'messstellen/admin';
  $export['hw_messstellen_admin'] = $view;

  return $export;
}
