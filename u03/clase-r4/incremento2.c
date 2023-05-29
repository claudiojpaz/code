#include <stdio.h>

int main (void) {
  int a = 2;
  int b = 3;
  int c;

  c = a++ + b;

  printf("%d\n", c);

  return 0;
}

