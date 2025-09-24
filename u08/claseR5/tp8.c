#include <stdio.h>

int aprobado(int nota) {
  if (nota >= 6)
    return 1;
  else
    return 0;
}

int promocionado(int nota) {
  if (nota >= 8)
    return 1;
  else
    return 0;
}

int igual_6(int nota) {
  if (nota == 6)
    return 1;
  else
    return 0;
}

int contar(int (*fp)(int), int *p, int n) {
  int cuenta = 0;

  for (int i = 0; i < n; i++)
    cuenta += (*fp)(*(p+i));

  return cuenta;
}

int main (void) {
  int notas[10] = {1,4,6,6,8,9,4,5,8,2};

  printf("Aprobados: %d\n", contar(aprobado, notas, 10));
  printf("Promocionados: %d\n", contar(promocionado, notas, 10));
  printf("Exactamente 6: %d\n", contar(igual_6, notas, 10));

  return 0;
}

