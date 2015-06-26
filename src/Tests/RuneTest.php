<?php

/**
 * @file
 * Contains Drupal\rune\Tests\RuneTest.
 */

namespace Drupal\rune\Tests;

use Drupal\simpletest\WebTestBase;

/**
 * Tests Rune installation profile expectations.
 *
 * @group rune
 */
class RuneTest extends WebTestBase {

  protected $profile = 'rune';

  /**
   * The admin user.
   *
   * @var \Drupal\user\UserInterface
   */
  protected $adminUser;

  /**
   * Tests Rune installation profile.
   */
  function testRune() {
    // Go to the home page and make sure we get a 200 response
    $this->drupalGet('');
    $this->assertResponse(200);

    // Create a user with the administrator role
    $user = $this->drupalCreateUser();
    $user->roles[] = 'administrator';
    $user->save();

    // Login with the administrator user account and make sure the toolbar is
    // visible
    $this->drupalLogin($user);
    $this->drupalGet('');
    $this->assertText(t('Manage'));
  }
}
