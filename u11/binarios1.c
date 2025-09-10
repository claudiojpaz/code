#include <stdio.h>
#include <string.h>

struct estudiantes {
  int cod;
  char nombre[40];
  int nota;
};

int main (void) {
  FILE *fp;
  struct estudiantes e[10] = {0};

  for (int i = 0; i < 10; i++)
    strcpy(e[i].nombre, "hola\n");

  fp = fopen("salida.bin", "w");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo...\n");
    return 1;
  }

  fwrite(e, sizeof(struct estudiantes), 10, fp);

  fclose(fp);
  return 0;
}

