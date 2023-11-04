#include <stdio.h>

void imprimir_bits (unsigned char b) {
  unsigned char mask = 1<<7; // 10000000 // 0x80 // 128

  for (int i = 0; i < 8; i++) {
    printf("%d", b & mask ? 1 : 0);
    mask >>= 1;
  }
  printf("\n");
}

int main (void) {
  unsigned char puerto1dir = 0;
  unsigned char pin2mask = 1<<2;
  unsigned char pin3mask = 1<<3;

  imprimir_bits(puerto1dir);
  //prender 2 y 3
  puerto1dir |= pin2mask;
  puerto1dir |= pin3mask;
  imprimir_bits(puerto1dir);
  //apagar 2
  puerto1dir &= ~pin2mask;
  imprimir_bits(puerto1dir);
  //togglear 3
  puerto1dir ^= pin3mask;
  imprimir_bits(puerto1dir);
  //togglear 3
  puerto1dir ^= pin3mask;
  imprimir_bits(puerto1dir);

  if (puerto1dir & pin3mask )
    printf("Prendido\n");
  else
    printf("apagado\n");


  return 0;
}

