# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/SkidModel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SkidModel(type):
    """Metaclass of message 'SkidModel'."""

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
            module = import_type_support('morai_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'morai_msgs.msg.SkidModel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__skid_model
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__skid_model
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__skid_model
            cls._TYPE_SUPPORT = module.type_support_msg__msg__skid_model
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__skid_model

            from morai_msgs.msg import WheelRpm
            if WheelRpm.__class__._TYPE_SUPPORT is None:
                WheelRpm.__class__.__import_type_support__()

            from morai_msgs.msg import WheelTorque
            if WheelTorque.__class__._TYPE_SUPPORT is None:
                WheelTorque.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SkidModel(metaclass=Metaclass_SkidModel):
    """Message class 'SkidModel'."""

    __slots__ = [
        '_rpm',
        '_torque',
    ]

    _fields_and_field_types = {
        'rpm': 'morai_msgs/WheelRpm',
        'torque': 'morai_msgs/WheelTorque',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['morai_msgs', 'msg'], 'WheelRpm'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['morai_msgs', 'msg'], 'WheelTorque'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from morai_msgs.msg import WheelRpm
        self.rpm = kwargs.get('rpm', WheelRpm())
        from morai_msgs.msg import WheelTorque
        self.torque = kwargs.get('torque', WheelTorque())

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
        if self.rpm != other.rpm:
            return False
        if self.torque != other.torque:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rpm(self):
        """Message field 'rpm'."""
        return self._rpm

    @rpm.setter
    def rpm(self, value):
        if __debug__:
            from morai_msgs.msg import WheelRpm
            assert \
                isinstance(value, WheelRpm), \
                "The 'rpm' field must be a sub message of type 'WheelRpm'"
        self._rpm = value

    @builtins.property
    def torque(self):
        """Message field 'torque'."""
        return self._torque

    @torque.setter
    def torque(self, value):
        if __debug__:
            from morai_msgs.msg import WheelTorque
            assert \
                isinstance(value, WheelTorque), \
                "The 'torque' field must be a sub message of type 'WheelTorque'"
        self._torque = value
