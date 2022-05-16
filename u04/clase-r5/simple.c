#include <stdio.h>

int main (void) {
  int a = 5, b = 10;

  if (a > 0)
    b = b / a;

  printf("%d\n", b);

  return 0;
}

