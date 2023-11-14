#include <stdio.h>

int main (void) {
  FILE *fp;
  char cadena[20];

  fp = fopen("frutas.txt", "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo...\n");
    return 1;
  }

  while(!feof(fp)) {
    fgets(cadena, 20, fp);
    if (!feof(fp))
      fputs(cadena, stdout);
  }

  fclose(fp);
  return 0;
}

