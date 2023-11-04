#include <stdio.h>

void imprimir_byte (unsigned char b) {
  unsigned char mask = 1<<7;  // b10000000 // 0x80

  for (int i = 0; i < 8; i++) {
    printf("%d", b & mask ? 1: 0);
    mask >>= 1;
  }
  printf("\n");
}


int main (void) {
  unsigned char p1dir = 0; //00000000
  unsigned char pin3mask = 0x08;
  unsigned char pin2mask = 0x04;
  unsigned char p1status = 0; //00000000

  imprimir_byte(p1dir);
  // prender 2 y 3
  p1dir |= pin3mask;
  p1dir |= pin2mask;
  imprimir_byte(p1dir);
  //togglear 3
  p1dir ^= pin3mask;
  imprimir_byte(p1dir);
  //togglear 3
  p1dir ^= pin3mask;
  imprimir_byte(p1dir);

  // prender 3
  p1dir |= pin3mask;
  //apagar 3
  p1dir &= ~pin3mask;
  imprimir_byte(p1dir);

  //cheaquear pin2 prendido

  if (p1status & pin2mask)
    printf("prendido\n");
  else
    printf("apagado\n");


  return 0;
}

