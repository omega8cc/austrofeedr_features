<?php
/**
 * @file
 * austrofeedr_hochwasser_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function austrofeedr_hochwasser_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function austrofeedr_hochwasser_base_node_info() {
  $items = array(
    'hochwasser_update' => array(
      'name' => t('Hochwasser Update'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hw_messstelle' => array(
      'name' => t('Hochwasser Messstelle'),
      'base' => 'node_content',
      'description' => t('Hochwasser Messstelle'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
