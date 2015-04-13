# Scalable and Modular Architecture for Features

## Workflow Concepts
When using the SMAF workflow, it becomes important to think of objects on the site in terms of consumables.

Much like a food chain, various objects on the site often consume the objects one level below. This becomes the basis for the order in which we modify our features, and informs us on future expansions of this philosophy.

At the most base level, our initial consumable, we have objects like field bases. These are used by multiple views, content types, and other entities all across the site. A core feature of Drupal, field bases allow a single field to be used on multiple content types. Other items that fit into this category would be Flexslider optionsets, view modes, image styles, taxonomies (not terms), etc.

Above this, we have our content types, views, flags, and other entities. These features will have dependencies on the field bases feature, image styles, taxonomies, and other components as needed.

Beyond this, we have nodes, static pages, and other instances of entities. As these elements can consume the previous level, multiple nodes can reference the same content type.

## Workflow Guidelines
* Order matters
  * By capturing things at the most basic level and working your way up through the hierarchy, we ensure our feature code will be clean.
  * For example: If the field bases are already captured on a content type, the content type feature will not try to add them itself.
* Feature dependencies should not be parallel (for the most part)
  * As each level should use consumables from the level before it, feature dependencies should rarely point to features on the same level.
  * An exception to this would be content types referencing other content types via Entity Reference.
* Clear cache often
  * It is quite common for changes to features (such as new field instances) to not show up without a cache clear.

## Implementation
Lets say a new content type of “Location” has been added to a site, with 3 fields: Address, Photo, and Description. The following process would be used to properly capture this configuration:

Add the Address, Photo and Description field bases to the example_field_bases feature
Create a feature for example_location
Capture the Address, Photo, and Description field instances (and their dependencies) in example_location
If there is content on the site to capture, create a feature for example_location_nodes
Make sure Location nodes have UUID’s, and capture the nodes in example_location_nodes
Add example_location and example_location_nodes to example_core

## Features Structure
Features should fall into the following groups, assume a site named “Example”. First level bullets are groupings on the Features page, second level bullets are the individual feature names. All features should have the site name (lowercased and underscored) as a prefix for easy identification of site-specific features.
* Example
  * example_core
  * example_field_bases
  * example_view_modes
  * example_image_styles
  * example_flexslider
* Example Content Types
  * example_amenity
  * example_unit
  * example_gallery
* Example Pages
  * example_contact_page
  * example_home_page
  * example_gallery_page

Great care should be taken when generating features, as the features auto-detection capabilities will often try to create overlap between features, which can potentially cause conflicts. Be sure to thoroughly analyze the added/removed settings when regenerating a feature.

## Sections

### Example
The features in the Example section should include settings required for other features to function. For instance, field bases, image styles, view modes, flexslider option sets, and theme-specific settings should all be stored in their own features for a high level of segmentation..
* The example_core feature will turn on all necessary features on the site. The resulting feature should exist of nothing except an empty .module file, and an extensie .info file of dependencies.
* example_field_bases will store all field bases on the site. Field bases should NOT be stored with the content types, only field instances. This will cut down on conflicts greatly.

### Example Content Types
These features should store only settings specific to an individual content type. This should not store information related to the panelized node display. If not using panelizer, the built-in node display settings can be stored with the content type.

### Example Pages
With each type of page on the site, whether it is managed through Page Manager or through Panelizer, should be stored its own feature in this section.This would include panelizer settings for multiple view modes on a single content type.

For example, if a “Unit” content type has a Card view mode and a Full Node view mode, and both are panelized, all settings for both of these should be stored in example_unit_pages.

For pages created/managed through Page Manager, all of the panel panes information will be stored in the page feature.
