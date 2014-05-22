<?php
/**
 * @file
 * homepage_slider.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function homepage_slider_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_hero';
  $context->description = '';
  $context->tag = 'ccgd';
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
        'views-homepage_hero-block' => array(
          'module' => 'views',
          'delta' => 'homepage_hero-block',
          'region' => 'page_hero',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ccgd');
  $export['homepage_hero'] = $context;

  return $export;
}
