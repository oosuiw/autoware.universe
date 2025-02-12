# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_control_msgs:msg/Lateral.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Lateral(type):
    """Metaclass of message 'Lateral'."""

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
            module = import_type_support('autoware_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_control_msgs.msg.Lateral')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lateral
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lateral
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lateral
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lateral
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lateral

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Lateral(metaclass=Metaclass_Lateral):
    """Message class 'Lateral'."""

    __slots__ = [
        '_stamp',
        '_control_time',
        '_steering_tire_angle',
        '_steering_tire_rotation_rate',
        '_is_defined_steering_tire_rotation_rate',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'control_time': 'builtin_interfaces/Time',
        'steering_tire_angle': 'float',
        'steering_tire_rotation_rate': 'float',
        'is_defined_steering_tire_rotation_rate': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        from builtin_interfaces.msg import Time
        self.control_time = kwargs.get('control_time', Time())
        self.steering_tire_angle = kwargs.get('steering_tire_angle', float())
        self.steering_tire_rotation_rate = kwargs.get('steering_tire_rotation_rate', float())
        self.is_defined_steering_tire_rotation_rate = kwargs.get('is_defined_steering_tire_rotation_rate', bool())

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
        if self.stamp != other.stamp:
            return False
        if self.control_time != other.control_time:
            return False
        if self.steering_tire_angle != other.steering_tire_angle:
            return False
        if self.steering_tire_rotation_rate != other.steering_tire_rotation_rate:
            return False
        if self.is_defined_steering_tire_rotation_rate != other.is_defined_steering_tire_rotation_rate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def control_time(self):
        """Message field 'control_time'."""
        return self._control_time

    @control_time.setter
    def control_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'control_time' field must be a sub message of type 'Time'"
        self._control_time = value

    @builtins.property
    def steering_tire_angle(self):
        """Message field 'steering_tire_angle'."""
        return self._steering_tire_angle

    @steering_tire_angle.setter
    def steering_tire_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_tire_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_tire_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_tire_angle = value

    @builtins.property
    def steering_tire_rotation_rate(self):
        """Message field 'steering_tire_rotation_rate'."""
        return self._steering_tire_rotation_rate

    @steering_tire_rotation_rate.setter
    def steering_tire_rotation_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_tire_rotation_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_tire_rotation_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_tire_rotation_rate = value

    @builtins.property
    def is_defined_steering_tire_rotation_rate(self):
        """Message field 'is_defined_steering_tire_rotation_rate'."""
        return self._is_defined_steering_tire_rotation_rate

    @is_defined_steering_tire_rotation_rate.setter
    def is_defined_steering_tire_rotation_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_defined_steering_tire_rotation_rate' field must be of type 'bool'"
        self._is_defined_steering_tire_rotation_rate = value
