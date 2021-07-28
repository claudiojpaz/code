#include <stdio.h>

#define N 10

int main (void) {
  int arreglo[N] = {1,2,3,5,6,9,11,14,22,53};
  int izq, med, der;
  int busqueda = 3;
  int i = -1;

  izq = 0;
  der = N-1;

  while (izq <= der){
    med = (der + izq) / 2;

    if (arreglo[med] == busqueda) {
      i = med;
      break;
    }

    if (arreglo[med] < busqueda) {
      izq = med+1;
    } else {
      der = med-1;
    }
  }

  if (i != -1)
    printf("Se encontró en la posición %d\n", i);
  else
    printf("No se encontró\n");

  return 0;
}

