# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bboxes_ex_msgs:msg/BoundingPolygonBox2D.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BoundingPolygonBox2D(type):
    """Metaclass of message 'BoundingPolygonBox2D'."""

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
            module = import_type_support('bboxes_ex_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'bboxes_ex_msgs.msg.BoundingPolygonBox2D')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bounding_polygon_box2_d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bounding_polygon_box2_d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bounding_polygon_box2_d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bounding_polygon_box2_d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bounding_polygon_box2_d

            from geometry_msgs.msg import Polygon
            if Polygon.__class__._TYPE_SUPPORT is None:
                Polygon.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BoundingPolygonBox2D(metaclass=Metaclass_BoundingPolygonBox2D):
    """Message class 'BoundingPolygonBox2D'."""

    __slots__ = [
        '_class_id',
        '_pose',
        '_img_width',
        '_img_height',
        '_center_dist',
        '_type',
        '_id',
    ]

    _fields_and_field_types = {
        'class_id': 'string',
        'pose': 'geometry_msgs/Polygon',
        'img_width': 'uint16',
        'img_height': 'uint16',
        'center_dist': 'int32',
        'type': 'string',
        'id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Polygon'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.class_id = kwargs.get('class_id', str())
        from geometry_msgs.msg import Polygon
        self.pose = kwargs.get('pose', Polygon())
        self.img_width = kwargs.get('img_width', int())
        self.img_height = kwargs.get('img_height', int())
        self.center_dist = kwargs.get('center_dist', int())
        self.type = kwargs.get('type', str())
        self.id = kwargs.get('id', str())

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
        if self.class_id != other.class_id:
            return False
        if self.pose != other.pose:
            return False
        if self.img_width != other.img_width:
            return False
        if self.img_height != other.img_height:
            return False
        if self.center_dist != other.center_dist:
            return False
        if self.type != other.type:
            return False
        if self.id != other.id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def class_id(self):
        """Message field 'class_id'."""
        return self._class_id

    @class_id.setter
    def class_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'class_id' field must be of type 'str'"
        self._class_id = value

    @property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Polygon
            assert \
                isinstance(value, Polygon), \
                "The 'pose' field must be a sub message of type 'Polygon'"
        self._pose = value

    @property
    def img_width(self):
        """Message field 'img_width'."""
        return self._img_width

    @img_width.setter
    def img_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'img_width' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'img_width' field must be an unsigned integer in [0, 65535]"
        self._img_width = value

    @property
    def img_height(self):
        """Message field 'img_height'."""
        return self._img_height

    @img_height.setter
    def img_height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'img_height' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'img_height' field must be an unsigned integer in [0, 65535]"
        self._img_height = value

    @property
    def center_dist(self):
        """Message field 'center_dist'."""
        return self._center_dist

    @center_dist.setter
    def center_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'center_dist' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'center_dist' field must be an integer in [-2147483648, 2147483647]"
        self._center_dist = value

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value
