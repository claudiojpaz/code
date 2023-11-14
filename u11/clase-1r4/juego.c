#include <stdio.h>
#include <string.h>

int main (void) {
  FILE *fp;
  char cadena[20] = {0};
  int entero;
  int ok = 1;

  int jugadores = 1;
  int mapax = 10;
  int mapay = 10;

  fp = fopen("config.txt", "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo...\n");
    return 1;
  }

  while(ok) {
    fscanf(fp, "%s %d", cadena, &entero);
    if ((ok = !feof(fp))) {
      if (strcmp(cadena, "jugadores") == 0)
        jugadores = entero;
      if (strcmp(cadena, "mapax") == 0)
        mapax = entero;
      if (strcmp(cadena, "mapay") == 0)
        mapay = entero;
    }
  }

  printf("Configuración:\n");
  printf("Jugadores: %d\n", jugadores);
  printf("mapa: %dx%d\n", mapax, mapay);

  fclose(fp);
  return 0;
}

