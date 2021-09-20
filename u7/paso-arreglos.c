#include <stdio.h>

#define N 10

void carga (int vect[], int n) {
  for (int i = 0; i < n; i++)
    vect[i] = i*i;
}

int main (void) {
  int vect[N] = {0};

  carga(vect, N);

  for (int i = 0; i < N; i++)
    printf("%d\n", vect[i]);

  return 0;
}

