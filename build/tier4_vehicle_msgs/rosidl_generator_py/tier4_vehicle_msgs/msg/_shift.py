# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_vehicle_msgs:msg/Shift.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Shift(type):
    """Metaclass of message 'Shift'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'PARKING': 1,
        'REVERSE': 2,
        'NEUTRAL': 3,
        'DRIVE': 4,
        'LOW': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_vehicle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_vehicle_msgs.msg.Shift')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__shift
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__shift
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__shift
            cls._TYPE_SUPPORT = module.type_support_msg__msg__shift
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__shift

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'PARKING': cls.__constants['PARKING'],
            'REVERSE': cls.__constants['REVERSE'],
            'NEUTRAL': cls.__constants['NEUTRAL'],
            'DRIVE': cls.__constants['DRIVE'],
            'LOW': cls.__constants['LOW'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_Shift.__constants['NONE']

    @property
    def PARKING(self):
        """Message constant 'PARKING'."""
        return Metaclass_Shift.__constants['PARKING']

    @property
    def REVERSE(self):
        """Message constant 'REVERSE'."""
        return Metaclass_Shift.__constants['REVERSE']

    @property
    def NEUTRAL(self):
        """Message constant 'NEUTRAL'."""
        return Metaclass_Shift.__constants['NEUTRAL']

    @property
    def DRIVE(self):
        """Message constant 'DRIVE'."""
        return Metaclass_Shift.__constants['DRIVE']

    @property
    def LOW(self):
        """Message constant 'LOW'."""
        return Metaclass_Shift.__constants['LOW']


class Shift(metaclass=Metaclass_Shift):
    """
    Message class 'Shift'.

    Constants:
      NONE
      PARKING
      REVERSE
      NEUTRAL
      DRIVE
      LOW
    """

    __slots__ = [
        '_data',
    ]

    _fields_and_field_types = {
        'data': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data = kwargs.get('data', int())

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
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'data' field must be an integer in [-2147483648, 2147483647]"
        self._data = value
