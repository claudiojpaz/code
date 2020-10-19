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
  int n = 4;

  fpb = fopen("archivo.bin", "rb+");

  fseek(fpb, n*sizeof(struct estudiante), SEEK_SET);
  fread(&e, sizeof(struct estudiante), 1, fpb);
  e.nota = 9;
  fseek(fpb, n*sizeof(struct estudiante), SEEK_SET);
  fwrite(&e, sizeof(struct estudiante), 1, fpb);

  fclose(fpb);
  return 0;
}
