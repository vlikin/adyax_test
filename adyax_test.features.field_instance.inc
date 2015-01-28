<?php
/**
 * @file
 * adyax_test.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function adyax_test_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-vimeo-body'
  $field_instances['node-vimeo-body'] = array(
    'bundle' => 'vimeo',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-vimeo-field_vimeo'
  $field_instances['node-vimeo-field_vimeo'] = array(
    'bundle' => 'vimeo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'adyax_test',
        'settings' => array(),
        'type' => 'adyax_test_vimeo_video',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'adyax_test',
        'settings' => array(
          'image_style' => 'medium',
        ),
        'type' => 'adyax_test_vimeo_thumbnail',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_vimeo',
    'label' => 'vimeo',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'adyax_test',
      'settings' => array(),
      'type' => 'adyax_test_video_code',
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('vimeo');

  return $field_instances;
}
