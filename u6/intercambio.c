#include <stdio.h>

int main (void) {
  int a = 3;
  int b = 5;
  int tmp;

  printf("a = %d\n", a);
  printf("b = %d\n", b);

  tmp = a;
  a = b;
  b = tmp;

  printf("a = %d\n", a);
  printf("b = %d\n", b);

  return 0;
}

