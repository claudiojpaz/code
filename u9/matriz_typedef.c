#include <stdio.h>

typedef struct {
  int data[3][3];
  int det;
} matriz_t ;

matriz_t carga (void) {
  matriz_t m;
  int c = 0;

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      m.data[i][j] = c++;

  return m;
}

int main (void) {
  matriz_t mat = {0};

  mat = carga();

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      printf("%5d", mat.data[i][j]);
    printf("\n");
  }

  return 0;
}

