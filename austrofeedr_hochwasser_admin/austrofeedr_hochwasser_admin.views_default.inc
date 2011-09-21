<?php
/**
 * @file
 * austrofeedr_hochwasser_admin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function austrofeedr_hochwasser_admin_views_default_views() {
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
  /* Field: Taxonomy term: Latitude */
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
  /* Field: Taxonomy term: Longitude */
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
  /* Field: Broken/missing handler */
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

  $view = new view;
  $view->name = 'hw_updates_editor';
  $view->description = 'Emulates the Drupal content administration page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hochwasser Updates Editor';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'timestamp' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'edit_node' => 'edit_node',
    'changed' => 'changed',
    'field_update_subscription_tags' => 'field_update_subscription_tags',
    'field_update_tags' => 'field_update_tags',
    'title_1' => 'title_1',
    'feed_nid' => 'feed_nid',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_update_subscription_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_update_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'feed_nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No content available.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Feeds item: Owner feed */
  $handler->display->display_options['relationships']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['relationships']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['relationships']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['relationships']['feed_nid']['required'] = 0;
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
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
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'node_assign_owner_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 1,
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
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_hochwasser_pegelaktuell_item_expiry_processor' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_hw_update_bezirke' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_hw_update_import_postprocessor' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_hw_update_processor' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 1,
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
      'selected' => 1,
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
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_link_set_hw_fake_trigger' => array(
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
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'New?';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['link_to_node'] = 0;
  $handler->display->display_options['fields']['timestamp']['comments'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
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
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Subscription Tags */
  $handler->display->display_options['fields']['field_update_subscription_tags']['id'] = 'field_update_subscription_tags';
  $handler->display->display_options['fields']['field_update_subscription_tags']['table'] = 'field_data_field_update_subscription_tags';
  $handler->display->display_options['fields']['field_update_subscription_tags']['field'] = 'field_update_subscription_tags';
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_update_subscription_tags']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_update_subscription_tags']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_update_subscription_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_update_subscription_tags']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['field_api_classes'] = 0;
  /* Field: Content: Update tags */
  $handler->display->display_options['fields']['field_update_tags']['id'] = 'field_update_tags';
  $handler->display->display_options['fields']['field_update_tags']['table'] = 'field_data_field_update_tags';
  $handler->display->display_options['fields']['field_update_tags']['field'] = 'field_update_tags';
  $handler->display->display_options['fields']['field_update_tags']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_update_tags']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_update_tags']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_update_tags']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_update_tags']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_update_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_update_tags']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'feed_nid';
  $handler->display->display_options['fields']['title_1']['label'] = 'Feed';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Feeds item: Owner feed nid */
  $handler->display->display_options['fields']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['feed_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['feed_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['feed_nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['feed_nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['feed_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['feed_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['feed_nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['feed_nid']['separator'] = '';
  $handler->display->display_options['fields']['feed_nid']['format_plural'] = 0;
  /* Field: Content: Bezirk */
  $handler->display->display_options['fields']['field_hw_update_bezirk']['id'] = 'field_hw_update_bezirk';
  $handler->display->display_options['fields']['field_hw_update_bezirk']['table'] = 'field_data_field_hw_update_bezirk';
  $handler->display->display_options['fields']['field_hw_update_bezirk']['field'] = 'field_hw_update_bezirk';
  $handler->display->display_options['fields']['field_hw_update_bezirk']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hw_update_bezirk']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_hw_update_bezirk']['field_api_classes'] = 0;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 0;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title contains';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = 'All';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  $handler->display->display_options['filters']['promote']['exposed'] = TRUE;
  $handler->display->display_options['filters']['promote']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['promote']['expose']['label'] = 'Promoted';
  $handler->display->display_options['filters']['promote']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['promote']['expose']['operator'] = 'promote_op';
  $handler->display->display_options['filters']['promote']['expose']['identifier'] = 'promote';
  $handler->display->display_options['filters']['promote']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = 'between';
  $handler->display->display_options['filters']['changed']['value']['min'] = '1950-01-01';
  $handler->display->display_options['filters']['changed']['value']['max'] = '2020-01-01';
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated date';
  $handler->display->display_options['filters']['changed']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Subscription Tags (field_update_subscription_tags) */
  $handler->display->display_options['filters']['field_update_subscription_tags_tid']['id'] = 'field_update_subscription_tags_tid';
  $handler->display->display_options['filters']['field_update_subscription_tags_tid']['table'] = 'field_data_field_update_subscription_tags';
  $handler->display->display_options['filters']['field_update_subscription_tags_tid']['field'] = 'field_update_subscription_tags_tid';
  $handler->display->display_options['filters']['field_update_subscription_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_update_subscription_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_update_subscription_tags_tid']['expose']['operator_id'] = 'field_update_subscription_tags_tid_op';
  $handler->display->display_options['filters']['field_update_subscription_tags_tid']['expose']['label'] = 'Subscription Tags';
  $handler->display->display_options['filters']['field_update_subscription_tags_tid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['field_update_subscription_tags_tid']['expose']['operator'] = 'field_update_subscription_tags_tid_op';
  $handler->display->display_options['filters']['field_update_subscription_tags_tid']['expose']['identifier'] = 'field_update_subscription_tags_tid';
  $handler->display->display_options['filters']['field_update_subscription_tags_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_update_subscription_tags_tid']['vocabulary'] = 'subscription_tags';
  $handler->display->display_options['filters']['field_update_subscription_tags_tid']['error_message'] = 1;
  /* Filter criterion: Content: Update tags (field_update_tags) */
  $handler->display->display_options['filters']['field_update_tags_tid']['id'] = 'field_update_tags_tid';
  $handler->display->display_options['filters']['field_update_tags_tid']['table'] = 'field_data_field_update_tags';
  $handler->display->display_options['filters']['field_update_tags_tid']['field'] = 'field_update_tags_tid';
  $handler->display->display_options['filters']['field_update_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_update_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_update_tags_tid']['expose']['operator_id'] = 'field_update_tags_tid_op';
  $handler->display->display_options['filters']['field_update_tags_tid']['expose']['label'] = 'Update tags';
  $handler->display->display_options['filters']['field_update_tags_tid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['field_update_tags_tid']['expose']['operator'] = 'field_update_tags_tid_op';
  $handler->display->display_options['filters']['field_update_tags_tid']['expose']['identifier'] = 'field_update_tags_tid';
  $handler->display->display_options['filters']['field_update_tags_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_update_tags_tid']['vocabulary'] = 'update_tags';
  $handler->display->display_options['filters']['field_update_tags_tid']['error_message'] = 1;
  /* Filter criterion: Feeds item: Owner feed nid */
  $handler->display->display_options['filters']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['feed_nid']['expose']['operator_id'] = 'feed_nid_op';
  $handler->display->display_options['filters']['feed_nid']['expose']['label'] = 'Owner feed nid';
  $handler->display->display_options['filters']['feed_nid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['feed_nid']['expose']['operator'] = 'feed_nid_op';
  $handler->display->display_options['filters']['feed_nid']['expose']['identifier'] = 'feed_nid';
  $handler->display->display_options['filters']['feed_nid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['feed_nid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['feed_nid']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Bezirk (field_hw_update_bezirk) */
  $handler->display->display_options['filters']['field_hw_update_bezirk_tid']['id'] = 'field_hw_update_bezirk_tid';
  $handler->display->display_options['filters']['field_hw_update_bezirk_tid']['table'] = 'field_data_field_hw_update_bezirk';
  $handler->display->display_options['filters']['field_hw_update_bezirk_tid']['field'] = 'field_hw_update_bezirk_tid';
  $handler->display->display_options['filters']['field_hw_update_bezirk_tid']['value'] = '';
  $handler->display->display_options['filters']['field_hw_update_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_hw_update_bezirk_tid']['expose']['operator_id'] = 'field_hw_update_bezirk_tid_op';
  $handler->display->display_options['filters']['field_hw_update_bezirk_tid']['expose']['label'] = 'Bezirk (field_hw_update_bezirk)';
  $handler->display->display_options['filters']['field_hw_update_bezirk_tid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['field_hw_update_bezirk_tid']['expose']['operator'] = 'field_hw_update_bezirk_tid_op';
  $handler->display->display_options['filters']['field_hw_update_bezirk_tid']['expose']['identifier'] = 'field_hw_update_bezirk_tid';
  $handler->display->display_options['filters']['field_hw_update_bezirk_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_hw_update_bezirk_tid']['vocabulary'] = 'hw_austria';
  $handler->display->display_options['filters']['field_hw_update_bezirk_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/hw_updates_editor';
  $export['hw_updates_editor'] = $view;

  return $export;
}
