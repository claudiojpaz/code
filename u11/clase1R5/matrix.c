#include <stdio.h>

int main(void){
  FILE *fp;
  int mat[100][100];
  int filas, columnas;

  fp = fopen("matrix.txt", "r");
  if (fp == NULL) {
    printf("No se puede abrir el archivo.\n");
    return 1;
  }

  fscanf(fp, "%d %d", &filas, &columnas);
  for (int i = 0; i < filas; i++)
    for (int j = 0; j < columnas; j++)
        fscanf(fp, "%d", &mat[i][j]);

  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++)
      printf("%5d", mat[i][j]);
    printf("\n");
  }

  fclose(fp);
  return 0;
}

