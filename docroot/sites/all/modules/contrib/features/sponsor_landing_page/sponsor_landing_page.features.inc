<?php
/**
 * @file
 * sponsor_landing_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sponsor_landing_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
