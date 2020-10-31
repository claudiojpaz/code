#include <stdio.h>

union byte_nibble {
  unsigned char byte;
  struct {
    unsigned char n1:4;
    unsigned char n2:4;
  } nibble;
};

int main (void)
{
  union byte_nibble b;

  unsigned char num = 42;         // 0 0 1 0   1 0 1 0
  unsigned char mask = 1<<3;  // 1 0 0 0   0 0 0 0

  b.byte = num;


  for (int i = 0; i < 4; i++) {
    printf("%d", mask & b.nibble.n2 ? 1 : 0);

    // int r = mask & num;
    // if ( r != 0 )
    //   printf("%d", 1);
    // else
    //   printf("%d", 0);

    mask = mask >> 1;
  }

  printf("\n");


  return 0;
}

