#include <stdio.h>

int main (void) {
  FILE *fpt;
  FILE *fpb;

  char cadena[80] = "Texto Vs Binario";

  fpt = fopen("archivo.txt", "w");
  fpb = fopen("archivo.bin", "wb");

  fprintf(fpt, "%s", cadena);
  fwrite(cadena, sizeof(cadena), 1, fpb);

  fclose(fpb);
  fclose(fpt);
  return 0;
}


