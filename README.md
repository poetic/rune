# Rune
An opinionated install profile focused on developer happiness and a
git-based workflow. Built and battle tested on [Valkyrie](https://github.com/GetValkyrie/valkyrie).

## Usage
To build the distribution atop the latest Durpal core, run:
    
    drush make https://raw.githubusercontent.com/poetic/rune/master/makefiles/stubs/build.make.yml [platform_name]

To build for development (includes working copy of the profile):

    drush make https://raw.githubusercontent.com/poetic/rune/master/makefiles/stubs/dev.make.yml [platform_name]

To re-build an existing platform installed using one of the above commands, run this from your platform root:

    drush make profiles/rune/makefiles/stubs/local-dev.make.yml

This will rebuild Drupal core and contrib in an existing code-base without
touching the Rune profile itself. This is useful primarily when developing an
install profile.

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
all-encompassing ones. A good structure that has worked well for us at Poetic
is as follows (replace "site" with the name of your site):

* site_core: This feature is used for convenince to turn on all your other
  features. It should *only* contain a list of dependencies that contains your
  other custom features. This makes it easy to turn everything on using ``drush
  en site_core -y``.
* site_theme: All theme settings go in here as well as setting the site default
  theme.
* site_field_bases: This feature should contain all your field bases. Field
  bases are global and can be used in multiple content types so they need to be
  stored outside of features for specific content types.
* site_basic_page (content type): Each content type should be in it's own
  feature. This feature should include all configuration and field instances
  for this content type. Do not include any content in a content type feature.
* site_home_page (content & layout): Each custom page should be in it's own
  module. This would include all the static content and layouts
  (panels/panelizer) that make up the page.
* site_menus: Store all menus used by the site in one feature. This is better
  than storing menu items for each page in their respective content features
  because edits to the menu are likely to affect multiple links (such as
  re-oreding the menu). This would cause multiple features to become
  "overridden" instead of one.
