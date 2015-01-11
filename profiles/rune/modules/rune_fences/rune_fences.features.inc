<?php
/**
 * @file
 * rune_fences.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rune_fences_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
