#include <stdio.h>

#define N 100

void cargar (int *p, int n) {
  for (int i = 0; i < n; i++) {
    *(p+i) = i;
  }
}

void imprimir (int *p, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", *(p+i) );
  }
}

int main (void) {
  int vec[N];

  cargar(vec, N);

  imprimir(vec, N);

  return 0;
}

