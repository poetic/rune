# Rune
An opinionated install profile focused on developer happiness and a
git-based workflow. Built and battle tested on [Valkyrie](https://github.com/GetValkyrie/valkyrie).

## Usage
To build the distribution atop the latest Drupal core, run:

    drush make https://raw.githubusercontent.com/poetic/rune/master/makefiles/stubs/build.make.yml [platform_name]

To build for development (includes working copy of the profile):

    drush make https://raw.githubusercontent.com/poetic/rune/master/makefiles/stubs/dev.make.yml [platform_name]

To re-build an existing platform installed using one of the above commands, run this from your platform root:

    drush make profiles/rune/makefiles/stubs/local-dev.make.yml

This will rebuild Drupal core and contrib in an existing code-base without
touching the Rune profile itself. This is useful primarily when developing an
install profile.

Note: if you receive an error like "No core project specified. [error]" you may need a more up-to-date version of drush.

    which drush

Go to the drush directory

    git fetch
    git checkout [appropriate branch name]

## Commerce
To use Rune Commerce, first build the platform like normal via one of the two commands discussed in [Usage](#usage)

Once the platform is built, run:

    drush make profiles/rune/makefiles/commerce/commerce-rune.make.yml

This will rebuild the Rune platform with a fully operational commerce foundation baked in.

## Maintenance
The makefiles that define the various requirements for this installation
profile are structured for easy readability and maintenance.

For dev builds, Drush Make will prefer the latest versions of contrib modules,
except for those specifying pinned versions.

For production builds, we use a makefile with all versions locked down. To
update this makefile, run the following command from the *profile* root:

    drush make --no-build --no-core makefiles/profile.make.yml --lock=rune.make

## Workflow suggestions
All modules in the make file are known to be exportable using uuid_features.
There are many modules that are set to a specific commit or that may have
patches applied in order to get this functionality working.

We recommend building sites with many small features over large
all-encompassing ones. We have currated the concepts behind clean and maintainable features with our [Scalable and Modular Architecture with Features](SMAF.md) philosphy.
