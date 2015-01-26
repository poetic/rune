api = 2
core = 7.x

projects[admin_menu] = 3.0-rc5
projects[admin_menu][patch][] = https://www.drupal.org/files/admin_menu-search-disappeared-1916812-13.patch

projects[image_combination_effects] = 1.0-alpha1
projects[image_combination_effects][patch][] = https://www.drupal.org/files/issues/ICE-fix-fatal-typecast-error-228133-2.patch

projects[uuid_features][download][branch] = 1.x-dev
projects[uuid_features][download][revision] = 4fdc77f
projects[uuid_features][patch][] = https://www.drupal.org/files/issues/uuid_features-field_collection_remove_slashes-1844848-3.patch
;; Allow files to be incleded in exported in UUID-enabled features.
projects[uuid_features][patch][] = https://www.drupal.org/files/issues/include_file_field-2411869-6.patch

projects[features][download][branch] = 7.x-2.x
;; Allow files to be included in exported features.
projects[features][patch] = https://www.drupal.org/node/1064340#comment-8918659
