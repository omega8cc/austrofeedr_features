<?php

/**
 * Implementation of hook_default_rules_configuration().
 */
function austrofeedr_processing_default_rules_configuration() {
  $items = array(
    'rules_austrofeedr_update_processor' => array(
  'rules_austrofeedr_update_processor' => array(
    'LABEL' => 'AustroFeedr Update Processor',
    'PLUGIN' => 'reaction rule',
    'REQUIRES' => array(
      '0' => 'rules',
    ),
    'ON' => array(
      '0' => 'node_presave',
    ),
    'IF' => array(
      '0' => array(
        'node_is_of_type' => array(
          'node' => array(
            '0' => 'node',
          ),
          'type' => array(
            'austrofeedr_update' => 'austrofeedr_update',
          ),
        ),
      ),
    ),
    'DO' => array(
      '0' => array(
        'data_set' => array(
          'data' => array(
            '0' => 'node:field-austrofeedr-tags',
          ),
          'value' => array(
            '0' => 'node:field-austrofeedr-in-tags',
          ),
        ),
      ),
    ),
  ),
),
  );
  return $items;
}
