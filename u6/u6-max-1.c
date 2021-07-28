#include <stdio.h>
// u6-max-1.c

int main (void) {
  int arreglo[5] = {4,1,6,5,3};
  int max;

  max = arreglo[0];
  for (int i = 1; i < 5; i++)
    if (arreglo[i] > max)
      max = arreglo[i];

  printf("máximo = %d\n", max);

  return 0;
}
