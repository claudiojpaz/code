#include <stdio.h>

int main (void) {
  int a = 3;
  int b = 4;

  int *p[2];

  p[0] = &a;
  p[1] = &b;

  printf("%d\n", *p[1]);

  return 0;
}

