#include <stdio.h>

int main (void) {
  FILE * fpt;
  FILE * fpb;

  int numero = 4000000;

  fpt = fopen("archivo.txt", "w");
  fpb = fopen("archivo.bin", "wb");

  fprintf(fpt, "%d", numero);
  fwrite(&numero, sizeof(numero), 1, fpb);

  fclose(fpb);
  fclose(fpt);
  return 0;
}

