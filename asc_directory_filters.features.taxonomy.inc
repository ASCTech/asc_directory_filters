<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function asc_directory_filters_taxonomy_default_vocabularies() {
  return array(
    'appointments' => array(
      'name' => 'Appointments',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '1',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_appointment',
      'weight' => '0',
      'nodes' => array(
        'qs_people' => 'qs_people',
      ),
    ),
    'interests' => array(
      'name' => 'Interests',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_appointments',
      'weight' => '0',
      'nodes' => array(
        'qs_people' => 'qs_people',
      ),
    ),
  );
}
