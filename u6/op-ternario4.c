#include <stdio.h>

int main (void) {
  int a = 5, b = 2, c = 6;
  int max;

  max = a>b?a>c?a:c:b>c?b:c;

  printf("El mayor es %d\n", max);

  return 0;
}

