<?php
/**
 * @file
 * osha_esener.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function osha_esener_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-esener-field_code'
  $field_instances['taxonomy_term-esener-field_code'] = array(
    'bundle' => 'esener',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_code',
    'label' => 'Code',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Code');

  return $field_instances;
}
