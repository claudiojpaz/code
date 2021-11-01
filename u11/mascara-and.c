#include <stdio.h>

int main (void) {
  //char GPIO = 42;    //  0 0 1 0 1 0 1 0 0x2a
  char GPIO = 34;    //  0 0 1 0 0 0 1 0  0x22
  char maskb3 = 8;   //  0 0 0 0 1 0 0 0  0x08

  if (GPIO & maskb3)
    printf("bit 3 encendido\n");
  else
    printf("bit 3 apagado\n");

  return 0;
}

