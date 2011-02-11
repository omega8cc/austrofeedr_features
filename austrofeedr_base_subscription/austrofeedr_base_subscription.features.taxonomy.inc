<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function austrofeedr_base_subscription_taxonomy_default_vocabularies() {
  return array(
    'update_tags_in' => array(
      'name' => 'Austrofeedr Incoming Tags',
      'machine_name' => 'update_tags_in',
      'description' => 'Incoming tags from austrofeedr aggregation sources',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          '0' => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            '0' => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            '0' => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
