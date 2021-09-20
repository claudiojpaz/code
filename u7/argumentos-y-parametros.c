#include <stdio.h>

float potencia (float base, int exponente) {
  float p = 1;

  for (int i = 0; i < exponente; i++)
    p *= base;

  return p;
}

int main (void) {

  float resultado;

  resultado = potencia(2, 3);

  printf("%.2f\n", resultado);

  return 0;
}

