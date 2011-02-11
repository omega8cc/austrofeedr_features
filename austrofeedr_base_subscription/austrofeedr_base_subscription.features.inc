<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function austrofeedr_base_subscription_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function austrofeedr_base_subscription_node_info() {
  $items = array(
    'subscription_feed' => array(
      'name' => t('AustroFeedr Subscription Feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function austrofeedr_base_subscription_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
