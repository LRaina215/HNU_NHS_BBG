# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmctrl_msgs:msg/Shooter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Shooter(type):
    """Metaclass of message 'Shooter'."""

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
            module = import_type_support('rmctrl_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmctrl_msgs.msg.Shooter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__shooter
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__shooter
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__shooter
            cls._TYPE_SUPPORT = module.type_support_msg__msg__shooter
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__shooter

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Shooter(metaclass=Metaclass_Shooter):
    """Message class 'Shooter'."""

    __slots__ = [
        '_is_shoot',
        '_bullet_vel',
        '_remain_bullet',
    ]

    _fields_and_field_types = {
        'is_shoot': 'int8',
        'bullet_vel': 'int32',
        'remain_bullet': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_shoot = kwargs.get('is_shoot', int())
        self.bullet_vel = kwargs.get('bullet_vel', int())
        self.remain_bullet = kwargs.get('remain_bullet', int())

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
        if self.is_shoot != other.is_shoot:
            return False
        if self.bullet_vel != other.bullet_vel:
            return False
        if self.remain_bullet != other.remain_bullet:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def is_shoot(self):
        """Message field 'is_shoot'."""
        return self._is_shoot

    @is_shoot.setter
    def is_shoot(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_shoot' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'is_shoot' field must be an integer in [-128, 127]"
        self._is_shoot = value

    @property
    def bullet_vel(self):
        """Message field 'bullet_vel'."""
        return self._bullet_vel

    @bullet_vel.setter
    def bullet_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bullet_vel' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bullet_vel' field must be an integer in [-2147483648, 2147483647]"
        self._bullet_vel = value

    @property
    def remain_bullet(self):
        """Message field 'remain_bullet'."""
        return self._remain_bullet

    @remain_bullet.setter
    def remain_bullet(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remain_bullet' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'remain_bullet' field must be an integer in [-32768, 32767]"
        self._remain_bullet = value
