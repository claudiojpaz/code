#include <stdio.h>

#define N 10

int main (void) {
  int notas[N] = {3,1,2,4,5,7,10,5,6,3};
  int tmp;

  tmp = notas[0];
  notas[0] = notas[2];
  notas[2] = tmp;

  for (int i = 0; i < N; i++)
    printf("%d ", notas[i]);


  return 0;
}

