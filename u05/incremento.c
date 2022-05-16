#include <stdio.h>

int main (void) {
  int a = 2, b = 5, c;

  c = a+++ ++b;

  printf("c=%d\n", c);

  return 0;
}

