#include <stdio.h>

#define N 5

void imprimir(const int * const p, int n) {
  for(int i = 0; i < n; i++)
    printf("%d\n", *(p+i));

}

int main (void) {
  int arreglo[N] = {1,2,3,4,5};

  imprimir(arreglo, N);

  for(int i = 0; i < N; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}

