<?php
/**
 * @file
 * tnc_cont.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tnc_cont_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fitxa_artistica|node|fitxa_espectacle|form';
  $field_group->group_name = 'group_fitxa_artistica';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fitxa_espectacle';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fitxa artística',
    'weight' => '8',
    'children' => array(
      0 => 'field_artista_carrec',
      1 => 'field_idioma',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fitxa-artistica field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_fitxa_artistica|node|fitxa_espectacle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multimedia|node|fitxa_espectacle|form';
  $field_group->group_name = 'group_multimedia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fitxa_espectacle';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Multimèdia',
    'weight' => '7',
    'children' => array(
      0 => 'field_imatges',
      1 => 'field_videos',
      2 => 'field_audio',
      3 => 'field_documentacio',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-multimedia field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_multimedia|node|fitxa_espectacle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multimedia|node|fitxa_premsa|form';
  $field_group->group_name = 'group_multimedia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fitxa_premsa';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Multimèdia',
    'weight' => '8',
    'children' => array(
      0 => 'field_documents',
      1 => 'field_file_audio',
      2 => 'field_imatge',
      3 => 'field_imatge_capcalera',
      4 => 'field_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-multimedia field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_multimedia|node|fitxa_premsa|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sessio|node|fitxa_premsa|form';
  $field_group->group_name = 'group_sessio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fitxa_premsa';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sessió',
    'weight' => '9',
    'children' => array(
      0 => 'field_entrada',
      1 => 'field_dia_hora',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sessio field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sessio|node|fitxa_premsa|form'] = $field_group;

  return $export;
}
