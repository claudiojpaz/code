#include <stdio.h>

void cargar(int *p) {
  *p = 3;
}

int main (void) {
  int vec[3] = {1,2,3};
  int *q;

  q = vec; //q = &vec[0];

  printf("el puntero en main: %p\n", (void*)q);
  cargar(q);
  printf("el puntero en main: %p\n", (void*)q);
  printf("%d\n", *q);

  return 0;
}

