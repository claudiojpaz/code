#include <stdio.h>

void saludo (void) {
  printf("hola, mundo!\n");

  saludo();
}

int main (void) {
  saludo();

  return 0;
}

