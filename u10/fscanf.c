#include <stdio.h>

int main (void) {
  FILE *fp;
  char archivo[] = "fruta-precio.txt";
  char cadena[80];
  int precio;

  fp = fopen(archivo, "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo %s\n", archivo);
    return 1;
  }

  fscanf(fp, " %s %d", cadena, &precio);
  printf("%s\n", cadena);
  printf("%d\n", precio);

  fclose(fp);
  return 0;
}

