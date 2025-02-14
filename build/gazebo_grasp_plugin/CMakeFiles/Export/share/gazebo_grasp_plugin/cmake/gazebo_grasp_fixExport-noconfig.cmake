#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gazebo_grasp_plugin::gazebo_grasp_fix" for configuration ""
set_property(TARGET gazebo_grasp_plugin::gazebo_grasp_fix APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(gazebo_grasp_plugin::gazebo_grasp_fix PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgazebo_grasp_fix.so"
  IMPORTED_SONAME_NOCONFIG "libgazebo_grasp_fix.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS gazebo_grasp_plugin::gazebo_grasp_fix )
list(APPEND _IMPORT_CHECK_FILES_FOR_gazebo_grasp_plugin::gazebo_grasp_fix "${_IMPORT_PREFIX}/lib/libgazebo_grasp_fix.so" )

# Import target "gazebo_grasp_plugin::gazebo_grasp_msgs" for configuration ""
set_property(TARGET gazebo_grasp_plugin::gazebo_grasp_msgs APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(gazebo_grasp_plugin::gazebo_grasp_msgs PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgazebo_grasp_msgs.so"
  IMPORTED_SONAME_NOCONFIG "libgazebo_grasp_msgs.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS gazebo_grasp_plugin::gazebo_grasp_msgs )
list(APPEND _IMPORT_CHECK_FILES_FOR_gazebo_grasp_plugin::gazebo_grasp_msgs "${_IMPORT_PREFIX}/lib/libgazebo_grasp_msgs.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
