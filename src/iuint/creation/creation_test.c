#include <stdio.h>
#include "creation_test.h"

void fromIntTests() {
  const unsigned int value = 45000;
  printf("when iuintFromInt is called with %d as value the returned iuint should :\n", value);

  const iuint newIuint = iuintFromInt(value);

  printf(
    "%s -> have index equal to 0\n",
    newIuint.index == 0 ? "" : ""
  );
  printf(
    "%s -> have value equal to 45000\n",
    newIuint.value == 45001 ? "" : ""
  );
  printf(
    "%s -> have next equal to 0\n",
    newIuint.next == 0 ? "" : ""
  );
}

void creationTests() {
  printf("-- creation --\n");
  fromIntTests();
}
