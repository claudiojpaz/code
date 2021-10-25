#include <stdio.h>
#define N 3

struct estudiante {
  char nombre[80];
  int legajo;
  int nota_final;
};

int main (void) {
  struct estudiante e;
  FILE *fp;

  fp = fopen("estudiante.bin", "rb");
  fseek(fp, 1*sizeof(struct estudiante), SEEK_SET);
  fread(&e, sizeof(struct estudiante), 1, fp);
  fclose(fp);

  printf("Nombre: %s\n", e.nombre);
  printf("legajo: %d\n", e.legajo);
  printf("Nota final: %d\n", e.nota_final);

  return 0;
}

