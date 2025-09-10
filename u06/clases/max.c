#include <stdio.h>

int max (int a, int b) {
  if (a > b)
    return a;

  return b;
}

int main (void) {
  printf("el máx es %d\n", max(6,5));

  return 0;
}

