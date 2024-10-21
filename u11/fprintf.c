#include <stdio.h>

int main (void) {
  FILE *fp;
  char cadena[80];

  fp = fopen("fprintf.c", "r");

  /* fscanf(fp, " %80[^\n]s", cadena); */
  fgets(cadena, 80, fp);
  while (!feof(fp)) {
    printf("%s", cadena);
    fgets(cadena, 80, fp);
    /* fscanf(fp, " %80[^\n]s", cadena); */
  }

  fclose(fp);

  return 0;
}

