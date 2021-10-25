#include <stdio.h>

struct estudiante {
  int id;
  char nombre[80];
  int legajo;
  int nota_final;
};

int main (void) {
  struct estudiante e = {0};
  FILE *fp;

  printf("Ingrese el nombre: ");
  scanf(" %[^\n]s", e.nombre);
  printf("Ingrese el legajo: ");
  scanf("%d", &e.legajo);
  printf("Ingrese la nota final: ");
  scanf("%d", &e.nota_final);

  fp = fopen("estudiante.bin", "wb");
  fwrite(&e, sizeof(struct estudiante), 1, fp);
  fclose(fp);

  return 0;
}

