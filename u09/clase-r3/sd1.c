#include <stdio.h>

struct dato {
  int entero;
  char caracter;
};

int main (void) {
  struct dato numero = {.caracter='3'};

  printf("%ld\n", sizeof numero);
  printf("%d %c\n", numero.entero, numero.caracter);

  return 0;
}

