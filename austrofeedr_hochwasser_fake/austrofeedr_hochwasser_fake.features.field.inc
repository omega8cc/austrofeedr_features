<?php
/**
 * @file
 * austrofeedr_hochwasser_fake.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function austrofeedr_hochwasser_fake_field_default_fields() {
  $fields = array();

  // Exported field: 'node-austrofeedr_fake_counter-field_hw_fake_counter'
  $fields['node-austrofeedr_fake_counter-field_hw_fake_counter'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_hw_fake_counter',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'austrofeedr_fake_counter',
      'default_value' => array(
        0 => array(
          'value' => '0',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_hw_fake_counter',
      'label' => 'AustroFeedr Hochwasser Fake Counter',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '-3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AustroFeedr Hochwasser Fake Counter');

  return $fields;
}
