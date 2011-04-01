<?php
/**
 * @file
 * austrofeedr_hochwasser_messstellen_list.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function austrofeedr_hochwasser_messstellen_list_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}
