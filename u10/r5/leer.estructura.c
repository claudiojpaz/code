#include <stdio.h>

struct estudiante {
  char nombre[80];
  int legajo;
  int nota_final;
};

int main (void) {
  struct estudiante e;
  FILE *fp;

  fp = fopen("estudiante.dat", "rb");
  fread(&e, sizeof(struct estudiante), 1, fp);
  fclose(fp);

  printf("Nombre: %s\n", e.nombre);
  printf("Legajo: %d\n", e.legajo);
  printf("Nota final: %d\n", e.nota_final);

  return 0;
}

