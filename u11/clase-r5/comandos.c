#include <stdio.h>

int main (int argc, char *argv[]) {
  FILE *fp;
  char linea[80];

  if (argc != 2) {
    printf("Necesito el nombre del archivo\n");
    return 1;
  }

  fp = fopen(argv[1], "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo\n");
    return 1;
  }

  fgets(linea, 80, fp);
  while(!feof(fp)) {
    printf("%s", linea);
    fgets(linea, 80, fp);
  }


  return 0;
}

