# generated from rosidl_generator_py/resource/_idl.py.em
# with input from barista_dock_charger_station:srv/DockChargerStation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DockChargerStation_Request(type):
    """Metaclass of message 'DockChargerStation_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('barista_dock_charger_station')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'barista_dock_charger_station.srv.DockChargerStation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__dock_charger_station__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__dock_charger_station__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__dock_charger_station__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__dock_charger_station__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__dock_charger_station__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DockChargerStation_Request(metaclass=Metaclass_DockChargerStation_Request):
    """Message class 'DockChargerStation_Request'."""

    __slots__ = [
        '_dock_mode',
    ]

    _fields_and_field_types = {
        'dock_mode': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dock_mode = kwargs.get('dock_mode', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.dock_mode != other.dock_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dock_mode(self):
        """Message field 'dock_mode'."""
        return self._dock_mode

    @dock_mode.setter
    def dock_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dock_mode' field must be of type 'bool'"
        self._dock_mode = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DockChargerStation_Response(type):
    """Metaclass of message 'DockChargerStation_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('barista_dock_charger_station')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'barista_dock_charger_station.srv.DockChargerStation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__dock_charger_station__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__dock_charger_station__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__dock_charger_station__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__dock_charger_station__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__dock_charger_station__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DockChargerStation_Response(metaclass=Metaclass_DockChargerStation_Response):
    """Message class 'DockChargerStation_Response'."""

    __slots__ = [
        '_success',
        '_info',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.info = kwargs.get('info', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.info != other.info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'info' field must be of type 'str'"
        self._info = value


class Metaclass_DockChargerStation(type):
    """Metaclass of service 'DockChargerStation'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('barista_dock_charger_station')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'barista_dock_charger_station.srv.DockChargerStation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__dock_charger_station

            from barista_dock_charger_station.srv import _dock_charger_station
            if _dock_charger_station.Metaclass_DockChargerStation_Request._TYPE_SUPPORT is None:
                _dock_charger_station.Metaclass_DockChargerStation_Request.__import_type_support__()
            if _dock_charger_station.Metaclass_DockChargerStation_Response._TYPE_SUPPORT is None:
                _dock_charger_station.Metaclass_DockChargerStation_Response.__import_type_support__()


class DockChargerStation(metaclass=Metaclass_DockChargerStation):
    from barista_dock_charger_station.srv._dock_charger_station import DockChargerStation_Request as Request
    from barista_dock_charger_station.srv._dock_charger_station import DockChargerStation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
