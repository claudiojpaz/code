#include <stdio.h>

int add (int a, int b) {
  return a + b;
}

int main (void) {
  int (*p)(int, int);

  p = add;

  printf("%d\n", (*p)(4,3));

  return 0;
}

