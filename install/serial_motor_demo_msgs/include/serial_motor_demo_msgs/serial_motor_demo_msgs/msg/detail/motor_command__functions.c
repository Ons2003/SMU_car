// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from serial_motor_demo_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice
#include "serial_motor_demo_msgs/msg/detail/motor_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
serial_motor_demo_msgs__msg__MotorCommand__init(serial_motor_demo_msgs__msg__MotorCommand * msg)
{
  if (!msg) {
    return false;
  }
  // mot_1
  // mot_2
  // mot_3
  // mot_4
  return true;
}

void
serial_motor_demo_msgs__msg__MotorCommand__fini(serial_motor_demo_msgs__msg__MotorCommand * msg)
{
  if (!msg) {
    return;
  }
  // mot_1
  // mot_2
  // mot_3
  // mot_4
}

bool
serial_motor_demo_msgs__msg__MotorCommand__are_equal(const serial_motor_demo_msgs__msg__MotorCommand * lhs, const serial_motor_demo_msgs__msg__MotorCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mot_1
  if (lhs->mot_1 != rhs->mot_1) {
    return false;
  }
  // mot_2
  if (lhs->mot_2 != rhs->mot_2) {
    return false;
  }
  // mot_3
  if (lhs->mot_3 != rhs->mot_3) {
    return false;
  }
  // mot_4
  if (lhs->mot_4 != rhs->mot_4) {
    return false;
  }
  return true;
}

bool
serial_motor_demo_msgs__msg__MotorCommand__copy(
  const serial_motor_demo_msgs__msg__MotorCommand * input,
  serial_motor_demo_msgs__msg__MotorCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // mot_1
  output->mot_1 = input->mot_1;
  // mot_2
  output->mot_2 = input->mot_2;
  // mot_3
  output->mot_3 = input->mot_3;
  // mot_4
  output->mot_4 = input->mot_4;
  return true;
}

serial_motor_demo_msgs__msg__MotorCommand *
serial_motor_demo_msgs__msg__MotorCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial_motor_demo_msgs__msg__MotorCommand * msg = (serial_motor_demo_msgs__msg__MotorCommand *)allocator.allocate(sizeof(serial_motor_demo_msgs__msg__MotorCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(serial_motor_demo_msgs__msg__MotorCommand));
  bool success = serial_motor_demo_msgs__msg__MotorCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
serial_motor_demo_msgs__msg__MotorCommand__destroy(serial_motor_demo_msgs__msg__MotorCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    serial_motor_demo_msgs__msg__MotorCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
serial_motor_demo_msgs__msg__MotorCommand__Sequence__init(serial_motor_demo_msgs__msg__MotorCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial_motor_demo_msgs__msg__MotorCommand * data = NULL;

  if (size) {
    data = (serial_motor_demo_msgs__msg__MotorCommand *)allocator.zero_allocate(size, sizeof(serial_motor_demo_msgs__msg__MotorCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = serial_motor_demo_msgs__msg__MotorCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        serial_motor_demo_msgs__msg__MotorCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
serial_motor_demo_msgs__msg__MotorCommand__Sequence__fini(serial_motor_demo_msgs__msg__MotorCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      serial_motor_demo_msgs__msg__MotorCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

serial_motor_demo_msgs__msg__MotorCommand__Sequence *
serial_motor_demo_msgs__msg__MotorCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial_motor_demo_msgs__msg__MotorCommand__Sequence * array = (serial_motor_demo_msgs__msg__MotorCommand__Sequence *)allocator.allocate(sizeof(serial_motor_demo_msgs__msg__MotorCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = serial_motor_demo_msgs__msg__MotorCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
serial_motor_demo_msgs__msg__MotorCommand__Sequence__destroy(serial_motor_demo_msgs__msg__MotorCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    serial_motor_demo_msgs__msg__MotorCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
serial_motor_demo_msgs__msg__MotorCommand__Sequence__are_equal(const serial_motor_demo_msgs__msg__MotorCommand__Sequence * lhs, const serial_motor_demo_msgs__msg__MotorCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!serial_motor_demo_msgs__msg__MotorCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
serial_motor_demo_msgs__msg__MotorCommand__Sequence__copy(
  const serial_motor_demo_msgs__msg__MotorCommand__Sequence * input,
  serial_motor_demo_msgs__msg__MotorCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(serial_motor_demo_msgs__msg__MotorCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    serial_motor_demo_msgs__msg__MotorCommand * data =
      (serial_motor_demo_msgs__msg__MotorCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!serial_motor_demo_msgs__msg__MotorCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          serial_motor_demo_msgs__msg__MotorCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!serial_motor_demo_msgs__msg__MotorCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
