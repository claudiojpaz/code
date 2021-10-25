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

  fp = fopen("estudiante.bin", "rb+");

  fseek(fp, 1*sizeof(struct estudiante), SEEK_SET);
  fread(&e, sizeof(struct estudiante), 1, fp);

  e.nota_final = 9;

  fseek(fp, 1*sizeof(struct estudiante), SEEK_SET);
  fwrite(&e, sizeof(struct estudiante), 1, fp);

  fclose(fp);

  return 0;
}

