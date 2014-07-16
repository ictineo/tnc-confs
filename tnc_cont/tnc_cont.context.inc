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
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ubicar els blocks que volem a la home');
  t('theme');
  $export['cosetes_home'] = $context;

  return $export;
}
