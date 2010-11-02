<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function austrofeedr_aggregation_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-subscriptions
  $menus['menu-subscriptions'] = array(
    'menu_name' => 'menu-subscriptions',
    'title' => 'AustroFeedr Subscriptions',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('AustroFeedr Subscriptions');


  return $menus;
}
