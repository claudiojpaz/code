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

  for (int i = 0; i < N; i++) {
    printf("Ingrese el nombre: ");
    scanf(" %[^\n]s", e[i].nombre);
    printf("Ingrese el legajo: ");
    scanf("%d", &e[i].legajo);
    printf("Ingrese la nota final: ");
    scanf("%d", &e[i].nota_final);
  }

  fp = fopen("estudiante.dat", "wb");
  fwrite(e, sizeof(struct estudiante), N, fp);
  fclose(fp);

  return 0;
}

