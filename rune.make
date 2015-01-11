api = 2
core = 7.x

projects[] = drupal
defaults[projects][subdir] = contrib

; essentials
projects[ctools] = 1.5
projects[entity] = 1.5
projects[entityreference] = 1.1
projects[token] = 1.5
projects[views] = 3.8
projects[webform] = 4.2

; workflow
projects[features] = 2.3
projects[strongarm] = 2.0
projects[uuid][download][revision] = a7bf2db
projects[uuid_features][download][revision] = 4fdc77f
projects[uuid_features][patch][] = https://www.drupal.org/files/issues/uuid_features-field_collection_remove_slashes-1844848-3.patch
projects[webform_uuid] = 1.1

; administration
projects[admin_views] = 1.3
projects[ckeditor] = 1.16
projects[content_menu] = 1.0
projects[devel] = 1.5
projects[diff] = 3.2
projects[module_filter] = 2.0-alpha2
projects[views_bulk_operations] = 3.2

; navigation
projects[admin_menu] = 3.0-rc5
projects[admin_menu][patch][] = https://www.drupal.org/files/admin_menu-search-disappeared-1916812-13.patch
projects[adminimal_admin_menu] = 1.5
projects[coffee] = 2.2
projects[superfish][download][revision] = fa3d7c6

; fields
projects[addressfield] = 1.0-rc1
projects[fences] = 1.0
projects[field_collection] = 1.0-beta8
projects[geofield] = 2.3
projects[link] = 1.3
projects[phone] = 1.0-beta1
projects[title] = 1.0-alpha7
projects[webform_phone] = 1.20
projects[youtube] = 1.3

; content display
projects[bg_image] = 1.4
projects[bg_image_formatter] = 1.3
projects[colorbox] = 2.8
projects[leaflet] = 1.1
projects[leaflet_more_maps] = 1.10
projects[panelizer][download][revision] = dd5aacc
projects[panels][download][revision] = f7ed1af
projects[panels_everywhere] = 1.0-rc1
projects[quicktabs] = 3.6

; media
projects[image_combination_effects] = 1.0-alpha1
projects[image_combination_effects][patch][] = https://www.drupal.org/files/issues/ICE-fix-fatal-typecast-error-228133-2.patch
projects[imagecache_actions] = 1.5

; utility
projects[geocoder] = 1.2
projects[geophp] = 1.7
projects[jquery_update] = 2.4

; libraries
projects[libraries] = 2.2
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor%20for%20Drupal/edit/ckeditor_4.4.3_edit.zip
libraries[colorbox][download][type] = get
libraries[colorbox][download][url] = https://github.com/jackmoore/colorbox/archive/1.x.zip
libraries[leaflet][download][type] = get
libraries[leaflet][download][url] = http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.7.3.zip
libraries[superfish][download][type] = get
libraries[superfish][download][url] = https://github.com/mehrpadin/Superfish-for-Drupal/archive/master.zip

; themes
projects[adminimal_theme] = 1.18
projects[bootstrap] = 3.0
projects[omega] = 4.3
