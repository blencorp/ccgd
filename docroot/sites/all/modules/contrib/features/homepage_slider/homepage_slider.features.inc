<?php
/**
 * @file
 * homepage_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function homepage_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function homepage_slider_node_info() {
  $items = array(
    'homepage_hero' => array(
      'name' => t('Homepage Hero'),
      'base' => 'node_content',
      'description' => t('This content type creates homepage hero nodes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
