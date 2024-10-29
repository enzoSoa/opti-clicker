#include <stdlib.h>
#include <string.h>

char* formatAssertion(char* condition, int isTrue) {
  char* prefix = isTrue ? "\033[32m" : "\033[31m";
  char* separator = " -> ";
  char* suffix = "\n\033[0m";

  int size = strlen(prefix) + strlen(separator)
    + strlen(condition) + strlen(suffix);
  char* assertion = (char*) malloc(size);
  strcpy(assertion, prefix);
  strcat(assertion, separator);
  strcat(assertion, condition);
  strcat(assertion, suffix);
  
  return assertion;
}
