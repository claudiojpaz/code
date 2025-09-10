#include <stdio.h>

#define N 2
#define M 3

int main (void) {
  int mat[N][M] = {[1]={0,0,1}};

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++)
      printf("%7d", mat[i][j]);
    printf("\n");
  }

  return 0;
}

