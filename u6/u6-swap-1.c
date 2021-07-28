#include <stdio.h>
// u6-swap.c

int main (void) {
  int arreglo[5] = {90,10,20,30,0};
  int tmp;

  tmp = arreglo[0];
  arreglo[0] = arreglo[4];
  arreglo[4] = tmp;

  for (int i = 0; i < 5; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}

