#include <stdio.h>

int main (void) {
  char caracter1, caracter2;

  printf("Ingrese un caracter: ");
  scanf(" %c", &caracter1);
  printf("Ingrese un caracter: ");
  scanf(" %c", &caracter2);

  printf("Ingresó %c y %c\n", caracter1, caracter2);

  return 0;
}

