#include <stdio.h>

int main (void) {
  char caracter;
  int enteros;
  float reales;

  printf("ingrese un caracter: ");
  scanf(" %c", &caracter);
  printf("ingrese un entero: ");
  scanf("%d", &enteros);
  printf("ingrese un real: ");
  scanf("%f", &reales);

  printf("ingresó %c, %d y %.2f\n", caracter, enteros, reales);

  return 0;
}

