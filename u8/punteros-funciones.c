#include <stdio.h>

int suma (int *a, int *b) {
  return *a+*b;
}

int resta (int *a, int *b) {
  return *a-*b;
}

void operacion(int (*p) (int*, int*), int*, char, int*);

int main (void) {
  int op;
  int x = 4, y = 3;

  switch(op) {
    case 0:
      operacion(suma, &x, '+', &y);
      break;
    case 1:
      operacion(resta, &x, '-', &y);
      break;
  }

  return 0;
}

void operacion(int (*p) (int*, int*), int *a, char s, int *b) {
  int resultado = (*p)(a,b);
  printf("%d%c%d=%d\n", *a, s, *b, resultado);
}
