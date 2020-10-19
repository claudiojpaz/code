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

  fpb = fopen("archivo.bin", "wb");

  fwrite(e, sizeof(e), 1, fpb);

  fclose(fpb);
  return 0;
}
