<?php
/**
 * @file
 * glacier_content_blocks_textarea.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function glacier_content_blocks_textarea_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function glacier_content_blocks_textarea_paragraphs_info() {
  $items = array(
    'textarea' => array(
      'name' => 'Textarea',
      'bundle' => 'textarea',
      'locked' => '1',
    ),
  );
  return $items;
}
