#include <stdio.h>

void imprimir_var(const int *p) {
  printf("%d\n", (*p)++);
}

int main (void) {
  int var = 3;

  imprimir_var(&var);

  return 0;
}

