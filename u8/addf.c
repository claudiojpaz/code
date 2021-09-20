#include <stdio.h>

int suma (int a, int b) {
  return a+b;
}

int resta (int a, int b) {
  return a-b;
}

int mult (int a, int b) {
  return a*b;
}

int main (void) {
  int (*p[])(int, int) = {NULL, suma, resta, mult};

  printf("El resultado es %d\n", (*p[2])(4,3));


  return 0;
}

