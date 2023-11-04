#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50

void cargar (int [], int);
void ordenar (int [], int);
void imprimir (int [], int);
void swap(int *, int *);

int main (void) {
  int vec[N] = {0};

  srand(time(NULL));

  cargar(vec, N);
  imprimir(vec, N);
  ordenar(vec, N);
  imprimir(vec, N);

  return 0;
}

void cargar (int *p, int n) {
  for (int i = 0; i < n; i++)
    p[i] = 1 + rand() % 6;
}

void ordenar (int *p, int n) {
  for (int j = 0; j < n-1; j++)
    for (int i = 0; i < n-1-j; i++)
      if (p[i] > p[i+1])
        swap(p+i, p+i+1);
}

void imprimir (int p[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", p[i]);
  printf("\n");
}

void swap(int *p, int *q) {
  int tmp = *p;
  *p = *q;
  *q = tmp;
}
