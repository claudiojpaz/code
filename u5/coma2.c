#include <stdio.h>

int main (void) {
  int mat[3][3] = {{0},{0,-10}};

  for (int i = 0; i < 3; i++, printf("\n"))
    for (int j = 0; j < 3; j++)
      printf("%5d", mat[i][j]);

  return 0;
}

