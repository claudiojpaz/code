#include <stdio.h>

int main(void){
  char reg = 1;      // 0 0 0 0 0 0 0 1
  char maskb3 = 8;   // 0 0 0 0 1 0 0 0

  reg = reg | maskb3;

  if (reg & maskb3)
    printf("Bit encendido \n");
  else
    printf("Bit apagado \n");

  printf("%d\n", reg);
  return 0;
}

