// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from barista_table_finder:action/AlignBarista.idl
// generated code does not contain a copyright notice

#ifndef BARISTA_TABLE_FINDER__ACTION__DETAIL__ALIGN_BARISTA__BUILDER_HPP_
#define BARISTA_TABLE_FINDER__ACTION__DETAIL__ALIGN_BARISTA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "barista_table_finder/action/detail/align_barista__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace barista_table_finder
{

namespace action
{

namespace builder
{

class Init_AlignBarista_Goal_start
{
public:
  Init_AlignBarista_Goal_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::barista_table_finder::action::AlignBarista_Goal start(::barista_table_finder::action::AlignBarista_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::barista_table_finder::action::AlignBarista_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::barista_table_finder::action::AlignBarista_Goal>()
{
  return barista_table_finder::action::builder::Init_AlignBarista_Goal_start();
}

}  // namespace barista_table_finder


namespace barista_table_finder
{

namespace action
{

namespace builder
{

class Init_AlignBarista_Result_complete
{
public:
  Init_AlignBarista_Result_complete()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::barista_table_finder::action::AlignBarista_Result complete(::barista_table_finder::action::AlignBarista_Result::_complete_type arg)
  {
    msg_.complete = std::move(arg);
    return std::move(msg_);
  }

private:
  ::barista_table_finder::action::AlignBarista_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::barista_table_finder::action::AlignBarista_Result>()
{
  return barista_table_finder::action::builder::Init_AlignBarista_Result_complete();
}

}  // namespace barista_table_finder


namespace barista_table_finder
{

namespace action
{

namespace builder
{

class Init_AlignBarista_Feedback_right
{
public:
  explicit Init_AlignBarista_Feedback_right(::barista_table_finder::action::AlignBarista_Feedback & msg)
  : msg_(msg)
  {}
  ::barista_table_finder::action::AlignBarista_Feedback right(::barista_table_finder::action::AlignBarista_Feedback::_right_type arg)
  {
    msg_.right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::barista_table_finder::action::AlignBarista_Feedback msg_;
};

class Init_AlignBarista_Feedback_front
{
public:
  Init_AlignBarista_Feedback_front()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlignBarista_Feedback_right front(::barista_table_finder::action::AlignBarista_Feedback::_front_type arg)
  {
    msg_.front = std::move(arg);
    return Init_AlignBarista_Feedback_right(msg_);
  }

private:
  ::barista_table_finder::action::AlignBarista_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::barista_table_finder::action::AlignBarista_Feedback>()
{
  return barista_table_finder::action::builder::Init_AlignBarista_Feedback_front();
}

}  // namespace barista_table_finder


namespace barista_table_finder
{

namespace action
{

namespace builder
{

class Init_AlignBarista_SendGoal_Request_goal
{
public:
  explicit Init_AlignBarista_SendGoal_Request_goal(::barista_table_finder::action::AlignBarista_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::barista_table_finder::action::AlignBarista_SendGoal_Request goal(::barista_table_finder::action::AlignBarista_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::barista_table_finder::action::AlignBarista_SendGoal_Request msg_;
};

class Init_AlignBarista_SendGoal_Request_goal_id
{
public:
  Init_AlignBarista_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlignBarista_SendGoal_Request_goal goal_id(::barista_table_finder::action::AlignBarista_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AlignBarista_SendGoal_Request_goal(msg_);
  }

private:
  ::barista_table_finder::action::AlignBarista_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::barista_table_finder::action::AlignBarista_SendGoal_Request>()
{
  return barista_table_finder::action::builder::Init_AlignBarista_SendGoal_Request_goal_id();
}

}  // namespace barista_table_finder


namespace barista_table_finder
{

namespace action
{

namespace builder
{

class Init_AlignBarista_SendGoal_Response_stamp
{
public:
  explicit Init_AlignBarista_SendGoal_Response_stamp(::barista_table_finder::action::AlignBarista_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::barista_table_finder::action::AlignBarista_SendGoal_Response stamp(::barista_table_finder::action::AlignBarista_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::barista_table_finder::action::AlignBarista_SendGoal_Response msg_;
};

class Init_AlignBarista_SendGoal_Response_accepted
{
public:
  Init_AlignBarista_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlignBarista_SendGoal_Response_stamp accepted(::barista_table_finder::action::AlignBarista_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AlignBarista_SendGoal_Response_stamp(msg_);
  }

private:
  ::barista_table_finder::action::AlignBarista_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::barista_table_finder::action::AlignBarista_SendGoal_Response>()
{
  return barista_table_finder::action::builder::Init_AlignBarista_SendGoal_Response_accepted();
}

}  // namespace barista_table_finder


namespace barista_table_finder
{

namespace action
{

namespace builder
{

class Init_AlignBarista_GetResult_Request_goal_id
{
public:
  Init_AlignBarista_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::barista_table_finder::action::AlignBarista_GetResult_Request goal_id(::barista_table_finder::action::AlignBarista_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::barista_table_finder::action::AlignBarista_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::barista_table_finder::action::AlignBarista_GetResult_Request>()
{
  return barista_table_finder::action::builder::Init_AlignBarista_GetResult_Request_goal_id();
}

}  // namespace barista_table_finder


namespace barista_table_finder
{

namespace action
{

namespace builder
{

class Init_AlignBarista_GetResult_Response_result
{
public:
  explicit Init_AlignBarista_GetResult_Response_result(::barista_table_finder::action::AlignBarista_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::barista_table_finder::action::AlignBarista_GetResult_Response result(::barista_table_finder::action::AlignBarista_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::barista_table_finder::action::AlignBarista_GetResult_Response msg_;
};

class Init_AlignBarista_GetResult_Response_status
{
public:
  Init_AlignBarista_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlignBarista_GetResult_Response_result status(::barista_table_finder::action::AlignBarista_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AlignBarista_GetResult_Response_result(msg_);
  }

private:
  ::barista_table_finder::action::AlignBarista_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::barista_table_finder::action::AlignBarista_GetResult_Response>()
{
  return barista_table_finder::action::builder::Init_AlignBarista_GetResult_Response_status();
}

}  // namespace barista_table_finder


namespace barista_table_finder
{

namespace action
{

namespace builder
{

class Init_AlignBarista_FeedbackMessage_feedback
{
public:
  explicit Init_AlignBarista_FeedbackMessage_feedback(::barista_table_finder::action::AlignBarista_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::barista_table_finder::action::AlignBarista_FeedbackMessage feedback(::barista_table_finder::action::AlignBarista_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::barista_table_finder::action::AlignBarista_FeedbackMessage msg_;
};

class Init_AlignBarista_FeedbackMessage_goal_id
{
public:
  Init_AlignBarista_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlignBarista_FeedbackMessage_feedback goal_id(::barista_table_finder::action::AlignBarista_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AlignBarista_FeedbackMessage_feedback(msg_);
  }

private:
  ::barista_table_finder::action::AlignBarista_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::barista_table_finder::action::AlignBarista_FeedbackMessage>()
{
  return barista_table_finder::action::builder::Init_AlignBarista_FeedbackMessage_goal_id();
}

}  // namespace barista_table_finder

#endif  // BARISTA_TABLE_FINDER__ACTION__DETAIL__ALIGN_BARISTA__BUILDER_HPP_
