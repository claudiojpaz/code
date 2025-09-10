#include <stdio.h>

void cargar (int *p) {
  for (int i = 0; i < 10; i++) {
    //*(p+i) = i;
    p[i] = i;
  }
}
void imprimir (int *p) {
  for (int i = 0; i < 10; i++) {
    printf("%d\n", p[i]);
  }
}

int main (void) {
  int arreglo[10];

  cargar(arreglo);
  imprimir(arreglo);

  return 0;
}

