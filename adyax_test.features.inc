<?php
/**
 * @file
 * Features.
 */

/**
 * Implements hook_node_info().
 */
function adyax_test_node_info() {
  $items = array(
    'vimeo' => array(
      'name' => t('Vimeo'),
      'base' => 'node_content',
      'description' => t('It also contains a Vimeo field.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
