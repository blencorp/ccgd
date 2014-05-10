<?php
/**
 * @file
 * user_page.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function user_page_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'user_dashboard';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'User Dashboard';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'my_dashboard',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'My Schedule',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'my_dashboard',
      'display' => 'panel_pane_2',
      'args' => '',
      'title' => 'Other Possible Schedules',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('My Schedule');
  t('Other Possible Schedules');
  t('User Dashboard');

  $export['user_dashboard'] = $quicktabs;

  return $export;
}
