<?php

/**
 * Implementation of hook_field_default_fields().
 */
function austrofeedr_base_aggregation_field_default_fields() {
  $fields = array();

  // Exported field: 'node-austrofeedr_feed-body'
  $fields['node-austrofeedr_feed-body'] = array(
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
      'bundle' => 'austrofeedr_feed',
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
        'user_register_form' => FALSE,
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

  // Exported field: 'node-austrofeedr_feed-field_austrofeedr_tags'
  $fields['node-austrofeedr_feed-field_austrofeedr_tags'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_austrofeedr_tags',
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
      'bundle' => 'austrofeedr_feed',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'These tags will be automatically applied to updates from this subscription.',
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
      'field_name' => 'field_austrofeedr_tags',
      'label' => 'Predefined Tags',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '-2',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-austrofeedr_tags_in-field_related_austrofeedr_tags'
  $fields['taxonomy_term-austrofeedr_tags_in-field_related_austrofeedr_tags'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_related_austrofeedr_tags',
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
      'bundle' => 'austrofeedr_tags_in',
      'default_value' => array(
        '0' => array(
          'description' => '',
          'field_internal_terms' => array(),
          'format' => 'filtered_html',
          'name' => 'Tech',
          'rdf_mapping' => array(
            'description' => array(
              'predicates' => array(
                '0' => 'skos:definition',
              ),
            ),
            'name' => array(
              'predicates' => array(
                '0' => 'rdfs:label',
                '1' => 'skos:prefLabel',
              ),
            ),
            'parent' => array(
              'predicates' => array(
                '0' => 'skos:broader',
              ),
              'type' => 'rel',
            ),
            'rdftype' => array(
              '0' => 'skos:Concept',
            ),
            'vid' => array(
              'predicates' => array(
                '0' => 'skos:inScheme',
              ),
              'type' => 'rel',
            ),
          ),
          'tid' => '95',
          'vid' => '3',
          'vocabulary_machine_name' => 'austrofeedr_tags',
          'weight' => '8',
        ),
      ),
      'deleted' => '0',
      'description' => 'Assign which internal tags should be assigned by the Basic Term Processor if an incoming update has this specific tag or any of its sub-tags.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_related_austrofeedr_tags',
      'label' => 'Internal terms to assign',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '1',
      ),
    ),
  );

  return $fields;
}