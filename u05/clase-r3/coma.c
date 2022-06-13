#include <stdio.h>

int main (void) {
  int c;
  int a = 3, b = 2;

  c = a++, b++;

  printf("c=%d\n", c);
  printf("a=%d\n", a);

  return 0;
}

