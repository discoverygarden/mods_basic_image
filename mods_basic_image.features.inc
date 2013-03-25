<?php
/**
 * @file
 * mods_basic_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mods_basic_image_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mods_basic_image_node_info() {
  $items = array(
    'mods_image' => array(
      'name' => t('MODS Image'),
      'base' => 'node_content',
      'description' => t('Drupal content type representing the fields of the Islandora Basic Image MODS form.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
