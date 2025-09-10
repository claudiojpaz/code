#include <stdio.h>
#include "nota.h"

int main (void) {
  int nota;

  nota = nota_valida();
  printf("Ingresó %d\n", nota);

  return 0;
}

