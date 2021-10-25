#include <stdio.h>
#include <string.h>

int main (void) {
  FILE *fp;
  char archivo[] = "nombres.txt";

  fp = fopen(archivo, "a");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo %s\n", archivo);
    return 1;
  }

  fprintf(fp, "%s\n", archivo);

  fclose(fp);
  return 0;
}

