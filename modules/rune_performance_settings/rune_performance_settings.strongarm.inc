<?php
/**
 * @file
 * rune_performance_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rune_performance_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_safe_threshold';
  $strongarm->value = '0';
  $export['cron_safe_threshold'] = $strongarm;

  return $export;
}
