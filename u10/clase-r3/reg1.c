#include <stdio.h>

#define PIN3 0x8

int main (void) {
  unsigned char reg = 128;

  printf("%d\n", reg);

  reg |= PIN3;
  printf("%d\n", reg);

  if (reg & PIN3)
    printf("Encendido\n");
  else
    printf("Apagado\n");

  reg &= ~PIN3;
  printf("%d\n", reg);

  return 0;
}

