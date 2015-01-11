<?php
/**
 * @file
 * rune_coffee.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rune_coffee_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
