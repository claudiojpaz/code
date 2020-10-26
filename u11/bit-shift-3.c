#include <stdio.h>

int main (void)
{
  unsigned char a, c;

  a = 128;         // 1 0 0 0 0 0 0 0
  c = a >> 7;      // 0 0 0 0 0 0 0 1

  printf("%d\n", c);

  return 0;
}
