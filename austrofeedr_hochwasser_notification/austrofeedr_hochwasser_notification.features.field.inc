<?php
/**
 * @file
 * austrofeedr_hochwasser_notification.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function austrofeedr_hochwasser_notification_field_default_fields() {
  $fields = array();

  // Exported field: 'message-austrofeedr_hochwasser_notification-field_hw_messstelle'
  $fields['message-austrofeedr_hochwasser_notification-field_hw_messstelle'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_hw_messstelle',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'article' => 0,
          'hw_messstelle' => 'hw_messstelle',
          'page' => 0,
          'subscription_feed' => 0,
          'update' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'austrofeedr_hochwasser_notification',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'node_reference',
          'settings' => array(
            'node_reference_view_mode' => 'teaser',
          ),
          'type' => 'node_reference_node',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'message',
      'field_name' => 'field_hw_messstelle',
      'label' => 'Messstelle',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Messstelle');

  return $fields;
}
