#include <stdio.h>

int main (void) {
  char x;
  int y;

  printf("Ingrese un entero: ");
  scanf("%d", &y);
  printf("Ingrese un caracter: ");
  scanf(" %c", &x);

  printf("Ingresó un caracter %c y un entero %d.\n", x, y);

  return 0;
}

