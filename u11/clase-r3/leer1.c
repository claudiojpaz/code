#include <stdio.h>

int main (void) {
  char linea[80];
  FILE *fp;

  fp = fopen("leer1.c", "r");

  while (!feof(fp)) {
    fgets(linea, 80, fp);
    printf("%s", linea);
  }

  fclose(fp);
  return 0;
}

