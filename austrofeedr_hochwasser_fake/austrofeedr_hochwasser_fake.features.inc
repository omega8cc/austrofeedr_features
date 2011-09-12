<?php
/**
 * @file
 * austrofeedr_hochwasser_fake.features.inc
 */

/**
 * Implements hook_default_rules_link().
 */
function austrofeedr_hochwasser_fake_default_rules_link() {
  $items = array();
  $items['hw_fake_trigger'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Hochwasser Trigger",
      "link_type" : "token",
      "bundles" : { "fake_counter" : "fake_counter" },
      "entity_link" : 1
    },
    "name" : "hw_fake_trigger",
    "label" : "Hochwasser Fake Trigger",
    "path" : "hw_fake_trigger",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  return $items;
}
