#include <stdio.h>

void cargar (int *p) {
  *p = 3;
}

int main (void) {
  int var;

  cargar(&var);

  printf("%d\n", var);

  return 0;
}

