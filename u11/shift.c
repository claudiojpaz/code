#include <stdio.h>

int main (void) {
  char a = -128;  // 1 0 0 0 0 0 0 0
  char c;         // 1 1 0 0 0 0 0 0

  c = a >> 1;

  printf("%d\n", c);

  return 0;
}

