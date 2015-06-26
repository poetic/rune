# Rune
An opinionated install profile focused on developer happiness.
Built and battle tested with [Valkyrie](https://github.com/GetValkyrie/valkyrie).

## Usage
To build the distribution atop the latest Drupal core, run:

    drush make https://raw.githubusercontent.com/poetic/rune/8.x/makefiles/stubs/build.make.yml [platform_name]

To build for development (includes working copy of the profile):

    drush make https://raw.githubusercontent.com/poetic/rune/8.x/makefiles/stubs/dev.make.yml [platform_name]

To re-build an existing platform installed using one of the above commands, run this from your platform root:

    drush make profiles/rune/makefiles/stubs/local-dev.make.yml

This will rebuild Drupal core and contrib in an existing code-base without
touching the rune profile itself. This is useful when working on rune.
