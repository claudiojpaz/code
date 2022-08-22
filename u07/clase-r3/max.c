#include <stdio.h>

int max (int a, int b) {

  if (a > b)
    return a;

  return b;
}

int div (int a, int b) {
  if (b == 0)
    return 0;

  return a/b;
}

int main (void) {
  int n = 8, m = 5;

  printf("El máximo entre %d y %d es %d\n", n, m, max(n, m));

  return 0;
}

