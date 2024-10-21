#include <stdio.h>

int main (void) {
  FILE *fp;
  char cadena[80];

  fp = fopen("frutas.txt", "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo...\n");
    return 1;
  }

  fscanf(fp, "%s", cadena);

  printf("%s\n", cadena);

  fclose(fp);
  return 0;
}

