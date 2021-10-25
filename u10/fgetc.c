#include <stdio.h>

int main (void) {
  FILE *fp;
  char archivo[] = "fruta.txt";
  int caracter;

  fp = fopen(archivo, "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo %s\n", archivo);
    return 1;
  }

  caracter = fgetc(fp);
  printf("%d\n", caracter);

  caracter = fgetc(fp);
  printf("%d\n", caracter);

  caracter = fgetc(fp);
  printf("%d\n", caracter);

  fclose(fp);
  return 0;
}

