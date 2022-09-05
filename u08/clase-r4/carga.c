#include <stdio.h>

void cargar(int *p) {
  *p = 4;
}

int main (void) {
  int vec[3] = {1,2,3};
  int *q;

  q = vec; // q = &vec[0];

  printf("%d\n", *q);
  cargar(q);
  printf("%d\n", *q);

  return 0;
}

