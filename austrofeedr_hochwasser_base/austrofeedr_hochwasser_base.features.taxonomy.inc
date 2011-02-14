<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function austrofeedr_hochwasser_base_taxonomy_default_vocabularies() {
  return array(
    'hw_austria' => array(
      'name' => 'Austria',
      'machine_name' => 'hw_austria',
      'description' => '',
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
