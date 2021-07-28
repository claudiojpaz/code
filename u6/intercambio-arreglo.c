#include <stdio.h>

int main (void) {
  int arreglo[5] = {4,2,1,5,6};
  int tmp;

  for (int i = 0; i < 5; i++)
    printf("%d ", arreglo[i]);
  printf("\n");

  tmp = arreglo[0];
  arreglo[0] = arreglo[2];
  arreglo[2] = tmp;

  for (int i = 0; i < 5; i++)
    printf("%d ", arreglo[i]);
  printf("\n");

  return 0;
}

