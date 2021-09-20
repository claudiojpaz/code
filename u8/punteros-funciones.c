#include <stdio.h>

int suma (int a, int b) {
  return a+b;
}


int main (void) {
  int (*p) (int, int);

  p = suma;

  printf("%d\n", (*p)(4,5));

  return 0;
}

