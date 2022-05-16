#include <stdio.h>

int main (void) {
  int a = 3, b = 2, c;

  c = b + a++;

  a = a + 2;

  printf("%d\n", c);
  printf("%d\n", b);
  printf("%d\n", a);

  return 0;
}

