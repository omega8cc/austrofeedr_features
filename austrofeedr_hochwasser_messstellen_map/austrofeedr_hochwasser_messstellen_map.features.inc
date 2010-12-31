<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function austrofeedr_hochwasser_messstellen_map_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_presets") {
    return array("version" => 1);
  }
  elseif ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function austrofeedr_hochwasser_messstellen_map_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
