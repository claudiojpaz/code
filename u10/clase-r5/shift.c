#include <stdio.h>

int main (void) {
  char a = 255;

  a = a >> 1;

  printf("%d\n", a);

  a = a << 1;

  printf("%d\n", a);

  return 0;
}

