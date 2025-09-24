#include <stdio.h>

int nota_10(int nota) {
  if (nota == 10)
    return 1;
  else
    return 0;
}

int aprobados(int nota) {
  if (nota >= 6)
    return 1;
  else
    return 0;
}

int promocionados(int nota) {
  if (nota >= 8)
    return 1;
  else
    return 0;
}

int contar (int (*criterio)(int), int *p, int n) {
  int cuenta = 0;
  for (int i = 0; i < n; i++)
    cuenta += (*criterio)(*(p+i));
  return cuenta;
}

int test (int nota) {
  return 1;
}

int main (void) {
  int notas[10] = {1,2,3,10,6,2,6,7,8,3};

  printf("Aprobados: %d\n", contar(aprobados, notas, 10));
  printf("Promocionados: %d\n", contar(promocionados, notas, 10));
  printf("Exactamente 10: %d\n", contar(nota_10, notas, 10));
  printf("test: %d\n", contar(test, notas, 10));

  return 0;
}

