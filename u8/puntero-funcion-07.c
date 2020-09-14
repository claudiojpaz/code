#include <stdio.h>

#define N 10

void swap(int *p, int *q) {
  int temp = *p;
  *p = *q;
  *q = temp;
}

void ascendente (int *p, int *q) {
  if (*p > *q)
    swap(p, q);
}

void descendente (int *p, int *q) {
  if (*p < *q)
    swap(p, q);
}

void burbuja(int arr[], int n, void (*compara)(int*,int*)) {
  for (int j = 0; j < N-1; j++)
    for (int i = 0; i < N-1-j; i++)
      (*compara)(&arr[i], &arr[i+1]);
}

void imprimir(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ",  arr[i]);
  }
  printf("\n");
}

int main (void) {
  int vec[N] = {1,9,4,8,6,0,3,5,7,2};

  burbuja(vec, N, descendente);
  imprimir(vec, N);

  return 0;
}




