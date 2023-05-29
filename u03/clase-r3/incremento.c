#include <stdio.h>

int main (void) {
  int a = 3;
  int b = 2;
  int c = 1;

  c = a += b = c;

  printf("%d\n", c);
  printf("%d\n", b);
  printf("%d\n", a);

  return 0;
}

