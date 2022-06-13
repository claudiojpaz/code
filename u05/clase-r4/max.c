#include <stdio.h>

int main (void) {
  int max;
  int a = 3, b = 2;

  max = a > b ? a : b;

  printf("%d\n", max);

  return 0;
}

