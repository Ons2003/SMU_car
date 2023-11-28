# generated from rosidl_generator_py/resource/_idl.py.em
# with input from serial_motor_demo_msgs:msg/MotorCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorCommand(type):
    """Metaclass of message 'MotorCommand'."""

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
            module = import_type_support('serial_motor_demo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'serial_motor_demo_msgs.msg.MotorCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorCommand(metaclass=Metaclass_MotorCommand):
    """Message class 'MotorCommand'."""

    __slots__ = [
        '_mot_1',
        '_mot_2',
        '_mot_3',
        '_mot_4',
    ]

    _fields_and_field_types = {
        'mot_1': 'int32',
        'mot_2': 'int32',
        'mot_3': 'int32',
        'mot_4': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mot_1 = kwargs.get('mot_1', int())
        self.mot_2 = kwargs.get('mot_2', int())
        self.mot_3 = kwargs.get('mot_3', int())
        self.mot_4 = kwargs.get('mot_4', int())

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
        if self.mot_1 != other.mot_1:
            return False
        if self.mot_2 != other.mot_2:
            return False
        if self.mot_3 != other.mot_3:
            return False
        if self.mot_4 != other.mot_4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mot_1(self):
        """Message field 'mot_1'."""
        return self._mot_1

    @mot_1.setter
    def mot_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mot_1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mot_1' field must be an integer in [-2147483648, 2147483647]"
        self._mot_1 = value

    @builtins.property
    def mot_2(self):
        """Message field 'mot_2'."""
        return self._mot_2

    @mot_2.setter
    def mot_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mot_2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mot_2' field must be an integer in [-2147483648, 2147483647]"
        self._mot_2 = value

    @builtins.property
    def mot_3(self):
        """Message field 'mot_3'."""
        return self._mot_3

    @mot_3.setter
    def mot_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mot_3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mot_3' field must be an integer in [-2147483648, 2147483647]"
        self._mot_3 = value

    @builtins.property
    def mot_4(self):
        """Message field 'mot_4'."""
        return self._mot_4

    @mot_4.setter
    def mot_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mot_4' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mot_4' field must be an integer in [-2147483648, 2147483647]"
        self._mot_4 = value
