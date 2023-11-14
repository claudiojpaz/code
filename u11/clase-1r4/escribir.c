#include <stdio.h>

int main (void) {
  FILE *fp;
  char cadena[20] = {0};

  fp = fopen("herramientas.txt", "w");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo...\n");
    return 1;
  }

  printf("Ingrese una herramienta: ");
  scanf("%s", cadena);

  fprintf(fp, "%s\n", cadena);

  printf("Ingrese una herramienta: ");
  scanf("%s", cadena);

  fprintf(fp, "%s\n", cadena);

  fclose(fp);
  return 0;
}

