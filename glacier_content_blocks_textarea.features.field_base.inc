<?php
/**
 * @file
 * glacier_content_blocks_textarea.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function glacier_content_blocks_textarea_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_pg_textarea_textarea'
  $field_bases['field_pg_textarea_textarea'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pg_textarea_textarea',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
