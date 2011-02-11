<?php

/**
 * Implementation of hook_default_rules_configuration().
 */
function austrofeedr_base_processing_autotag_default_rules_configuration() {
  $items = array();
  $items['processing_autotag'] = entity_import('rules_config', '{ "processing_autotag" : {
      "LABEL" : "processing_autotag_updates",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_update_tags" } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "taxonomy_vocabulary", "id" : "2" },
            "PROVIDE" : { "entity_fetched" : { "voc" : "Vocabulary" } }
          }
        },
        { "component_rules_autotag_tag" : {
            "text" : [ "node:body:value" ],
            "vocabulary" : [ "voc" ],
            "target_terms" : [ "node:field-update-tags" ]
          }
        }
      ]
    }
  }');
  return $items;
}
