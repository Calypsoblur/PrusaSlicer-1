#ifndef _prusaslicer_technologies_h_
#define _prusaslicer_technologies_h_

//=============
// debug techs
//=============
// Shows camera target in the 3D scene
#define ENABLE_SHOW_CAMERA_TARGET 0
// Log debug messages to console when changing selection
#define ENABLE_SELECTION_DEBUG_OUTPUT 0
// Renders a small sphere in the center of the bounding box of the current selection when no gizmo is active
#define ENABLE_RENDER_SELECTION_CENTER 0
// Shows an imgui dialog with camera related data
#define ENABLE_CAMERA_STATISTICS 0
// Render the picking pass instead of the main scene (use [T] key to toggle between regular rendering and picking pass only rendering)
#define ENABLE_RENDER_PICKING_PASS 0
// Enable extracting thumbnails from selected gcode and save them as png files
#define ENABLE_THUMBNAIL_GENERATOR_DEBUG 0
// Disable synchronization of unselected instances
#define DISABLE_INSTANCES_SYNCH 0
// Use wxDataViewRender instead of wxDataViewCustomRenderer
#define ENABLE_NONCUSTOM_DATA_VIEW_RENDERING 0
// Enable G-Code viewer statistics imgui dialog
#define ENABLE_GCODE_VIEWER_STATISTICS 0
// Enable G-Code viewer comparison between toolpaths height and width detected from gcode and calculated at gcode generation 
#define ENABLE_GCODE_VIEWER_DATA_CHECKING 0
// Enable project dirty state manager debug window
#define ENABLE_PROJECT_DIRTY_STATE_DEBUG_WINDOW 0


// Enable rendering of objects using environment map
#define ENABLE_ENVIRONMENT_MAP 0
// Enable smoothing of objects normals
#define ENABLE_SMOOTH_NORMALS 0
// Enable rendering markers for options in preview as fixed screen size points
#define ENABLE_FIXED_SCREEN_SIZE_POINT_MARKERS 1


//================
// 2.4.1.rc techs
//================
#define ENABLE_2_4_1_RC 1

// Enable detection of layers for spiral vase prints
#define ENABLE_SPIRAL_VASE_LAYERS (1 && ENABLE_2_4_1_RC)
// Enable modified camera control and selection using mouse
#define ENABLE_NEW_CAMERA_MOVEMENTS_CTRL_ROTATE (1 && ENABLE_2_4_1_RC)
#define ENABLE_NEW_CAMERA_MOVEMENTS_MIDMOUSE_ROTATE (1 && ENABLE_2_4_1_RC)
#define ENABLE_NEW_CAMERA_MOVEMENTS_SHIFT_SELECTION (1 && ENABLE_2_4_1_RC)


//====================
// 2.5.0.alpha1 techs
//====================
#define ENABLE_2_5_0_ALPHA1 1

// Enable changes in preview layout
#define ENABLE_PREVIEW_LAYOUT (1 && ENABLE_2_5_0_ALPHA1)
// Enable drawing the items in legend toolbar using icons
#define ENABLE_LEGEND_TOOLBAR_ICONS (1 && ENABLE_PREVIEW_LAYOUT)
// Enable coloring of toolpaths in preview by layer time
#define ENABLE_PREVIEW_LAYER_TIME (1 && ENABLE_2_5_0_ALPHA1)
// Enable showing time estimate for travel moves in legend
#define ENABLE_TRAVEL_TIME (1 && ENABLE_2_5_0_ALPHA1)


#endif // _prusaslicer_technologies_h_
