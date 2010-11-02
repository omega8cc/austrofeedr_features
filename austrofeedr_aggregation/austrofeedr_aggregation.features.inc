<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function austrofeedr_aggregation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function austrofeedr_aggregation_node_info() {
  $items = array(
    'austrofeedr_update' => array(
      'name' => t('AustroFeedr Update'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
