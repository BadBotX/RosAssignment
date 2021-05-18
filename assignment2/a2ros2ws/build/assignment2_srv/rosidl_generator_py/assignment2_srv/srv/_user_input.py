# generated from rosidl_generator_py/resource/_idl.py.em
# with input from assignment2_srv:srv/UserInput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UserInput_Request(type):
    """Metaclass of message 'UserInput_Request'."""

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
            module = import_type_support('assignment2_srv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'assignment2_srv.srv.UserInput_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__user_input__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__user_input__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__user_input__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__user_input__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__user_input__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UserInput_Request(metaclass=Metaclass_UserInput_Request):
    """Message class 'UserInput_Request'."""

    __slots__ = [
        '_user_input',
    ]

    _fields_and_field_types = {
        'user_input': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.user_input = kwargs.get('user_input', int())

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
        if self.user_input != other.user_input:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def user_input(self):
        """Message field 'user_input'."""
        return self._user_input

    @user_input.setter
    def user_input(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'user_input' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'user_input' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._user_input = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_UserInput_Response(type):
    """Metaclass of message 'UserInput_Response'."""

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
            module = import_type_support('assignment2_srv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'assignment2_srv.srv.UserInput_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__user_input__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__user_input__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__user_input__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__user_input__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__user_input__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UserInput_Response(metaclass=Metaclass_UserInput_Response):
    """Message class 'UserInput_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
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


class Metaclass_UserInput(type):
    """Metaclass of service 'UserInput'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('assignment2_srv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'assignment2_srv.srv.UserInput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__user_input

            from assignment2_srv.srv import _user_input
            if _user_input.Metaclass_UserInput_Request._TYPE_SUPPORT is None:
                _user_input.Metaclass_UserInput_Request.__import_type_support__()
            if _user_input.Metaclass_UserInput_Response._TYPE_SUPPORT is None:
                _user_input.Metaclass_UserInput_Response.__import_type_support__()


class UserInput(metaclass=Metaclass_UserInput):
    from assignment2_srv.srv._user_input import UserInput_Request as Request
    from assignment2_srv.srv._user_input import UserInput_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
