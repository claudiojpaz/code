#include <stdio.h>

int main (void) {
  FILE *fp;

  fp = fopen("frutas.txt", "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo\n");
    return 1;
  }

  fclose(fp);
  return 0;
}

