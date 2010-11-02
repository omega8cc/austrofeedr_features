<?php

/**
 * Implementation of hook_views_default_views().
 */
function austrofeedr_publishing2_views_default_views() {
  $views = array();

  // Exported view: austrofeedr_updates
  $view = new view;
  $view->name = 'austrofeedr_updates';
  $view->description = '';
  $view->tag = 'austrofeedr';
  $view->base_table = 'node';
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entity_id' => 'entity_id',
    'entity_id_1' => 'entity_id_1',
    'entity_id_2' => 'entity_id_2',
    'entity_id_3' => 'entity_id_3',
    'title' => 'title',
    'changed' => 'changed',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entity_id' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'entity_id_3' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'timestamp' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: Node: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* Field: Node revision: Created date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Fields: field_austrofeedr_tags */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_austrofeedr_tags';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'entity_id';
  /* Field: Fields: field_austrofeedr_in_tags */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_austrofeedr_in_tags';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'entity_id';
  /* Field: Fields: field_austrofeedr_author */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_austrofeedr_author';
  $handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
  /* Field: Fields: field_austrofeedr_item_url */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_austrofeedr_item_url';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'entity_id';
  /* Field: Feeds item: Import date */
  $handler->display->display_options['fields']['imported']['id'] = 'imported';
  $handler->display->display_options['fields']['imported']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['imported']['field'] = 'imported';
  $handler->display->display_options['fields']['imported']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['imported']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['imported']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['html'] = 0;
  $handler->display->display_options['fields']['imported']['hide_empty'] = 0;
  $handler->display->display_options['fields']['imported']['empty_zero'] = 0;
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['guid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['guid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['guid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['guid']['empty_zero'] = 0;
  /* Field: Feeds item: Item URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['url']['display_as_link'] = 1;
  /* Field: Feeds item: Owner feed nid */
  $handler->display->display_options['fields']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['feed_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['feed_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['feed_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['feed_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['feed_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['feed_nid']['format_plural'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'austrofeedr_update' => 'austrofeedr_update',
  );
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'updates';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Updates';
  $handler->display->display_options['menu']['weight'] = '0';

  $views[$view->name] = $view;

  return $views;
}
