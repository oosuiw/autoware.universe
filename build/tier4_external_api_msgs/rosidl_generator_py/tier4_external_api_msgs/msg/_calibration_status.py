# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_external_api_msgs:msg/CalibrationStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CalibrationStatus(type):
    """Metaclass of message 'CalibrationStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACCEL_BRAKE_MAP': 1,
        'NORMAL': 0,
        'CALIBRATION_REQUIRED': 1,
        'UNAVAILABLE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_external_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_external_api_msgs.msg.CalibrationStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__calibration_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__calibration_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__calibration_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__calibration_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__calibration_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACCEL_BRAKE_MAP': cls.__constants['ACCEL_BRAKE_MAP'],
            'NORMAL': cls.__constants['NORMAL'],
            'CALIBRATION_REQUIRED': cls.__constants['CALIBRATION_REQUIRED'],
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
        }

    @property
    def ACCEL_BRAKE_MAP(self):
        """Message constant 'ACCEL_BRAKE_MAP'."""
        return Metaclass_CalibrationStatus.__constants['ACCEL_BRAKE_MAP']

    @property
    def NORMAL(self):
        """Message constant 'NORMAL'."""
        return Metaclass_CalibrationStatus.__constants['NORMAL']

    @property
    def CALIBRATION_REQUIRED(self):
        """Message constant 'CALIBRATION_REQUIRED'."""
        return Metaclass_CalibrationStatus.__constants['CALIBRATION_REQUIRED']

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_CalibrationStatus.__constants['UNAVAILABLE']


class CalibrationStatus(metaclass=Metaclass_CalibrationStatus):
    """
    Message class 'CalibrationStatus'.

    Constants:
      ACCEL_BRAKE_MAP
      NORMAL
      CALIBRATION_REQUIRED
      UNAVAILABLE
    """

    __slots__ = [
        '_target',
        '_status',
    ]

    _fields_and_field_types = {
        'target': 'uint8',
        'status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target = kwargs.get('target', int())
        self.status = kwargs.get('status', int())

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
        if self.target != other.target:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target(self):
        """Message field 'target'."""
        return self._target

    @target.setter
    def target(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target' field must be an unsigned integer in [0, 255]"
        self._target = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value
