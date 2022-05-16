#include <stdio.h>

int main (void) {
  float radio;
  float resultado;

  printf("Ingrese un real: ");
  scanf("%f", &radio);

  resultado = radio * 0.25; // dividido 4

  printf("El resultado es %.2f\n", resultado);

  return 0;
}

