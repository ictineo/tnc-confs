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
  $context->name = 'footer';
  $context->description = 'blocks menú del footer';
  $context->tag = 'theme';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'bottom',
          'weight' => '-10',
        ),
        'menu-menu-peu' => array(
          'module' => 'menu',
          'delta' => 'menu-peu',
          'region' => 'bottom',
          'weight' => '-9',
        ),
        'menu-menu-compra-d-abonaments' => array(
          'module' => 'menu',
          'delta' => 'menu-compra-d-abonaments',
          'region' => 'bottom',
          'weight' => '-8',
        ),
        'menu-menu-compra-d-entrades' => array(
          'module' => 'menu',
          'delta' => 'menu-compra-d-entrades',
          'region' => 'bottom',
          'weight' => '-7',
        ),
        'menu-menu-regala-tnc' => array(
          'module' => 'menu',
          'delta' => 'menu-regala-tnc',
          'region' => 'bottom',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks menú del footer');
  t('theme');
  $export['footer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'idioma';
  $context->description = 'ubicació selecció d\'idioma';
  $context->tag = 'theme';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  t('ubicació selecció d\'idioma');
  $export['idioma'] = $context;

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
        'views-carrousel-block_10' => array(
          'module' => 'views',
          'delta' => 'carrousel-block_10',
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
        'views-tipus_patrocinadors-block_1' => array(
          'module' => 'views',
          'delta' => 'tipus_patrocinadors-block_1',
          'region' => 'content',
          'weight' => '-2',
        ),
        'views-tipus_patrocinadors-block_5' => array(
          'module' => 'views',
          'delta' => 'tipus_patrocinadors-block_5',
          'region' => 'content',
          'weight' => '-1',
        ),
        'views-tipus_patrocinadors-block_6' => array(
          'module' => 'views',
          'delta' => 'tipus_patrocinadors-block_6',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-tipus_patrocinadors-block_7' => array(
          'module' => 'views',
          'delta' => 'tipus_patrocinadors-block_7',
          'region' => 'content',
          'weight' => '1',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'workbench4';
  $context->description = 'Dragg ítems del megamenú';
  $context->tag = 'administració';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin/workbench/items_menu' => 'admin/workbench/items_menu',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-carrega_megamenu-block_2' => array(
          'module' => 'views',
          'delta' => 'carrega_megamenu-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-carrega_megamenu-block_4' => array(
          'module' => 'views',
          'delta' => 'carrega_megamenu-block_4',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dragg ítems del megamenú');
  t('administració');
  $export['workbench4'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'xarxes_socials';
  $context->description = 'block per les xxss del top menu';
  $context->tag = 'theme';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('block per les xxss del top menu');
  t('theme');
  $export['xarxes_socials'] = $context;

  return $export;
}
