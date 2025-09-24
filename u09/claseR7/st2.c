#include <stdio.h>

struct estudiante {
  int legajo;
  char nombre[80];
  int notas[3];
  float promedio;
};

int main (void) {
  struct estudiante est = {123, "Pepito", {5,6,5}, 5.33};

  printf("Ingrese el legajo: ");
  scanf("%d", &est.legajo);

  printf(" %c\n", est.nombre[0]);
  printf("%d\n", est.legajo);

  return 0;
}

