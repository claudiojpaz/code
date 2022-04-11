#include <stdio.h>
// u3-con-cast.c

int main (void)
{
  int suma_notas, cuantas_notas;
  float promedio;

  printf("Ingrese la suma de todas las notas: ");
  scanf("%d", &suma_notas);
  printf("Ingrese cuantas notas son: ");
  scanf("%d", &cuantas_notas);

  promedio = (float) suma_notas / cuantas_notas;

  printf("Promedio: %.2f\n", promedio);

  return 0;
}
