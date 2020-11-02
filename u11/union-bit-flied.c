#include <stdio.h>

union ieee_bf {
  float ieee;
  struct {
    unsigned int mantissa:23;
    unsigned int exp:8;
    unsigned int sign:1;
  } bf;
};

int main (void)
{
  union ieee_bf d = {2.5};

  printf("%u\n", d.bf.exp);

  return 0;
}
