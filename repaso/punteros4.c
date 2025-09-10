#include <stdio.h>
#include <stdlib.h>

void cargar (int *p) {
  for (int i = 0; i < 10; i++) {
    p[i] = i;
  }
}
void imprimir (int *p) {
  for (int i = 0; i < 10; i++) {
    printf("%d\n", p[i]);
  }
}

int main (void) {
  int *p;

  p = malloc(10*sizeof(int));

  cargar(p);
  imprimir(p);

  free(p);

  return 0;
}

