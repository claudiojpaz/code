#include <stdio.h>

int main(void){
  FILE *fp;
  int f, c;
  int mat[10][10] = {0};

  fp = fopen("mat_A.txt", "r");

  fscanf(fp, "%d %d", &f, &c);
  for (int i = 0; i < f; i++)
    for (int j = 0; j < c; j++)
      fscanf(fp, "%d", &mat[i][j]);

  fclose(fp);

  for (int i = 0; i < f; i++) {
    for (int j = 0; j < c; j++)
      printf("%3d", mat[i][j]);
    printf("\n");
  }

  return 0;
}

