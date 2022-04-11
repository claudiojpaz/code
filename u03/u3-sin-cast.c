#include <stdio.h>
// u3-sin-cast.c

int main (void)
{
  int suma_notas, cuantas_notas;
  float promedio;

  printf("Ingrese la suma de todas las notas: ");
  scanf("%d", &suma_notas);
  printf("Ingrese cuantas notas son: ");
  scanf("%d", &cuantas_notas);

  promedio = suma_notas / cuantas_notas; // ojo! potencial error

  printf("Promedio: %.2f\n", promedio);

  return 0;
}
