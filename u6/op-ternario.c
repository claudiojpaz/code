#include <stdio.h>

int main (void) {
  int nota = 6;
  int aprobado;

  aprobado = nota >= 6 ? 1 : 0;

  if (aprobado == 1)
    printf("Aprobado!\n");
  else
    printf("Desaprobado!\n");

  return 0;
}

