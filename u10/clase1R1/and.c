#include <stdio.h>

int main(void){
  char reg = 1;      // 0 0 0 0 0 0 0 1
  char maskb3 = 8;   // 0 0 0 0 1 0 0 0

  if (reg & maskb3)
    printf("Bit encendido \n");
  else
    printf("Bit apagado \n");

  return 0;
}

