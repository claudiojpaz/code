#include <stdio.h>

int main (void) {
  int a = 3;
  int b = 2;
  int c;

  c=a++,b;

  printf("%d\n", c);
  printf("%d\n", b);
  printf("%d\n", a);

  return 0;
}

