#include <stdio.h>

int main (void) {
  const int var = 4;
  int *p = (int*) &var;

  (*p)++;
  printf("%d\n", var);

  return 0;
}

