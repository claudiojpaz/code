#include <stdio.h>

int main (void) {
  int legajo, p1, p2;
  FILE *fp;

  fp = fopen("notas.txt", "r");
  if (fp == NULL) {
    printf("No se encontró el archivo. No se puede seguir.\n");
    return 1;
  }

  fscanf(fp, "%d %d %d", &legajo, &p1, &p2);
  while(!feof(fp)) {
    printf("legajo: %d promedio: %.2f\n", legajo, (p1+p2)/2.);
    fscanf(fp, "%d %d %d", &legajo, &p1, &p2);
  }

  fclose(fp);
  return 0;
}

