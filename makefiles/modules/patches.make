api = 2
core = 7.x

projects[admin_menu] = 3.0-rc5
projects[admin_menu][patch][] = https://www.drupal.org/files/admin_menu-search-disappeared-1916812-13.patch

projects[image_combination_effects] = 1.0-alpha1
projects[image_combination_effects][patch][] = https://www.drupal.org/files/issues/ICE-fix-fatal-typecast-error-228133-2.patch

;; Allow files to be included in exported features.
;; See: https://www.drupal.org/node/1064340#comment-8918659
projects[features][download][branch] = 7.x-2.x
projects[features][patch][] = https://www.drupal.org/files/issues/1064340-features-files-13.patch

projects[addressfield] = 1.x
projects[addressfield][patch][] = https://www.drupal.org/files/issues/addressfield-nonempty-1263316-98.patch

;; Get tokens for fields inside the FC.
projects[field_collection] = 1.0-beta8
projects[field_collection][patch][] = https://www.drupal.org/files/issues/field_collection-host_entity_tokens-1372652-74.patch
