#include <stdio.h>

int main (void) {
  int c;
  int a = 5, b = 2;

  //c = (a++, ++b);
  c = a++, ++b;

  printf("c = %d\n", c);
  printf("b = %d\n", b);
  printf("a = %d\n", a);

  return 0;
}

