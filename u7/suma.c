#include <stdio.h>

// 1 2 3 4  5  6 7 8
// 1 3 6 10 15

int cumsum (int n) {
  int resultado;

  if (n == 1)
    resultado = 1;
  else
    resultado = n + cumsum(n-1);

  return resultado;
}

int main (void) {

  printf("%d\n", cumsum(2));

  return 0;
}

