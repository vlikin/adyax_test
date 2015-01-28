<?php
/**
 * @file
 * adyax_test.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function adyax_test_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
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
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_vimeo'
  $field_bases['field_vimeo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_vimeo',
    'foreign keys' => array(),
    'indexes' => array(
      'vimeo_code' => array(
        0 => 'vimeo_code',
      ),
    ),
    'locked' => 0,
    'module' => 'adyax_test',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'adyax_test_vimeo_code',
  );

  return $field_bases;
}
