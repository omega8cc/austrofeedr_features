<?php
/**
 * @file
 * austrofeedr_about_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function austrofeedr_about_feature_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'af_about_feature_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AustroFeedr About Feature Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'field_af_feature_category';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_af_feature_category']['id'] = 'field_af_feature_category';
  $handler->display->display_options['fields']['field_af_feature_category']['table'] = 'field_data_field_af_feature_category';
  $handler->display->display_options['fields']['field_af_feature_category']['field'] = 'field_af_feature_category';
  $handler->display->display_options['fields']['field_af_feature_category']['label'] = '';
  $handler->display->display_options['fields']['field_af_feature_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_af_feature_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_af_feature_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_af_feature_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_af_feature_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_af_feature_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_af_feature_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_af_feature_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_af_feature_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_af_feature_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_af_feature_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_af_feature_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_af_feature_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_af_feature_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_af_feature_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_af_feature_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_af_feature_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_af_feature_category']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_af_feature_category']['field_api_classes'] = 0;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_af_feature_image']['id'] = 'field_af_feature_image';
  $handler->display->display_options['fields']['field_af_feature_image']['table'] = 'field_data_field_af_feature_image';
  $handler->display->display_options['fields']['field_af_feature_image']['field'] = 'field_af_feature_image';
  $handler->display->display_options['fields']['field_af_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_af_feature_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_af_feature_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_af_feature_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_af_feature_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_af_feature_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_af_feature_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_af_feature_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_af_feature_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_af_feature_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_af_feature_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_af_feature_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_af_feature_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_af_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_af_feature_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_af_feature_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_af_feature_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_af_feature_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_af_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_af_feature_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_af_feature_image']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_af_feature_link']['id'] = 'field_af_feature_link';
  $handler->display->display_options['fields']['field_af_feature_link']['table'] = 'field_data_field_af_feature_link';
  $handler->display->display_options['fields']['field_af_feature_link']['field'] = 'field_af_feature_link';
  $handler->display->display_options['fields']['field_af_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_af_feature_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_af_feature_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_af_feature_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_af_feature_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_af_feature_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_af_feature_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_af_feature_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_af_feature_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_af_feature_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_af_feature_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_af_feature_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_af_feature_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_af_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_af_feature_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_af_feature_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_af_feature_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_af_feature_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_af_feature_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_af_feature_link']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_af_feature_link']['field_api_classes'] = 0;
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
    'austrofeedr_about_feature' => 'austrofeedr_about_feature',
  );
  $export['af_about_feature_listing'] = $view;

  return $export;
}
