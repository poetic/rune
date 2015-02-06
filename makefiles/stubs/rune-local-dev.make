api = 2
core = 7.x

projects[] = drupal

defaults[projects][subdir] = contrib
defaults[projects][contrib_destination] = profiles/rune
defaults[projects][working_copy] = 1

includes[] = ../modules.make
includes[] = ../themes.make
includes[] = ../devel.make
