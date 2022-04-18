#include <stdio.h>

int main (void) {
  int n1 = 5, n2 = 2;
  int cociente, resto;

  cociente = n1 / n2;
  resto = n1 % n2;

  printf("%d / %d = %d y resto %d \n", n1, n2, cociente, resto);

  return 0;
}

