#include <stdio.h>

struct matriz {
  int data[3][3];
  int det;
};

struct matriz carga (void) {
  struct matriz m;
  int c = 0;

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      m.data[i][j] = c++;

  return m;
}

int main (void) {
  struct matriz mat = {0};

  mat = carga();

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      printf("%5d", mat.data[i][j]);
    printf("\n");
  }

  return 0;
}

