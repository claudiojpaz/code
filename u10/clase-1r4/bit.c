#include <stdio.h>

void imprimir_bits (unsigned char b) {
  unsigned char mask = 1<<7;

  for (int i = 0; i < 8; i++) {
    printf("%d", b & mask ? 1 : 0);
    mask >>= 1;
  }

  printf("\n");
}

int main (void) {
  unsigned char p1dir = 0x00; // 00000000 // 0 salida, 1 entrada
  unsigned char pin2mask = 0x04; // 00000100
  unsigned char pin3mask = 1<<3; // 00001000

  imprimir_bits(p1dir);

  //prender 2 y 3
  p1dir |= pin2mask;
  p1dir |= pin3mask;

  imprimir_bits(p1dir);

  // apagar 2
  p1dir &= ~pin2mask;

  imprimir_bits(p1dir);

  // toggle 3
  p1dir ^= pin3mask;
  imprimir_bits(p1dir);
  // evaluar 3
  if (p1dir & pin3mask)
    printf("Prendido\n");
  else
    printf("Apagado\n");

  return 0;
}

