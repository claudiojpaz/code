#include <stdio.h>

struct estudiante {
  int legajo;
  char nombre[80];
  int nota;
};

int main (void) {
  struct estudiante e1 = {1234, "Pedrito", 2};

  printf("%d %s %d\n", e1.legajo, e1.nombre, e1.nota);

  return 0;
}

