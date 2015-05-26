<?php
/**
 * @file
 * rune_jquery_update.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rune_jquery_update_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
