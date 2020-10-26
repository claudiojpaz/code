#include <stdio.h>

int main (void)
{
  char a;

  a = 10;         // 0 0 0 0 1 0 1 0
  a = a >> 1;     // 0 0 0 0 0 1 0 1

  printf("%d\n", a);

  a = a >> 1;     // 0 0 0 0 0 0 1 0
  printf("%d\n", a);

  a = a >> 1;     // 0 0 0 0 0 0 0 1
  printf("%d\n", a);

  a = a >> 1;     // 0 0 0 0 0 0 0 0
  printf("%d\n", a);

  a = a >> 1;     // 0 0 0 0 0 0 0 0
  printf("%d\n", a);

  return 0;
}
