<?php
/**
 * @file
 * tnc_editor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function tnc_editor_filter_default_formats() {
  $formats = array();

  // Exported format: Editor web.
  $formats['editor_web'] = array(
    'format' => 'editor_web',
    'name' => 'Editor web',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'transliteration' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'no_known_transliteration' => '?',
        ),
      ),
      'image_resize_filter' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
    ),
  );

  return $formats;
}
