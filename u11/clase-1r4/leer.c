#include <stdio.h>

int main (void) {
  FILE *fp;
  char cadena[20] = {0};
  int ok = 1;

  fp = fopen("frutas.txt", "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo...\n");
    return 1;
  }

  while(ok) {
    fscanf(fp, "%s", cadena);
    if ((ok = !feof(fp)))
      printf("%s\n", cadena);
  }

  fclose(fp);
  return 0;
}

