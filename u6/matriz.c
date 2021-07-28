#include <stdio.h>

int main (void) {
  int mat[3][3] = {[1]={[1]=-10}};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      printf("%5d", mat[i][j]);
    printf("\n");
  }

  return 0;
}

