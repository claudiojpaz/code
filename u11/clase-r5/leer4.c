#include <stdio.h>

int main (void) {
  FILE *fp;
  char linea[80];

  fp = fopen(, "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo\n");
    return 1;
  }

  fgets(linea, 80, fp);
  while(!feof(fp)) {
    printf("%s", linea);
    fgets(linea, 80, fp);
  }


  fclose(fp);
  return 0;
}

