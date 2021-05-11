#include <stdio.h>

int main (void) {
  int nota = 1;
  int aprobado;

  if (nota >= 6) {
    aprobado = 1;
  } else {
    aprobado = 0;
  }

  if (aprobado) {
    printf("Aprobado!\n");
  } else {
    printf("Desaprobado!\n");
  }

  return 0;
}
