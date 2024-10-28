#include "creation.h"

iuint iuintFromInt(unsigned int value) {
  iuint newIuint = { .index = 0, .value = value, .next = 0 };
  return newIuint;
}
