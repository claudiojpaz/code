#include <stdio.h>

int main (void)
{
  char a, c;

  a = 77;         // 0 1 0 0 1 1 0 1
  c = ~a;         // 1 0 1 1 0 0 1 0 = -78

  printf("%d\n", c);

  return 0;
}

