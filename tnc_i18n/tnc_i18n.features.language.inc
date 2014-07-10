<?php
/**
 * @file
 * tnc_i18n.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function tnc_i18n_locale_default_languages() {
  $languages = array();

  // Exported language: ca.
  $languages['ca'] = array(
    'language' => 'ca',
    'name' => 'Catalan',
    'native' => 'Català',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n>1)',
    'domain' => '',
    'prefix' => 'ca',
    'weight' => 0,
  );
  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => -8,
  );
  // Exported language: es.
  $languages['es'] = array(
    'language' => 'es',
    'name' => 'Spanish',
    'native' => 'Español',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'es',
    'weight' => 0,
  );
  return $languages;
}
