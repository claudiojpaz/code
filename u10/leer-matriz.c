#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
  FILE *fp;

  int mat[100][100] = {0};
  int n, m;

  if (argc != 2) {
    printf("No necesita un nombre de archivo\n");
    return 1;
  }

  fp = fopen(argv[1], "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo %s\n", argv[1]);
    return 1;
  }

  fscanf(fp, "%d %d", &n, &m);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      fscanf(fp, "%d", &mat[i][j]);


  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      printf("%5d", mat[i][j]);
    printf("\n");
  }

  fclose(fp);
  return 0;
}

