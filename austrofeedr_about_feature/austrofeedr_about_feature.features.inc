<?php
/**
 * @file
 * austrofeedr_about_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function austrofeedr_about_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function austrofeedr_about_feature_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function austrofeedr_about_feature_node_info() {
  $items = array(
    'austrofeedr_about_feature' => array(
      'name' => t('AustroFeedr About Feature'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
