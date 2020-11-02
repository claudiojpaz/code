#include <stdio.h>

int main (void)
{
  unsigned int portA = 42;    // 0 0 1 0 1 0 1 0
  unsigned int mask = 128;    // 1 0 0 0 0 0 0 0 = 128 = 0x20

  for (int i = 0; i < 8; i++) {
    if ( portA & mask )
      printf("1");
    else
      printf("0");

    mask >>= 1;
  }

  printf("\n");

  return 0;
}

