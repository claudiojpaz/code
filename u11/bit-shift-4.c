#include <stdio.h>

int main (void)
{
  unsigned char a = 128;
  unsigned char mask5 = 1<<5;
  int shift = 7;

  printf("%p\n", &a);


  // a = a >> shift;      // 0 0 0 0 0 0 0 1
  a >>= shift;      // 0 0 0 0 0 0 0 1

  printf("%d\n", mask5);
  printf("%d\n", a);

  return 0;
}
