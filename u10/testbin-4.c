#include <stdio.h>
#include <string.h>

struct estudiante {
  int legajo;
  char nombre[80];
  int nota;
};

int main (void) {
  FILE *fpb;

  struct estudiante e[10] = {0};

  fpb = fopen("archivo.bin", "rb");

  fread(e, sizeof(struct estudiante), 10, fpb);

  printf("%s\n", e[5].nombre);

  fclose(fpb);
  return 0;
}
