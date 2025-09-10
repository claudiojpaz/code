#include <stdio.h>

int main (void) {
  FILE *fp;
  char cadena[80];

  fp = fopen("frutas.txt", "r");

  fscanf(fp, " %s", cadena);
  while (!feof(fp)) {
    printf("%s", cadena);
    fscanf(fp, " %s", cadena);
  }

  fclose(fp);

  return 0;
}

