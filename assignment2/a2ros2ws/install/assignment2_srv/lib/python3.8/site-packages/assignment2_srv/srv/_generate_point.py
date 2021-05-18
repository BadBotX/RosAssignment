# generated from rosidl_generator_py/resource/_idl.py.em
# with input from assignment2_srv:srv/GeneratePoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GeneratePoint_Request(type):
    """Metaclass of message 'GeneratePoint_Request'."""

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
                'assignment2_srv.srv.GeneratePoint_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_point__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_point__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_point__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_point__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_point__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GeneratePoint_Request(metaclass=Metaclass_GeneratePoint_Request):
    """Message class 'GeneratePoint_Request'."""

    __slots__ = [
        '_gp_call',
    ]

    _fields_and_field_types = {
        'gp_call': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gp_call = kwargs.get('gp_call', bool())

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
        if self.gp_call != other.gp_call:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def gp_call(self):
        """Message field 'gp_call'."""
        return self._gp_call

    @gp_call.setter
    def gp_call(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gp_call' field must be of type 'bool'"
        self._gp_call = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GeneratePoint_Response(type):
    """Metaclass of message 'GeneratePoint_Response'."""

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
                'assignment2_srv.srv.GeneratePoint_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_point__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_point__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_point__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_point__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_point__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GeneratePoint_Response(metaclass=Metaclass_GeneratePoint_Response):
    """Message class 'GeneratePoint_Response'."""

    __slots__ = [
        '_x',
        '_y',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value


class Metaclass_GeneratePoint(type):
    """Metaclass of service 'GeneratePoint'."""

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
                'assignment2_srv.srv.GeneratePoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__generate_point

            from assignment2_srv.srv import _generate_point
            if _generate_point.Metaclass_GeneratePoint_Request._TYPE_SUPPORT is None:
                _generate_point.Metaclass_GeneratePoint_Request.__import_type_support__()
            if _generate_point.Metaclass_GeneratePoint_Response._TYPE_SUPPORT is None:
                _generate_point.Metaclass_GeneratePoint_Response.__import_type_support__()


class GeneratePoint(metaclass=Metaclass_GeneratePoint):
    from assignment2_srv.srv._generate_point import GeneratePoint_Request as Request
    from assignment2_srv.srv._generate_point import GeneratePoint_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
