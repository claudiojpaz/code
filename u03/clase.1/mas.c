#include <stdio.h>

int main (void) {
  int a = 5, b = 4;
  int c;

  c = a+ ++b;

  printf("a vale %d\n", a);
  printf("b vale %d\n", b);
  printf("c vale %d\n", c);

  return 0;
}

