#include <stdio.h>
#include <string.h>

int main (void) {
  FILE *fp;
  char cadena[20] = {0};
  int jugadores = 1;
  int entero = 0;

  fp = fopen("config.txt", "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo..\n");
    printf("Jugadores por defecto: %d\n", jugadores);
    return 1;
  }

  fscanf(fp, "%s %d", cadena, &entero);

  if (strcmp(cadena, "jugadores") == 0)
    jugadores = entero;

  printf("Jugadores: %d\n", jugadores);

  fclose(fp);

  return 0;
}

