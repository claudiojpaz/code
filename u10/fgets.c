#include <stdio.h>

int main (void) {
  FILE *fp;
  char archivo[] = "fruta.txt";
  char cadena[80];

  fp = fopen(archivo, "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo %s\n", archivo);
    return 1;
  }

  fgets(cadena, 80, fp);

  printf("%s\n", cadena);

  fclose(fp);
  return 0;
}

