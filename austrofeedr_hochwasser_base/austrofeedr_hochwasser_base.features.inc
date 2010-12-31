<?php

/**
 * Implementation of hook_node_info().
 */
function austrofeedr_hochwasser_base_node_info() {
  $items = array(
    'af_messstelle' => array(
      'name' => t('AustroFeedr Messstelle'),
      'base' => 'node_content',
      'description' => t('Hochwasser Messstelle'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
