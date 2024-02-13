# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_external_api_msgs:srv/GetRosbagCopyList.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetRosbagCopyList_Request(type):
    """Metaclass of message 'GetRosbagCopyList_Request'."""

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
            module = import_type_support('tier4_external_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_external_api_msgs.srv.GetRosbagCopyList_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_rosbag_copy_list__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_rosbag_copy_list__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_rosbag_copy_list__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_rosbag_copy_list__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_rosbag_copy_list__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRosbagCopyList_Request(metaclass=Metaclass_GetRosbagCopyList_Request):
    """Message class 'GetRosbagCopyList_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetRosbagCopyList_Response(type):
    """Metaclass of message 'GetRosbagCopyList_Response'."""

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
            module = import_type_support('tier4_external_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_external_api_msgs.srv.GetRosbagCopyList_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_rosbag_copy_list__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_rosbag_copy_list__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_rosbag_copy_list__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_rosbag_copy_list__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_rosbag_copy_list__response

            from tier4_external_api_msgs.msg import ResponseStatus
            if ResponseStatus.__class__._TYPE_SUPPORT is None:
                ResponseStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRosbagCopyList_Response(metaclass=Metaclass_GetRosbagCopyList_Response):
    """Message class 'GetRosbagCopyList_Response'."""

    __slots__ = [
        '_status',
        '_copy_directory_list',
    ]

    _fields_and_field_types = {
        'status': 'tier4_external_api_msgs/ResponseStatus',
        'copy_directory_list': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['tier4_external_api_msgs', 'msg'], 'ResponseStatus'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from tier4_external_api_msgs.msg import ResponseStatus
        self.status = kwargs.get('status', ResponseStatus())
        self.copy_directory_list = kwargs.get('copy_directory_list', str())

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
        if self.status != other.status:
            return False
        if self.copy_directory_list != other.copy_directory_list:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from tier4_external_api_msgs.msg import ResponseStatus
            assert \
                isinstance(value, ResponseStatus), \
                "The 'status' field must be a sub message of type 'ResponseStatus'"
        self._status = value

    @builtins.property
    def copy_directory_list(self):
        """Message field 'copy_directory_list'."""
        return self._copy_directory_list

    @copy_directory_list.setter
    def copy_directory_list(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'copy_directory_list' field must be of type 'str'"
        self._copy_directory_list = value


class Metaclass_GetRosbagCopyList(type):
    """Metaclass of service 'GetRosbagCopyList'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_external_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_external_api_msgs.srv.GetRosbagCopyList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_rosbag_copy_list

            from tier4_external_api_msgs.srv import _get_rosbag_copy_list
            if _get_rosbag_copy_list.Metaclass_GetRosbagCopyList_Request._TYPE_SUPPORT is None:
                _get_rosbag_copy_list.Metaclass_GetRosbagCopyList_Request.__import_type_support__()
            if _get_rosbag_copy_list.Metaclass_GetRosbagCopyList_Response._TYPE_SUPPORT is None:
                _get_rosbag_copy_list.Metaclass_GetRosbagCopyList_Response.__import_type_support__()


class GetRosbagCopyList(metaclass=Metaclass_GetRosbagCopyList):
    from tier4_external_api_msgs.srv._get_rosbag_copy_list import GetRosbagCopyList_Request as Request
    from tier4_external_api_msgs.srv._get_rosbag_copy_list import GetRosbagCopyList_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')