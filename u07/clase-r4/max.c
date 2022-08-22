#include <stdio.h>

int max (int a, int b) {
  if (a > b)
    return a;
  return b;
}

int div (int a, int b) {
  return a/b;
}

int main (void) {
  int n = 15, m = 0;

  printf("El mayor entre %d y %d es %d\n", n, m, max(n, m));
  printf("división: %d\n", div(n, m));

  return 0;
}

