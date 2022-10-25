#include <stdio.h>

int main (void) {
  char a = 255;
  unsigned char b = a >> 1;

  printf("%d\n", a);

  return 0;
}

