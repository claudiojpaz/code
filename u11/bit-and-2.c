#include <stdio.h>

int main (void)
{
  char portA = 42;    // 0 0 1 0 1 0 1 0
  char mask5 = 32;    // 0 0 1 0 0 0 0 0 = 32 = 0x20

  if ( portA & mask5 )
    printf("bit 5 on\n");
  else
    printf("bit 5 off\n");


  return 0;
}

