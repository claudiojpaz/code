#include <stdio.h>

int main (void)
{
  char portA = 42;        // 0 0 1 0 1 0 1 0
  char mask5 = 32;        // 0 0 1 0 0 0 0 0 = 32 = 0x20

  portA = portA & ~mask5; // 0 0 0 0 1 0 1 0

  printf("%d\n", portA);

  return 0;
}

