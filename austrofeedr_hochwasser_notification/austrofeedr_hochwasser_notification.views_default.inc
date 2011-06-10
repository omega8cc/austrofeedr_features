<?php
/**
 * @file
 * austrofeedr_hochwasser_notification.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function austrofeedr_hochwasser_notification_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'hochwasser_notifications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'Hochwasser Notifications';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hochwasser Notifications';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'mid' => 'mid',
    'field_hw_messstelle' => 'field_hw_messstelle',
    'name' => 'name',
    'message_render' => 'message_render',
    'timestamp' => 'timestamp',
    'uid' => 'uid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'mid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_hw_messstelle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'message_render' => array(
      'align' => '',
      'separator' => '',
    ),
    'timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Message: Message ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  /* Field: Message: Messstelle */
  $handler->display->display_options['fields']['field_hw_messstelle']['id'] = 'field_hw_messstelle';
  $handler->display->display_options['fields']['field_hw_messstelle']['table'] = 'field_data_field_hw_messstelle';
  $handler->display->display_options['fields']['field_hw_messstelle']['field'] = 'field_hw_messstelle';
  $handler->display->display_options['fields']['field_hw_messstelle']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_messstelle']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_messstelle']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_messstelle']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_messstelle']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_messstelle']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hw_messstelle']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_messstelle']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_messstelle']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_messstelle']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_messstelle']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_messstelle']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_messstelle']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_messstelle']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_messstelle']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_messstelle']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_messstelle']['field_api_classes'] = 0;
  /* Field: Message: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'message';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
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
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim_whitespace'] = 0;
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
  $handler->display->display_options['fields']['timestamp']['format_plural'] = 0;
  /* Field: Message: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'message';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['format_plural'] = 0;
  /* Field: Message: Alter Status */
  $handler->display->display_options['fields']['field_hw_status_alt']['id'] = 'field_hw_status_alt';
  $handler->display->display_options['fields']['field_hw_status_alt']['table'] = 'field_data_field_hw_status_alt';
  $handler->display->display_options['fields']['field_hw_status_alt']['field'] = 'field_hw_status_alt';
  $handler->display->display_options['fields']['field_hw_status_alt']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_status_alt']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_status_alt']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_status_alt']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_status_alt']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_status_alt']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hw_status_alt']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_status_alt']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_status_alt']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_status_alt']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_status_alt']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_status_alt']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_status_alt']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_status_alt']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_status_alt']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_status_alt']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_status_alt']['field_api_classes'] = 0;
  /* Field: Message: Neuer Status */
  $handler->display->display_options['fields']['field_hw_status_neu']['id'] = 'field_hw_status_neu';
  $handler->display->display_options['fields']['field_hw_status_neu']['table'] = 'field_data_field_hw_status_neu';
  $handler->display->display_options['fields']['field_hw_status_neu']['field'] = 'field_hw_status_neu';
  $handler->display->display_options['fields']['field_hw_status_neu']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hw_status_neu']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hw_status_neu']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hw_status_neu']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hw_status_neu']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hw_status_neu']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hw_status_neu']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hw_status_neu']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hw_status_neu']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hw_status_neu']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hw_status_neu']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hw_status_neu']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hw_status_neu']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hw_status_neu']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hw_status_neu']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hw_status_neu']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hw_status_neu']['field_api_classes'] = 0;
  /* Sort criterion: Message: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter criterion: Message: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'message';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['value'] = array(
    'austrofeedr_hochwasser_notification' => 'austrofeedr_hochwasser_notification',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'hochwasser-notifications';
  $export['hochwasser_notifications'] = $view;

  return $export;
}
