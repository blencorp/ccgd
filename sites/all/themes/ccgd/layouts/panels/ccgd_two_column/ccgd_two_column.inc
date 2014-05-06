<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function ccgd_ccgd_two_column_panels_layouts() {
  $items['ccgd_two_column'] = array(
    'title' => t('Two Column - Left Sidebar'),
    'category' => t('CCGD'),
    'icon' => 'ccgd_two_column.png',
    'theme' => 'ccgd_two_column',
    'admin css' => 'ccgd_two_column.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'ccgd_two_column_top'    => t('Top (conditional)'),
      'ccgd_two_column_first'  => t('Left'),
      'ccgd_two_column_second' => t('Right'),
      'ccgd_two_column_bottom' => t('Bottom (conditional)'),
    ),
    // AT Core
    'type' => 'two',
    'options' => array(
      'two-25-75' => 'default',
      'two-25-75-stack' => 'stack',
    ),
    'styles' => array(
      'two-25-75' => array(
        'css' => array(
          '25' => array('.two-25-75 > .region-two-25-75-first' => 'width:25%'),
          '75' => array('.two-25-75 > .region-two-25-75-second' => 'width:75%'),
        ),
      ),
      'two-25-75-stack' => array(
        'css' => array(
          'fdw' => array('.two-25-75 > .region' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for two-33-66.tpl.php
 */
function template_preprocess_ccgd_two_column(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
