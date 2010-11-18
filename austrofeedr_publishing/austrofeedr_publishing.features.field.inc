<?php

/**
 * Implementation of hook_field_default_fields().
 */
function austrofeedr_publishing_field_default_fields() {
  $fields = array();

  // Exported field: 'node-austrofeedr_subscription-body'
  $fields['node-austrofeedr_subscription-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        '0' => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          '0' => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'austrofeedr_subscription',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '-4',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-austrofeedr_subscription-field_geo_placeholder'
  $fields['node-austrofeedr_subscription-field_geo_placeholder'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_geo_placeholder',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          '0' => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'austrofeedr_subscription',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_geo_placeholder',
      'label' => 'Geo Position Placeholder',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '-1',
      ),
    ),
  );

  // Exported field: 'node-austrofeedr_subscription-field_subscription_delivery'
  $fields['node-austrofeedr_subscription-field_subscription_delivery'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_subscription_delivery',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          '0' => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => 'Web only
Server (configure IP ...)
Mobile (configure Number ...)',
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'austrofeedr_subscription',
      'default_value' => array(
        '0' => array(
          'value' => 'Web only',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_subscription_delivery',
      'label' => 'Delivery mode',
      'required' => 1,
      'settings' => array(),
      'widget' => array(
        'active' => 0,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-austrofeedr_subscription-field_subscription_tags'
  $fields['node-austrofeedr_subscription-field_subscription_tags'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_subscription_tags',
      'foreign keys' => array(),
      'indexes' => array(
        'tid' => array(
          '0' => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          '0' => array(
            'parent' => '0',
            'vocabulary' => 'austrofeedr_tags',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'austrofeedr_subscription',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
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
      'field_name' => 'field_subscription_tags',
      'label' => 'Subscription Tags',
      'required' => 0,
      'settings' => array(),
      'widget' => array(
        'active' => 0,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '-3',
      ),
    ),
  );

  // Exported field: 'node-austrofeedr_subscription-field_subscription_tags_in'
  $fields['node-austrofeedr_subscription-field_subscription_tags_in'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_subscription_tags_in',
      'foreign keys' => array(),
      'indexes' => array(
        'tid' => array(
          '0' => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          '0' => array(
            'parent' => '0',
            'vocabulary' => 'austrofeedr_tags_in',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'austrofeedr_subscription',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_subscription_tags_in',
      'label' => 'Additional unprocesses subscription tags',
      'required' => 0,
      'settings' => array(),
      'widget' => array(
        'active' => 0,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '-2',
      ),
    ),
  );

  return $fields;
}
