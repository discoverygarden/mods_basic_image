<?php
/**
 * @file
 * mods_basic_image.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mods_basic_image_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cartographics|node|mods_image|form';
  $field_group->group_name = 'group_cartographics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mods_image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_subject';
  $field_group->data = array(
    'label' => 'Cartographics',
    'weight' => '19',
    'children' => array(
      0 => 'field_coordinates',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cartographics|node|mods_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geographic_information|node|mods_image|form';
  $field_group->group_name = 'group_geographic_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mods_image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_subject';
  $field_group->data = array(
    'label' => 'Geographic Information',
    'weight' => '18',
    'children' => array(
      0 => 'field_continent',
      1 => 'field_geo_country',
      2 => 'field_province',
      3 => 'field_region',
      4 => 'field_county',
      5 => 'field_city',
      6 => 'field_city_section',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_geographic_information|node|mods_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_origin_information|node|mods_image|form';
  $field_group->group_name = 'group_origin_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mods_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Origin Information',
    'weight' => '7',
    'children' => array(
      0 => 'field_date_issued',
      1 => 'field_publisher',
      2 => 'field_country',
      3 => 'field_place',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_origin_information|node|mods_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_physical_description|node|mods_image|form';
  $field_group->group_name = 'group_physical_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mods_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Physical Description',
    'weight' => '14',
    'children' => array(
      0 => 'field_form',
      1 => 'field_extent',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_physical_description|node|mods_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subject|node|mods_image|form';
  $field_group->group_name = 'group_subject';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mods_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subject',
    'weight' => '17',
    'children' => array(
      0 => 'field_topic',
      1 => 'field_geographic',
      2 => 'field_temporal',
      3 => 'group_geographic_information',
      4 => 'group_cartographics',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_subject|node|mods_image|form'] = $field_group;

  return $export;
}
