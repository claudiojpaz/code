#include <stdio.h>

int main(void){
  char reg = 1;      // 0 0 0 0 0 0 0 1
  char mask_b3 = 8;  // 0 0 0 0 1 0 0 0

  reg = reg | mask_b3;

  if (reg & mask_b3)
    printf("LED Encendido\n");
  else
    printf("LED Apagado\n");

  return 0;
}

