#include <stdio.h>

int main (void)
{
  char a, c;

  a = 10;         // 0 0 0 0 1 0 1 0
  c = a >> 1;     // 0 0 0 0 0 1 0 1

  printf("%d\n", c);

  return 0;
}
