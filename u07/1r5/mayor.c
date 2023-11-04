#include <stdio.h>
// u6-max-1.c

int main (void) {
  int arreglo[5] = {4,1,6,5,3};
  int imax;

  imax = 0;
  for (int i = 1; i < 5; i++)
    if (arreglo[i] > arreglo[imax])
      imax = i;

  printf("máximo = %d\n", arreglo[imax]);
  printf("está en posición %d\n", imax);

  return 0;
}
