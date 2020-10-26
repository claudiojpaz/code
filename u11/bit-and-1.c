#include <stdio.h>

int main (void)
{
  char a, b, c;

  a = 77;         // 0 1 0 0 1 1 0 1
  b = 42;         // 0 0 1 0 1 0 1 0
  c = a & b;      // 0 0 0 0 1 0 0 0 = 8

  printf("%d\n", c);

  return 0;
}
