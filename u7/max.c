#include <stdio.h>

int max (int a, int b) {
  if (a > b)
    return a;
  else
    return b;
}

int main (void) {
  int a = 4, b = 3;

  printf("El mayor es %d\n", max(a,b));

  return 0;
}

