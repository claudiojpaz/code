#include <stdio.h>

void imprimir (const int * const p) {
  for (int i = 0; i < 5; i++)
    fprintf("%d\n", *(p+i));

}

int main (void) {
  int arreglo[5] = {1,2,3,4,5};

  imprimir(arreglo);

  return 0;
}

