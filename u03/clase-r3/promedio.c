#include <stdio.h>

int main (void) {
  int nota1, nota2;
  int n = 2;

  float promedio;

  printf("ingrese las notas: ");
  scanf("%d %d", &nota1, &nota2);

  promedio = (nota1 + nota2) / (float) n;

  printf("El promedio es %.2f\n", promedio);

  return 0;
}

