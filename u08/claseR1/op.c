#include <stdio.h>

int main (void) {
  int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  for (int i = 0; i < 3; i++, printf("\n"))
    for (int j = 0; j < 3; j++)
      printf("%3d", mat[i][j]);


  return 0;
}

