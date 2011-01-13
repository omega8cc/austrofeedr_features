<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function austrofeedr_base_common_taxonomy_default_vocabularies() {
  return array(
    'austrofeedr_tags' => array(
      'name' => 'Austrofeedr Tags',
      'machine_name' => 'austrofeedr_tags',
      'description' => 'Tags set by austrofeedr processing',
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
