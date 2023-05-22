#include <stdio.h>

int main (void) {
  int nota1, nota2;
  int n=2;

  float promedio;

  printf("Ingrese las notas (separadas por espacio): ");
  scanf("%d %d", &nota1, &nota2);

  promedio = (float)(nota1 + nota2) / n;

  printf("El promedio es %.1f\n", promedio);

  return 0;
}

