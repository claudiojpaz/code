#include <stdio.h>

int main (void) {
  FILE *fp;
  char fruta[20] = {0};

  fp = fopen("frutas.txt", "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo..\n");
    return 1;
  }

  while (!feof(fp)) {
    fscanf(fp, "%s", fruta);
    if (!feof(fp))
      printf("%s\n", fruta);
  }

  fclose(fp);

  return 0;
}

