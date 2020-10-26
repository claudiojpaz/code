#include <stdio.h>

int main (void)
{
  int a, b, c;

  a = 77;         // 0 1 0 0 1 1 0 1
  b = 42;         // 0 0 1 0 1 0 1 0
  c = a | b;      // 0 1 1 0 1 1 1 1 = 111

  printf("%d\n", c);

  return 0;
}
