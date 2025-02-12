# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_external_api_msgs:msg/ResponseStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ResponseStatus(type):
    """Metaclass of message 'ResponseStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCESS': 1,
        'IGNORED': 2,
        'WARN': 3,
        'ERROR': 4,
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
                'tier4_external_api_msgs.msg.ResponseStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__response_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__response_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__response_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__response_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__response_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCESS': cls.__constants['SUCCESS'],
            'IGNORED': cls.__constants['IGNORED'],
            'WARN': cls.__constants['WARN'],
            'ERROR': cls.__constants['ERROR'],
        }

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_ResponseStatus.__constants['SUCCESS']

    @property
    def IGNORED(self):
        """Message constant 'IGNORED'."""
        return Metaclass_ResponseStatus.__constants['IGNORED']

    @property
    def WARN(self):
        """Message constant 'WARN'."""
        return Metaclass_ResponseStatus.__constants['WARN']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_ResponseStatus.__constants['ERROR']


class ResponseStatus(metaclass=Metaclass_ResponseStatus):
    """
    Message class 'ResponseStatus'.

    Constants:
      SUCCESS
      IGNORED
      WARN
      ERROR
    """

    __slots__ = [
        '_code',
        '_message',
    ]

    _fields_and_field_types = {
        'code': 'uint32',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.code = kwargs.get('code', int())
        self.message = kwargs.get('message', str())

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
        if self.code != other.code:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def code(self):
        """Message field 'code'."""
        return self._code

    @code.setter
    def code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'code' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'code' field must be an unsigned integer in [0, 4294967295]"
        self._code = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value
