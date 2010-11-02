<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function austrofeedr_aggregation_taxonomy_default_vocabularies() {
  return array(
    'austrofeedr_tags_in' => array(
      'name' => 'Austrofeedr Incoming Tags',
      'machine_name' => 'austrofeedr_tags_in',
      'description' => 'Incoming tags from austrofeedr aggregation sources',
      'hierarchy' => '0',
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
