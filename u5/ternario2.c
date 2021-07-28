#include <stdio.h>

int main (void) {
  int a = 6, b = 5, c = 4;
  int max;

  max = a>b?(a>c?a:c):(b>c?b:c);

  printf("el mayor es %d\n", max);

  return 0;
}

