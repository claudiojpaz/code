#include <stdio.h>

int main (void) {
  FILE *fp;

  fp = fopen("frutas.txt", "w");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo\n");
    return 1;
  }

  fprintf(stdout, "manzana\n");

  fclose(fp);
  return 0;
}

