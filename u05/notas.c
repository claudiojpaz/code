#include <stdio.h>
// u5-notas.c
int main (void) {
  int i, n;
  int nota, notas;
  float promedio;

  printf("Cuantos registros cargará: ");
  scanf("%d", &n);

  notas = 0;
  i = 0;
  while (i < n) {
    do {
      printf("Ingrese nota %d: ", i+1);
      scanf("%d", &nota);
    } while ( nota < 1 || nota > 10 );
    notas += nota;
    i++;
  }
  promedio = (float) notas / n;

  printf("El promedio de notas es %.2f", promedio);

  return 0;
}
