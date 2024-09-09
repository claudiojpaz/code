#include <stdio.h>

int main (void) {
  int var = 65;
  char *p;
  void *q;

  q = &var;
  p = q;

  printf("%p\n", (void*) &var);

  return 0;
}

