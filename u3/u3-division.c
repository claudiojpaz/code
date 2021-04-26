#include <stdio.h>

int main (void)
{
  int n1, n2;
  float promedio;
  int n = 2;
  int var;

  printf("Ingrese una calificación: ");
  scanf("%d", &n1);
  printf("Ingrese var calificación: ");
  scanf("%d", &n2);

  promedio = (float) (n1 + n2) / n;

  printf("%.2f\n", promedio);

  return 0;
}
