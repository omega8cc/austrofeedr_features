<?php
/**
 * @file
 * austrofeedr_base_admin.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function austrofeedr_base_admin_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'updates_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Updates Admin';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Updates Admin';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 50, 100, 500';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['style_plugin'] = 'bulk';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
    'changed' => 'changed',
    'field_update_subscription_tags' => 'field_update_subscription_tags',
    'field_update_tags' => 'field_update_tags',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title_1' => array(
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
    'field_update_subscription_tags' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_update_tags' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['selected_operations'] = array(
    'views_bulk_operations_delete_node_action' => 'views_bulk_operations_delete_node_action',
    'node_assign_owner_action' => 0,
    'node_mass_update:a27b9efabcd054685a549378b174ad11' => 0,
    'system_message_action' => 0,
    'views_bulk_operations_action' => 0,
    'views_bulk_operations_script_action' => 0,
    'node_make_sticky_action' => 0,
    'node_make_unsticky_action' => 0,
    'node_mass_update:8ce21b08bb8e773d10018b484fe4815e' => 0,
    'node_mass_update:c4d3b28efb86fd703619a50b74d43794' => 0,
    'views_bulk_operations_taxonomy_action' => 0,
    'views_bulk_operations_argument_selector_action' => 0,
    'node_promote_action' => 0,
    'node_mass_update:14de7d028b4bffdf2b4a266562ca18ac' => 0,
    'node_publish_action' => 0,
    'node_mass_update:9c585624b9b3af0b4687d5f97f35e047' => 0,
    'system_goto_action' => 0,
    'node_unpromote_action' => 0,
    'node_save_action' => 0,
    'system_send_email_action' => 0,
    'node_unpublish_action' => 0,
    'node_unpublish_by_keyword_action' => 0,
    'node_mass_update:0ccad85c1ebe4c9ceada1aa64293b080' => 0,
  );
  $handler->display->display_options['style_options']['execution_type'] = '1';
  $handler->display->display_options['style_options']['display_type'] = '0';
  $handler->display->display_options['style_options']['skip_confirmation'] = 0;
  $handler->display->display_options['style_options']['display_result'] = 1;
  $handler->display->display_options['style_options']['merge_single_action'] = 1;
  $handler->display->display_options['style_options']['hide_select_all'] = 0;
  /* Relationship: Feeds item: Owner feed */
  $handler->display->display_options['relationships']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['relationships']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['relationships']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['relationships']['feed_nid']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  /* Field: Content: Subscription Tags */
  $handler->display->display_options['fields']['field_update_subscription_tags']['id'] = 'field_update_subscription_tags';
  $handler->display->display_options['fields']['field_update_subscription_tags']['table'] = 'field_data_field_update_subscription_tags';
  $handler->display->display_options['fields']['field_update_subscription_tags']['field'] = 'field_update_subscription_tags';
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_update_subscription_tags']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_update_subscription_tags']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['click_sort_column'] = 'tid';
  $handler->display->display_options['fields']['field_update_subscription_tags']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_update_subscription_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_update_subscription_tags']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_update_subscription_tags']['field_api_classes'] = 0;
  /* Field: Content: Update Tags */
  $handler->display->display_options['fields']['field_update_tags']['id'] = 'field_update_tags';
  $handler->display->display_options['fields']['field_update_tags']['table'] = 'field_data_field_update_tags';
  $handler->display->display_options['fields']['field_update_tags']['field'] = 'field_update_tags';
  $handler->display->display_options['fields']['field_update_tags']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_update_tags']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_update_tags']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_update_tags']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_update_tags']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['click_sort_column'] = 'tid';
  $handler->display->display_options['fields']['field_update_tags']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_update_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_update_tags']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_update_tags']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'update' => 'update',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Subscription Tags';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'subscription_tags';
  $handler->display->display_options['filters']['tid']['error_message'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Update Tags';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'update_tags';
  $handler->display->display_options['filters']['tid_1']['error_message'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'feed_nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Feed';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'updates-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Updates Admin';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['updates_admin'] = array(
    t('Master'),
    t('Updates Admin'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Owner feed'),
    t('Feed'),
    t('Updated date'),
    t('Subscription Tags'),
    t('Update Tags'),
    t('Page'),
  );
  $export['updates_admin'] = $view;

  return $export;
}
