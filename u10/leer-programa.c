#include <stdio.h>

int main (void) {
  FILE *fp;
  char archivo[] = "leer-programa.c";
  char cadena[80];

  fp = fopen(archivo, "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo %s\n", archivo);
    return 1;
  }

  fscanf(fp, " %[^\n]s", cadena);
  while (!feof(fp)) {
    printf("%s\n", cadena);
    fscanf(fp, " %[^\n]s", cadena);
  }

  fclose(fp);
  return 0;
}

