#include <stdio.h>
#include "nota.h"

int nota_valida(void) {
  int nota;

  do
    nota = ingreso_nota();
  while (nota < 1 || nota > 10);

  return nota;
}

int ingreso_nota(void) {
  int nota;

  printf("Ingrese una nota: ");
  scanf("%d", &nota);

  return nota;
}

