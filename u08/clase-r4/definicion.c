#include <stdio.h>

int main (void) {
  int var = 257;
  int *p;
  char *q;
  void *r;

  p = &var;
  r = p;
  q = r;

  printf("%d\n", *q);
  printf("%d\n", *p);
  printf("%d\n", var);

  return 0;
}

