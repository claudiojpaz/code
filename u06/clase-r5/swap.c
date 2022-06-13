#include <stdio.h>

#define N 15

int main (void) {
  int notas[N] = {3,4,1,2,6,9,4,5,6,9,3,7,1,8,3};
  int tmp;

  for (int i = 0; i < N; i++)
    printf("%d ", notas[i]);
  printf("\n");

  tmp = notas[2];
  notas[2] = notas[0];
  notas[0] = tmp;

  for (int i = 0; i < N; i++)
    printf("%d ", notas[i]);



  return 0;
}

