#include <stdio.h>

int main (void) {
  int nota1, nota2;
  float promedio;
  int n;

  printf("Ingrese la primera calificación obtenida: ");
  scanf("%d", &nota1);

  printf("Ingrese la segunda calificación obtenida: ");
  scanf("%d", &nota2);

  n = 2;

  promedio = (nota1 + nota2) / (float) n;

  printf("El promedio es %.2f\n", promedio);

  return 0;
}

