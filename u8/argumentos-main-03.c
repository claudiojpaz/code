#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
  char archivo[80];

  if (argc == 3) {
    if (strcmp(argv[1], "-file") == 0) {
      strcpy(archivo, argv[2]);
      printf("Se intentará abrir el archivo %s \n", archivo);
    } else {
      printf("Error. Debe indicar nombre de archivo usando");
      printf(" -file <archivo>\n");
    }
  } else {
    printf("Error en la cantidad de argumentos\n");
  }

  return 0;
}

