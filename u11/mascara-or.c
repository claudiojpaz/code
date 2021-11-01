#include <stdio.h>

int main (void) {
  char GPIO = 34;    //  0 0 1 0 0 0 1 0  0x22
  char maskb3 = 8;   //  0 0 0 0 1 0 0 0  0x08
                     //  0 0 1 0 1 0 1 0

  GPIO = GPIO | maskb3;

  printf("%d\n", GPIO);

  return 0;
}

