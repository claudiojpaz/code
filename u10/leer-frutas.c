#include <stdio.h>
#include <stdlib.h>

#define N 80

int main (void)
{
  FILE * fpi;
  FILE * fpo;
  char cadena[N] = {0};
  int repetir = 0;

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

  fscanf(fpi, " %s", cadena);
  fprintf(fpo, "%s\n", cadena);
  fprintf(fpo, "manzana\n");
  fscanf(fpi, " %s", cadena);
  fprintf(fpo, "%s\n", cadena);

  system("mv frutas_temp.txt frutas.txt");

  fclose(fpi);
  fclose(fpo);

  fpi = fopen("frutas.txt", "r");
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

