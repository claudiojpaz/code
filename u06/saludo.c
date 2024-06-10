#include <stdio.h>
#include "linea.h"

int main (void) {
  int n;
  int r;

  r = printf("Hola, mundo!\n");
  linea(r);

  r = printf("Ingrese un número: ");
  scanf("%d", &n);
  linea(r);

  r = printf("Uds ingresó: %d\n", n);
  linea(r);

  return 0;
}

