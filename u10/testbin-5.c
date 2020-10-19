#include <stdio.h>
#include <string.h>

struct estudiante {
  int cod;
  char nombre[80];
  int nota;
};

int main (void) {
  FILE *fpb;

  struct estudiante e = {0};

  fpb = fopen("archivo.bin", "wb");

  for (int i = 0; i < 10; i++) {
    e.cod = i;
    printf("Ingrese el nombre: ");
    scanf(" %s", e.nombre);
    fwrite(&e, sizeof(struct estudiante), 1, fpb);
  }

  fclose(fpb);
  return 0;
}
