<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function ccgd_ccgd_two_column_right_panels_layouts() {
  $items['ccgd_two_column_right'] = array(
    'title' => t('Two Column - Right Sidebar'),
    'category' => t('CCGD'),
    'icon' => 'ccgd_two_column_right.png',
    'theme' => 'ccgd_two_column_right',
    'admin css' => 'ccgd_two_column_right.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'ccgd_two_column_right_top'    => t('Top (conditional)'),
      'ccgd_two_column_right_first'  => t('Left'),
      'ccgd_two_column_right_second' => t('Right'),
      'ccgd_two_column_right_bottom' => t('Bottom (conditional)'),
    ),
    // AT Core
    'type' => 'two',
    'options' => array(
      'two-75-25' => 'default',
      'two-75-25-stack' => 'stack',
    ),
    'styles' => array(
      'two-75-25' => array(
        'css' => array(
          '75' => array('.two-75-25 > .region-two-75-25-first' => 'width:75%'),
          '25' => array('.two-75-25 > .region-two-75-25-second' => 'width:25%'),
        ),
      ),
      'two-75-25-stack' => array(
        'css' => array(
          'fdw' => array('.two-75-25 > .region' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for two-75-75.tpl.php
 */
function template_preprocess_ccgd_two_column_right(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
