#include <stdio.h>

int main (void) {
  int var;
  int a;
  const int *p = &var;

  *((int*)p) = 42;
  printf("%d\n", *p);

  p = &a;

  a++;
  return 0;
}

