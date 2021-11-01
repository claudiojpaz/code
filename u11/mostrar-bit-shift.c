#include <stdio.h>

void print_bits (char c) {
  unsigned char mask = 0x80; // 1 0 0 0 0 0 0 0

  for (int i = 0; i < 8; i++) {
    printf("%d", c & mask ? 1 : 0);
    mask >>= 1;
  }

  printf("\n");
}

int main (void) {
  unsigned char a = 77;

  print_bits(a);

  return 0;
}

