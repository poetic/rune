api = 2
core = 7.x

projects[] = drupal

defaults[projects][subdir] = contrib
defaults[projects][working_copy] = 1

includes[] = ../makefiles/modules.make
includes[] = ../makefiles/themes.make
includes[] = ../makefiles/devel.make
