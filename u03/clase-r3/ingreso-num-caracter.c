#include <stdio.h>

int main (void) {
  int z;
  char x;

  printf("Ingrese un número: ");
  scanf("%d", &z);
  printf("Ingrese un caracter: ");
  scanf("%c", &x); // agregar un espacio delante del % para que funcione

  printf("Ud. ingresó %d y %c.\n", z, x);

  return 0;
}

