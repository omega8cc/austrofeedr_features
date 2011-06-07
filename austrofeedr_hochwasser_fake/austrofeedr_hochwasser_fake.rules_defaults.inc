<?php
/**
 * @file
 * austrofeedr_hochwasser_fake.rules_defaults.inc
 */

/**
 * Implementation of hook_default_rules_configuration().
 */
function austrofeedr_hochwasser_fake_default_rules_configuration() {
  $items = array();
  $items['rules_hochwasser_fake_cleanup'] = entity_import('rules_config', '{ "rules_hochwasser_fake_cleanup" : {
      "LABEL" : "Hochwasser Fake Cleanup",
      "PLUGIN" : "action set",
      "REQUIRES" : [ "austrofeedr_hochwasser_fake" ],
      "ACTION SET" : [ { "austrofeedr_hochwasser_fake_cleanup" : [] } ]
    }
  }');
  $items['rules_hochwasser_fake_counter_corr'] = entity_import('rules_config', '{ "rules_hochwasser_fake_counter_corr" : {
      "LABEL" : "Hochwasser Fake Counter Corr",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules", "austrofeedr_hochwasser_fake" ],
      "USES VARIABLES" : {
        "counter" : { "label" : "Counter (0-5)", "type" : "integer" },
        "node" : { "label" : "Node", "type" : "node" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_hw_fake_counter" } },
        { "data_is" : {
            "data" : [ "node:field-hw-fake-counter" ],
            "op" : "\\u003e",
            "value" : "4"
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-hw-fake-counter" ], "value" : "0" } },
        { "austrofeedr_hochwasser_fake_cleanup" : [] }
      ],
      "PROVIDES VARIABLES" : [ "node" ]
    }
  }');
  $items['rules_hochwasser_fake_counter_trigger'] = entity_import('rules_config', '{ "rules_hochwasser_fake_counter_trigger" : {
      "LABEL" : "Hochwasser Fake Counter Trigger",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_view" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_hw_fake_counter" } }
      ],
      "DO" : [
        { "component_rules_hochwasser_fake_processor" : { "counter" : [ "node:field-hw-fake-counter" ] } },
        { "data_set" : {
            "data" : [ "node:field-hw-fake-counter" ],
            "value" : {
              "select" : "node:field-hw-fake-counter",
              "num_offset" : { "value" : "1" }
            }
          }
        },
        { "component_rules_hochwasser_fake_counter_corr" : {
            "USING" : { "counter" : [ "node:field-hw-fake-counter" ], "node" : [ "node" ] },
            "PROVIDE" : { "node" : { "node2" : "Node" } }
          }
        },
        { "entity_save" : { "data" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_hochwasser_fake_processor'] = entity_import('rules_config', '{ "rules_hochwasser_fake_processor" : {
      "LABEL" : "Hochwasser Fake Processor",
      "PLUGIN" : "action set",
      "REQUIRES" : [
        "austrofeedr_hochwasser_fake",
        "rules",
        "austrofeedr_hochwasser_pegelaktuell_import"
      ],
      "USES VARIABLES" : { "counter" : { "label" : "Counter (0-5)", "type" : "integer" } },
      "ACTION SET" : [
        { "austrofeedr_hochwasser_fake_creator" : {
            "USING" : { "entity" : [ "counter" ] },
            "PROVIDE" : { "result" : { "result" : "Pegelaktuell result" } }
          }
        },
        { "component_rules_hochwasser_result_processor" : { "pegelaktuell_result" : [ "result" ] } },
        { "af_rules_debug_action" : { "entity" : [ "counter" ] } }
      ]
    }
  }');
  return $items;
}
