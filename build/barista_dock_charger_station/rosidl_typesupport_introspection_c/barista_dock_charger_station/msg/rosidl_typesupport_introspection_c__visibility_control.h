// generated from
// rosidl_typesupport_introspection_c/resource/rosidl_typesupport_introspection_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef BARISTA_DOCK_CHARGER_STATION__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
#define BARISTA_DOCK_CHARGER_STATION__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_barista_dock_charger_station __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_barista_dock_charger_station __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_barista_dock_charger_station __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_barista_dock_charger_station __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_INTROSPECTION_C_BUILDING_DLL_barista_dock_charger_station
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_barista_dock_charger_station ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_barista_dock_charger_station
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_barista_dock_charger_station ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_barista_dock_charger_station
  #endif
#else
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_barista_dock_charger_station __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_barista_dock_charger_station
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_barista_dock_charger_station __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_barista_dock_charger_station
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // BARISTA_DOCK_CHARGER_STATION__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
