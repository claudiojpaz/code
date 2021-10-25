#include <stdio.h>
#include <string.h>

int main (void) {
  FILE *fp;
  char archivo[] = "parametros.conf";
  char comando[80];
  int valor;

  int jugadores = 1;
  int mapa = 10;

  fp = fopen(archivo, "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo %s\n", archivo);
    return 1;
  }

  fscanf(fp, " %s %d", comando, &valor);
  while (!feof(fp)) {
    if (strcmp(comando, "jugadores=") == 0)
      jugadores = valor;
    if (strcmp(comando, "mapa=") == 0)
      mapa = valor;

    fscanf(fp, " %s %d", comando, &valor);
  }

  fclose(fp);

  printf("%d jugador%s", jugadores, jugadores > 1?"es":"");
  printf(" en un mapa de %dx%d\n", mapa, mapa);

  return 0;
}

