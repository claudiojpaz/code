#include <stdio.h>

void carga (int *p) {
  *p = 4;
}

int main (void) {
  int var[3] = {1,2,3};
  int *q;

  q = var; // q = &var[0];

  printf("%d\n", *q);
  carga(q);
  printf("%d\n", *q);

  return 0;
}

