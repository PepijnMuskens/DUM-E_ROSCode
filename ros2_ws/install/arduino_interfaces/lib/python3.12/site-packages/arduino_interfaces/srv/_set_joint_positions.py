# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arduino_interfaces:srv/SetJointPositions.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetJointPositions_Request(type):
    """Metaclass of message 'SetJointPositions_Request'."""

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
                'arduino_interfaces.srv.SetJointPositions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_joint_positions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_joint_positions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_joint_positions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_joint_positions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_joint_positions__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetJointPositions_Request(metaclass=Metaclass_SetJointPositions_Request):
    """Message class 'SetJointPositions_Request'."""

    __slots__ = [
        '_joint0',
        '_joint1',
        '_joint2',
        '_joint3',
        '_joint4',
        '_joint5',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'joint0': 'int32',
        'joint1': 'int32',
        'joint2': 'int32',
        'joint3': 'int32',
        'joint4': 'int32',
        'joint5': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.joint0 = kwargs.get('joint0', int())
        self.joint1 = kwargs.get('joint1', int())
        self.joint2 = kwargs.get('joint2', int())
        self.joint3 = kwargs.get('joint3', int())
        self.joint4 = kwargs.get('joint4', int())
        self.joint5 = kwargs.get('joint5', int())

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
        if self.joint0 != other.joint0:
            return False
        if self.joint1 != other.joint1:
            return False
        if self.joint2 != other.joint2:
            return False
        if self.joint3 != other.joint3:
            return False
        if self.joint4 != other.joint4:
            return False
        if self.joint5 != other.joint5:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint0(self):
        """Message field 'joint0'."""
        return self._joint0

    @joint0.setter
    def joint0(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'joint0' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'joint0' field must be an integer in [-2147483648, 2147483647]"
        self._joint0 = value

    @builtins.property
    def joint1(self):
        """Message field 'joint1'."""
        return self._joint1

    @joint1.setter
    def joint1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'joint1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'joint1' field must be an integer in [-2147483648, 2147483647]"
        self._joint1 = value

    @builtins.property
    def joint2(self):
        """Message field 'joint2'."""
        return self._joint2

    @joint2.setter
    def joint2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'joint2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'joint2' field must be an integer in [-2147483648, 2147483647]"
        self._joint2 = value

    @builtins.property
    def joint3(self):
        """Message field 'joint3'."""
        return self._joint3

    @joint3.setter
    def joint3(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'joint3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'joint3' field must be an integer in [-2147483648, 2147483647]"
        self._joint3 = value

    @builtins.property
    def joint4(self):
        """Message field 'joint4'."""
        return self._joint4

    @joint4.setter
    def joint4(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'joint4' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'joint4' field must be an integer in [-2147483648, 2147483647]"
        self._joint4 = value

    @builtins.property
    def joint5(self):
        """Message field 'joint5'."""
        return self._joint5

    @joint5.setter
    def joint5(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'joint5' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'joint5' field must be an integer in [-2147483648, 2147483647]"
        self._joint5 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetJointPositions_Response(type):
    """Metaclass of message 'SetJointPositions_Response'."""

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
                'arduino_interfaces.srv.SetJointPositions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_joint_positions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_joint_positions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_joint_positions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_joint_positions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_joint_positions__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetJointPositions_Response(metaclass=Metaclass_SetJointPositions_Response):
    """Message class 'SetJointPositions_Response'."""

    __slots__ = [
        '_time_to_complete_ms',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'time_to_complete_ms': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'time_to_complete_ms' field must be an integer in [-2147483648, 2147483647]"
        self._time_to_complete_ms = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetJointPositions_Event(type):
    """Metaclass of message 'SetJointPositions_Event'."""

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
                'arduino_interfaces.srv.SetJointPositions_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_joint_positions__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_joint_positions__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_joint_positions__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_joint_positions__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_joint_positions__event

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


class SetJointPositions_Event(metaclass=Metaclass_SetJointPositions_Event):
    """Message class 'SetJointPositions_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<arduino_interfaces/SetJointPositions_Request, 1>',
        'response': 'sequence<arduino_interfaces/SetJointPositions_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['arduino_interfaces', 'srv'], 'SetJointPositions_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['arduino_interfaces', 'srv'], 'SetJointPositions_Response'), 1),  # noqa: E501
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
            from arduino_interfaces.srv import SetJointPositions_Request
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
                 all(isinstance(v, SetJointPositions_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SetJointPositions_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from arduino_interfaces.srv import SetJointPositions_Response
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
                 all(isinstance(v, SetJointPositions_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SetJointPositions_Response'"
        self._response = value


class Metaclass_SetJointPositions(type):
    """Metaclass of service 'SetJointPositions'."""

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
                'arduino_interfaces.srv.SetJointPositions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_joint_positions

            from arduino_interfaces.srv import _set_joint_positions
            if _set_joint_positions.Metaclass_SetJointPositions_Request._TYPE_SUPPORT is None:
                _set_joint_positions.Metaclass_SetJointPositions_Request.__import_type_support__()
            if _set_joint_positions.Metaclass_SetJointPositions_Response._TYPE_SUPPORT is None:
                _set_joint_positions.Metaclass_SetJointPositions_Response.__import_type_support__()
            if _set_joint_positions.Metaclass_SetJointPositions_Event._TYPE_SUPPORT is None:
                _set_joint_positions.Metaclass_SetJointPositions_Event.__import_type_support__()


class SetJointPositions(metaclass=Metaclass_SetJointPositions):
    from arduino_interfaces.srv._set_joint_positions import SetJointPositions_Request as Request
    from arduino_interfaces.srv._set_joint_positions import SetJointPositions_Response as Response
    from arduino_interfaces.srv._set_joint_positions import SetJointPositions_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
