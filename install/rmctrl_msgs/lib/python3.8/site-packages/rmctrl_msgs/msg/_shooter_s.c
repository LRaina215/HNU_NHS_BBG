// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmctrl_msgs:msg/Shooter.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rmctrl_msgs/msg/detail/shooter__struct.h"
#include "rmctrl_msgs/msg/detail/shooter__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rmctrl_msgs__msg__shooter__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rmctrl_msgs.msg._shooter.Shooter", full_classname_dest, 32) == 0);
  }
  rmctrl_msgs__msg__Shooter * ros_message = _ros_message;
  {  // is_shoot
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_shoot");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_shoot = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bullet_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "bullet_vel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bullet_vel = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // remain_bullet
    PyObject * field = PyObject_GetAttrString(_pymsg, "remain_bullet");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remain_bullet = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmctrl_msgs__msg__shooter__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Shooter */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmctrl_msgs.msg._shooter");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Shooter");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmctrl_msgs__msg__Shooter * ros_message = (rmctrl_msgs__msg__Shooter *)raw_ros_message;
  {  // is_shoot
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->is_shoot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_shoot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bullet_vel
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bullet_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bullet_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remain_bullet
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->remain_bullet);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remain_bullet", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
