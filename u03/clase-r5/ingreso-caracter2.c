#include <stdio.h>

int main (void) {
  char x, y;

  printf("Ingrese un caracter: ");
  scanf("%c", &x);

  printf("Ingrese otro caracter: ");
  scanf(" %c", &y);

  printf("Ingresó un caracter %d y un %d.\n", x, y);

  return 0;
}

