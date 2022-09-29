#include <stdio.h>

int suma (int a, int b) {
  return a+b;
}

int resta (int a, int b) {
  return a-b;
}

int operacion (int (*p)(int, int), int a, int b) {
  return (*p)(a, b);
}

int main (void) {
  int r;

  r = operacion(resta, 3, 4);
  printf("%d\n", r);

  return 0;
}

