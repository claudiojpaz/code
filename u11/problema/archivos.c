#include <stdio.h>

int main (void) {
  FILE *pf;
  char nombre[100];
  int legajo;

  pf = fopen("estudiantes.txt", "r");
  fscanf(pf, "%d %s", &legajo, nombre);

  printf("%d %s\n", legajo, nombre);

  fclose(pf);
  return 0;
}

