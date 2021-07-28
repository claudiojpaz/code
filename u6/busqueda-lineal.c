#include <stdio.h>

int main (void) {
  int arreglo[5] = {7,8,8,6,5};
  int busqueda = 8;
  int n = -1;

  printf("El valor %d ", busqueda);
  for (int i = 0; i < 5; i++) {
    if (arreglo[i] == busqueda) {
      n = i;
      printf("está en %d, ", n);
    }
  }

  if (n == -1)
    printf("no está\n");
  else
    printf("\b\b \n");

  return 0;
}

