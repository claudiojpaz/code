#include <stdio.h>

int main (void) {
  int var;
  int cuantos;

  printf("Ingrese un número: ");
  scanf("%d", &var);

  cuantos = putchar(var);
  printf("Se imprimieron %d\n", cuantos);

  return 0;
}

