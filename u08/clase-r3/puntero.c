#include <stdio.h>

int main (void) {
  int a = 3;
  int b = 4;
  int *p[2] = {&a, &b};

  printf("%d\n", *p[1]);

  return 0;
}

