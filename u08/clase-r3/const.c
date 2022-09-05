#include <stdio.h>

void carga (const int *p) {
  *p = 4;
}

int main (void) {
  int var = 3;

  carga(&var);
  printf("%d\n", var);

  return 0;
}

