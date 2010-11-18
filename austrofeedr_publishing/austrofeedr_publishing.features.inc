<?php

/**
 * Implementation of hook_node_info().
 */
function austrofeedr_publishing_node_info() {
  $items = array(
    'austrofeedr_subscription' => array(
      'name' => t('AustroFeedr Subscription'),
      'base' => 'node_content',
      'description' => t('A user-customized subscription with conditions which specify the a users field of interest.'),
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
function austrofeedr_publishing_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
