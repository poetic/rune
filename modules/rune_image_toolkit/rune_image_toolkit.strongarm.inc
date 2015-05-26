<?php
/**
 * @file
 * rune_image_toolkit.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rune_image_toolkit_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_jpegoptim';
  $strongarm->value = array(
    'status' => 1,
    'path' => '/usr/bin/jpegoptim',
    'settings' => array(
      'progressive' => '',
    ),
    'weight' => '0',
  );
  $export['imageapi_optimize_jpegoptim'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_jpegtran';
  $strongarm->value = array(
    'status' => 1,
    'path' => '/usr/bin/jpegtran',
    'settings' => array(
      'progressive' => FALSE,
    ),
    'weight' => '0',
  );
  $export['imageapi_optimize_jpegtran'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_optipng';
  $strongarm->value = array(
    'status' => 1,
    'path' => '/usr/bin/optipng',
    'settings' => array(
      'level' => 5,
      'interlace' => '',
    ),
    'weight' => '1',
  );
  $export['imageapi_optimize_optipng'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_pngcrush';
  $strongarm->value = array(
    'status' => 1,
    'path' => '/usr/bin/pngcrush',
    'weight' => '2',
  );
  $export['imageapi_optimize_pngcrush'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_pngquant';
  $strongarm->value = array(
    'status' => 1,
    'path' => '/usr/bin/pngquant',
    'weight' => '0',
  );
  $export['imageapi_optimize_pngquant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_service';
  $strongarm->value = 'internal';
  $export['imageapi_optimize_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_toolkit';
  $strongarm->value = 'gd';
  $export['imageapi_optimize_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_jpeg_quality';
  $strongarm->value = '100';
  $export['image_jpeg_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'imageapi_optimize';
  $export['image_toolkit'] = $strongarm;

  return $export;
}
