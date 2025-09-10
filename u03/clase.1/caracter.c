#include <stdio.h>

int main (void) {
  char n1, n2;

  printf("Ingrese un caracter: ");
  scanf(" %c", &n1);
  printf("Ingrese otro caracter: ");
  scanf(" %c", &n2);

  printf("Ingresó %d y %d\n", n1, n2);

  return 0;
}

