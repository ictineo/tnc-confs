<?php
/**
 * @file
 * tnc_cont.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tnc_cont_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cosetes_home';
  $context->description = 'Ubicar els blocks que volem a la home';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-carrousel-block_1' => array(
          'module' => 'views',
          'delta' => 'carrousel-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-carrousel-block_3' => array(
          'module' => 'views',
          'delta' => 'carrousel-block_3',
          'region' => 'content',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'dashboard_inactive',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ubicar els blocks que volem a la home');
  t('theme');
  $export['cosetes_home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'workbench';
  $context->description = 'blocks del workbench';
  $context->tag = 'administració';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin/workbench/menu' => 'admin/workbench/menu',
        'admin/workbench/draggmenu' => 'admin/workbench/draggmenu',
        'admin/workbench/draggcarrousel' => 'admin/workbench/draggcarrousel',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('administració');
  t('blocks del workbench');
  $export['workbench'] = $context;

  return $export;
}
