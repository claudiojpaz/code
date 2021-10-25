#include <stdio.h>
#define N 3

struct estudiante {
  char nombre[80];
  int legajo;
  int nota_final;
};

int main (void) {
  struct estudiante e[N];
  FILE *fp;

  fp = fopen("estudiante.bin", "rb");

  for (int i = 0; i < N; i++)
    fread(&e[i], sizeof(struct estudiante), 1, fp);

  fclose(fp);

  for (int i = 0; i < N; i++) {
    printf("Nombre: %s\n", e[i].nombre);
    printf("legajo: %d\n", e[i].legajo);
    printf("Nota final: %d\n", e[i].nota_final);
  }

  return 0;
}

