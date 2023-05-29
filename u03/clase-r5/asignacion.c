#include <stdio.h>

int main (void) {
  int c, b = 1;

  c = b += 3;

  printf("%d\n", c);

  return 0;
}

