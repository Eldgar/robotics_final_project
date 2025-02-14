// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef BARISTA_TABLE_FINDER__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define BARISTA_TABLE_FINDER__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_barista_table_finder __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_barista_table_finder __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_barista_table_finder __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_barista_table_finder __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_barista_table_finder
    #define ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder ROSIDL_GENERATOR_C_EXPORT_barista_table_finder
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder ROSIDL_GENERATOR_C_IMPORT_barista_table_finder
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_barista_table_finder __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_barista_table_finder
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_barista_table_finder
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // BARISTA_TABLE_FINDER__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
