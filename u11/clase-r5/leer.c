#include <stdio.h>

int main (void) {
  int legajo;
  int p1, p2;
  FILE *fp;

  fp = fopen("notas.txt", "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo\n");
    return 1;
  }

  while(!feof(fp)) {
    int r = fscanf(fp, "%d %d %d", &legajo, &p1, &p2);
    if (r > 0)
      printf("legajo: %d promedio: %.2f\n", legajo, (p1+p2)/2.);
  }

  return 0;
}

