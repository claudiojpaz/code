#include <stdio.h>
// u3-op-inc-2.c

int main (void)
{
  int a = 3;
  int b = 3;
  int c;

  c = a++ + ++b;

  printf("c vale %d\n", c);
  printf("a vale %d\n", a);

  return 0;
}
