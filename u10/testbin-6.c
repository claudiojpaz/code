#include <stdio.h>
#include <string.h>

struct estudiante {
  int cod;
  char nombre[80];
  int nota;
};

int main (void) {
  FILE *fpb;

  struct estudiante e[10] = {0};

  fpb = fopen("archivo.bin", "rb");
  fread(e, sizeof(struct estudiante), 10, fpb);
  fclose(fpb);

  for (int i = 0; i < 10; i++)
    printf("%d %s %d\n", e[i].cod, e[i].nombre, e[i].nota);

  return 0;
}
