<?php
/**
 * @file
 * austrofeedr_base_admin.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function austrofeedr_base_admin_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}
