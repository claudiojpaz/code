#include <stdio.h>

#define N 30

void cargar (int *p, int n, int m) {
  int c = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      *(p + j + (i*m)) = c++;
    }
  }
}

void imprimir (int *p, int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", *(p+j+(i*m)));
    }
    printf("\n");
  }
}

int main (void) {
  int vec[N];

  cargar(&vec[0], 1, N);
  imprimir(&vec[0], 1, N);

  return 0;
}

