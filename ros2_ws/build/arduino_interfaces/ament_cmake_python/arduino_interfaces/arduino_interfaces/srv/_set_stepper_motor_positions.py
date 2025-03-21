# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arduino_interfaces:srv/SetStepperMotorPositions.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetStepperMotorPositions_Request(type):
    """Metaclass of message 'SetStepperMotorPositions_Request'."""

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
            module = import_type_support('arduino_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arduino_interfaces.srv.SetStepperMotorPositions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_stepper_motor_positions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_stepper_motor_positions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_stepper_motor_positions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_stepper_motor_positions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_stepper_motor_positions__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetStepperMotorPositions_Request(metaclass=Metaclass_SetStepperMotorPositions_Request):
    """Message class 'SetStepperMotorPositions_Request'."""

    __slots__ = [
        '_base_rotation',
        '_rotation',
        '_end_rotation',
        '_end_angle',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'base_rotation': 'int64',
        'rotation': 'int64',
        'end_rotation': 'int64',
        'end_angle': 'int64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.base_rotation = kwargs.get('base_rotation', int())
        self.rotation = kwargs.get('rotation', int())
        self.end_rotation = kwargs.get('end_rotation', int())
        self.end_angle = kwargs.get('end_angle', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.base_rotation != other.base_rotation:
            return False
        if self.rotation != other.rotation:
            return False
        if self.end_rotation != other.end_rotation:
            return False
        if self.end_angle != other.end_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def base_rotation(self):
        """Message field 'base_rotation'."""
        return self._base_rotation

    @base_rotation.setter
    def base_rotation(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'base_rotation' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'base_rotation' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._base_rotation = value

    @builtins.property
    def rotation(self):
        """Message field 'rotation'."""
        return self._rotation

    @rotation.setter
    def rotation(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'rotation' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rotation' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rotation = value

    @builtins.property
    def end_rotation(self):
        """Message field 'end_rotation'."""
        return self._end_rotation

    @end_rotation.setter
    def end_rotation(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'end_rotation' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'end_rotation' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._end_rotation = value

    @builtins.property
    def end_angle(self):
        """Message field 'end_angle'."""
        return self._end_angle

    @end_angle.setter
    def end_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'end_angle' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'end_angle' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._end_angle = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetStepperMotorPositions_Response(type):
    """Metaclass of message 'SetStepperMotorPositions_Response'."""

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
            module = import_type_support('arduino_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arduino_interfaces.srv.SetStepperMotorPositions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_stepper_motor_positions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_stepper_motor_positions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_stepper_motor_positions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_stepper_motor_positions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_stepper_motor_positions__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetStepperMotorPositions_Response(metaclass=Metaclass_SetStepperMotorPositions_Response):
    """Message class 'SetStepperMotorPositions_Response'."""

    __slots__ = [
        '_time_to_complete_ms',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'time_to_complete_ms': 'int64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time_to_complete_ms = kwargs.get('time_to_complete_ms', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.time_to_complete_ms != other.time_to_complete_ms:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def time_to_complete_ms(self):
        """Message field 'time_to_complete_ms'."""
        return self._time_to_complete_ms

    @time_to_complete_ms.setter
    def time_to_complete_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'time_to_complete_ms' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'time_to_complete_ms' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._time_to_complete_ms = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetStepperMotorPositions_Event(type):
    """Metaclass of message 'SetStepperMotorPositions_Event'."""

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
            module = import_type_support('arduino_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arduino_interfaces.srv.SetStepperMotorPositions_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_stepper_motor_positions__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_stepper_motor_positions__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_stepper_motor_positions__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_stepper_motor_positions__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_stepper_motor_positions__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetStepperMotorPositions_Event(metaclass=Metaclass_SetStepperMotorPositions_Event):
    """Message class 'SetStepperMotorPositions_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<arduino_interfaces/SetStepperMotorPositions_Request, 1>',
        'response': 'sequence<arduino_interfaces/SetStepperMotorPositions_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['arduino_interfaces', 'srv'], 'SetStepperMotorPositions_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['arduino_interfaces', 'srv'], 'SetStepperMotorPositions_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from arduino_interfaces.srv import SetStepperMotorPositions_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, SetStepperMotorPositions_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SetStepperMotorPositions_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from arduino_interfaces.srv import SetStepperMotorPositions_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, SetStepperMotorPositions_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SetStepperMotorPositions_Response'"
        self._response = value


class Metaclass_SetStepperMotorPositions(type):
    """Metaclass of service 'SetStepperMotorPositions'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arduino_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arduino_interfaces.srv.SetStepperMotorPositions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_stepper_motor_positions

            from arduino_interfaces.srv import _set_stepper_motor_positions
            if _set_stepper_motor_positions.Metaclass_SetStepperMotorPositions_Request._TYPE_SUPPORT is None:
                _set_stepper_motor_positions.Metaclass_SetStepperMotorPositions_Request.__import_type_support__()
            if _set_stepper_motor_positions.Metaclass_SetStepperMotorPositions_Response._TYPE_SUPPORT is None:
                _set_stepper_motor_positions.Metaclass_SetStepperMotorPositions_Response.__import_type_support__()
            if _set_stepper_motor_positions.Metaclass_SetStepperMotorPositions_Event._TYPE_SUPPORT is None:
                _set_stepper_motor_positions.Metaclass_SetStepperMotorPositions_Event.__import_type_support__()


class SetStepperMotorPositions(metaclass=Metaclass_SetStepperMotorPositions):
    from arduino_interfaces.srv._set_stepper_motor_positions import SetStepperMotorPositions_Request as Request
    from arduino_interfaces.srv._set_stepper_motor_positions import SetStepperMotorPositions_Response as Response
    from arduino_interfaces.srv._set_stepper_motor_positions import SetStepperMotorPositions_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
