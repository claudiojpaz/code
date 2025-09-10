#include <stdio.h>

int main (void) {
  float promedio;
  int nota1 = 5, nota2 = 6;
  int cantidad = 2;

  promedio = (float) (nota1 + nota2) / cantidad;
  printf("%.1f\n", promedio);

  return 0;
}

