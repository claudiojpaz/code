#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 80

int main (void)
{
  FILE * fpi;
  FILE * fpo;
  char cadena[N] = {0};
  int repetir = 0;
  int jugadores = 0;

  fpi = fopen("conf.txt", "r");
  if ( fpi == NULL ) {
    printf("No se pudo abrir...\n");
    return 1;
  }

  fpo = fopen("conf_temp.txt", "w");
  if ( fpo == NULL ) {
    printf("No se pudo abrir...\n");
    return 1;
  }

  printf("Cuandos jugadores: ");
  scanf("%d", &jugadores);

  repetir = 1;
  do {
    fscanf(fpi, " %s", cadena);
    if ( !feof(fpi) ) {
      if (strncmp(cadena, "jugadores", 9) == 0)
        fprintf(fpo, "jugadores=%d\n", jugadores);
      else
        fprintf(fpo, "%s\n", cadena);
    } else {
      repetir = 0;
    }
  } while (repetir == 1);

  system("mv conf_temp.txt conf.txt");

  fclose(fpi);
  fclose(fpo);

  fpi = fopen("conf.txt", "r");
  if ( fpi == NULL ) {
    printf("No se pudo abrir...\n");
    return 1;
  }

  repetir = 1;
  do {
    fscanf(fpi, " %s", cadena);
    if ( !feof(fpi) )
      printf("%s\n", cadena);
    else
      repetir = 0;
  } while (repetir == 1);

  fclose(fpi);
  return 0;
}


