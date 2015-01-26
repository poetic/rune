# RUNE
An opinionated Drupal distribution focused on developer happiness with a
git-based workflow.

## Usage
To build the distribution atop the latest Durpal core, run:

    drush make -y makefiles/stubs/rune-build.make platform_dir/

To build for development, run:

    drush make -y --working-copy makefiles/stubs/rune-dev.make platform_dir/

To re-build an existing platform, run:

    cd /path/to/platform_dir
    drush make -y --working-copy profiles/rune/makefiles/stubs/rune-local-dev.make

This last will rebuild Drupal core and contrib in an existing code-base without
touching the Rune profile itself. This is useful primarily when developing an
install profile.


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

## Maintenance
The makefiles that define the various requirements for this installation
profile are structured for easy readability and maintenance.

For dev builds, Drush Make will prefer the latest versions of contrib modules,
except for those specifying pinned versions.

For production builds, we use makefiles with all versions locked down. To
update these makefile, run the following commands from the makefiles directory:

    drush make --no-build --lock=lockfiles/modules.lock modules.make --no-core
    drush make --no-build --lock=lockfiles/themes.lock themes.make --no-core
