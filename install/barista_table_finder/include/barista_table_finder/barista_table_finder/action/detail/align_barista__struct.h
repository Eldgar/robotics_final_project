// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from barista_table_finder:action/AlignBarista.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_TABLE_FINDER__ACTION__DETAIL__ALIGN_BARISTA__STRUCT_H_
#define BARISTA_TABLE_FINDER__ACTION__DETAIL__ALIGN_BARISTA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/AlignBarista in the package barista_table_finder.
typedef struct barista_table_finder__action__AlignBarista_Goal
{
  bool start;
} barista_table_finder__action__AlignBarista_Goal;

// Struct for a sequence of barista_table_finder__action__AlignBarista_Goal.
typedef struct barista_table_finder__action__AlignBarista_Goal__Sequence
{
  barista_table_finder__action__AlignBarista_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} barista_table_finder__action__AlignBarista_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/AlignBarista in the package barista_table_finder.
typedef struct barista_table_finder__action__AlignBarista_Result
{
  bool complete;
} barista_table_finder__action__AlignBarista_Result;

// Struct for a sequence of barista_table_finder__action__AlignBarista_Result.
typedef struct barista_table_finder__action__AlignBarista_Result__Sequence
{
  barista_table_finder__action__AlignBarista_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} barista_table_finder__action__AlignBarista_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/AlignBarista in the package barista_table_finder.
typedef struct barista_table_finder__action__AlignBarista_Feedback
{
  float front;
  float right;
} barista_table_finder__action__AlignBarista_Feedback;

// Struct for a sequence of barista_table_finder__action__AlignBarista_Feedback.
typedef struct barista_table_finder__action__AlignBarista_Feedback__Sequence
{
  barista_table_finder__action__AlignBarista_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} barista_table_finder__action__AlignBarista_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "barista_table_finder/action/detail/align_barista__struct.h"

/// Struct defined in action/AlignBarista in the package barista_table_finder.
typedef struct barista_table_finder__action__AlignBarista_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  barista_table_finder__action__AlignBarista_Goal goal;
} barista_table_finder__action__AlignBarista_SendGoal_Request;

// Struct for a sequence of barista_table_finder__action__AlignBarista_SendGoal_Request.
typedef struct barista_table_finder__action__AlignBarista_SendGoal_Request__Sequence
{
  barista_table_finder__action__AlignBarista_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} barista_table_finder__action__AlignBarista_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AlignBarista in the package barista_table_finder.
typedef struct barista_table_finder__action__AlignBarista_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} barista_table_finder__action__AlignBarista_SendGoal_Response;

// Struct for a sequence of barista_table_finder__action__AlignBarista_SendGoal_Response.
typedef struct barista_table_finder__action__AlignBarista_SendGoal_Response__Sequence
{
  barista_table_finder__action__AlignBarista_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} barista_table_finder__action__AlignBarista_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AlignBarista in the package barista_table_finder.
typedef struct barista_table_finder__action__AlignBarista_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} barista_table_finder__action__AlignBarista_GetResult_Request;

// Struct for a sequence of barista_table_finder__action__AlignBarista_GetResult_Request.
typedef struct barista_table_finder__action__AlignBarista_GetResult_Request__Sequence
{
  barista_table_finder__action__AlignBarista_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} barista_table_finder__action__AlignBarista_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "barista_table_finder/action/detail/align_barista__struct.h"

/// Struct defined in action/AlignBarista in the package barista_table_finder.
typedef struct barista_table_finder__action__AlignBarista_GetResult_Response
{
  int8_t status;
  barista_table_finder__action__AlignBarista_Result result;
} barista_table_finder__action__AlignBarista_GetResult_Response;

// Struct for a sequence of barista_table_finder__action__AlignBarista_GetResult_Response.
typedef struct barista_table_finder__action__AlignBarista_GetResult_Response__Sequence
{
  barista_table_finder__action__AlignBarista_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} barista_table_finder__action__AlignBarista_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "barista_table_finder/action/detail/align_barista__struct.h"

/// Struct defined in action/AlignBarista in the package barista_table_finder.
typedef struct barista_table_finder__action__AlignBarista_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  barista_table_finder__action__AlignBarista_Feedback feedback;
} barista_table_finder__action__AlignBarista_FeedbackMessage;

// Struct for a sequence of barista_table_finder__action__AlignBarista_FeedbackMessage.
typedef struct barista_table_finder__action__AlignBarista_FeedbackMessage__Sequence
{
  barista_table_finder__action__AlignBarista_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} barista_table_finder__action__AlignBarista_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BARISTA_TABLE_FINDER__ACTION__DETAIL__ALIGN_BARISTA__STRUCT_H_
