#include <stdio.h>

int main (void) {
  int n1 = 3, n2 = 2;
  int suma;

  n1 + n2 = suma; // mal!!
  suma = n1 + n2; // bien!!

  printf("%d\n", suma);

  return 0;
}

