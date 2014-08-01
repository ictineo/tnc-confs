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
  $context->name = 'login_usuari';
  $context->description = 'ubicar login només a user/';
  $context->tag = 'administració';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('administració');
  t('ubicar login només a user/');
  $export['login_usuari'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'workbench';
  $context->description = 'blocks del workbench menu';
  $context->tag = 'administració';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin/workbench/menu' => 'admin/workbench/menu',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-gestio_megamenu-block_1' => array(
          'module' => 'views',
          'delta' => 'gestio_megamenu-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-gestio_megamenu-block_2' => array(
          'module' => 'views',
          'delta' => 'gestio_megamenu-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-gestio_megamenu-block_4' => array(
          'module' => 'views',
          'delta' => 'gestio_megamenu-block_4',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('administració');
  t('blocks del workbench menu');
  $export['workbench'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'workbench2';
  $context->description = 'blocks del workbench dragg megamenu';
  $context->tag = 'administració';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin/workbench/draggmenu' => 'admin/workbench/draggmenu',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-view_megamenu-block_10' => array(
          'module' => 'views',
          'delta' => 'view_megamenu-block_10',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-view_megamenu-block_11' => array(
          'module' => 'views',
          'delta' => 'view_megamenu-block_11',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-view_megamenu-block_12' => array(
          'module' => 'views',
          'delta' => 'view_megamenu-block_12',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-view_megamenu-block_13' => array(
          'module' => 'views',
          'delta' => 'view_megamenu-block_13',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-view_megamenu-block_14' => array(
          'module' => 'views',
          'delta' => 'view_megamenu-block_14',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-view_megamenu-block_15' => array(
          'module' => 'views',
          'delta' => 'view_megamenu-block_15',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-view_megamenu-block_16' => array(
          'module' => 'views',
          'delta' => 'view_megamenu-block_16',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-view_megamenu-block_17' => array(
          'module' => 'views',
          'delta' => 'view_megamenu-block_17',
          'region' => 'content',
          'weight' => '-3',
        ),
        'views-view_megamenu-block_18' => array(
          'module' => 'views',
          'delta' => 'view_megamenu-block_18',
          'region' => 'content',
          'weight' => '-2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('administració');
  t('blocks del workbench dragg megamenu');
  $export['workbench2'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'workbench3';
  $context->description = 'blocks del workbench dragg carrousels portada';
  $context->tag = 'administració';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin/workbench/draggcarrousel' => 'admin/workbench/draggcarrousel',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-carrousel-block_6' => array(
          'module' => 'views',
          'delta' => 'carrousel-block_6',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-carrousel-block_2' => array(
          'module' => 'views',
          'delta' => 'carrousel-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-carrousel-block_4' => array(
          'module' => 'views',
          'delta' => 'carrousel-block_4',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-carrousel-block_8' => array(
          'module' => 'views',
          'delta' => 'carrousel-block_8',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('administració');
  t('blocks del workbench dragg carrousels portada');
  $export['workbench3'] = $context;

  return $export;
}
