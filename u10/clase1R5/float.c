#include <stdio.h>


void imprimir_bits (char byte) {
  unsigned char mask = 1<<7;

  for (int i = 0; i < 8; i++) {
    if (mask & byte)
      printf("1");
    else
      printf("0");

    mask >>= 1;
  }

  printf("\n");
}

int main (void) {
  char var = 42;

  imprimir_bits(var);

  return 0;
}

