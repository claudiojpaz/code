#include <stdio.h>

void carga (int *p) {
  *p = 4;
}

int main (void) {
  int var = 3;

  printf("%d\n", var);
  carga(&var);
  printf("%d\n", var);

  return 0;
}

