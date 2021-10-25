#include <stdio.h>
#define N 3

struct estudiante {
  char nombre[80];
  int legajo;
  int nota_final;
};

int main (void) {
  struct estudiante e[N] = {0};
  FILE *fp;

  fp = fopen("estudiante.dat", "rb");
  fread(e, sizeof(struct estudiante), N, fp);
  fclose(fp);

  for (int i = 0; i < N; i++) {
    printf("Nombre: %s\n", e[i].nombre);
    printf("Legajo: %d\n", e[i].legajo);
    printf("Nota final: %d\n", e[i].nota_final);
  }

  return 0;
}

