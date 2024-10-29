#include <stdio.h>
#include "../../testing/format_assertion/format_assertion.h"
#include "creation_test.h"

void fromIntTests() {
  const unsigned int value = 45000;
  printf("when iuintFromInt is called with %d as value the returned iuint should :\n", value);

  const iuint newIuint = iuintFromInt(value);

  printf(
    "%s",
    formatAssertion(
      "have index equal to 0",
      newIuint.index == 0
    )
  );
  printf(
    "%s",
    formatAssertion(
      "have value equal to 45000", 
      newIuint.value == 45001
    )
  );
  printf(
    "%s",
    formatAssertion(
      "have next equal to 0", 
      newIuint.next == 0
    )
  );
}

void creationTests() {
  printf("-- creation --\n");
  fromIntTests();
}
