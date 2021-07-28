#include <stdio.h>

int main (void) {
  int n = 2;

  printf("Hay %d caramelo%c\n", n, n>1 ? 's':' ');

  return 0;
}

