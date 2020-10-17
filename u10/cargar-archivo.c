#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
  char cadena[80];
  FILE *fp;
  int repetir;

  if (argc != 2) {
    printf("Se necesita nombre de archivo..\n");
    exit(EXIT_FAILURE);
  }

  fp = fopen(argv[1], "w");
  if ( fp == NULL ) {
    printf("No se pudo abrir el archivo..\n");
    exit(EXIT_FAILURE);
  }

  repetir = 1;
  printf("Ingrese palabras, \"salir\" para salir\n");
  do {
    scanf(" %s", cadena);

    if (strcmp(cadena, "salir") == 0)
      repetir = 0;
    else
      fprintf(fp, "%s\n", cadena);

  } while (repetir == 1);

  fclose(fp);
  return 0;
}

