#include <stdio.h>

int main (void) {
  int nota1, nota2;
  int n;

  printf("Ingrese la 1ra calificación: ");
  scanf("%d", &nota1);
  printf("Ingrese la 2da calificación: ");
  scanf("%d", &nota2);

  n = 2;

  printf("El promedio es %.2f\n", (float) (nota1 + nota2) / n);

  return 0;
}

