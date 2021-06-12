#include <stdio.h>

int main (void) {
  int n = 0;

  do
    printf("%d\n", n++);
  while (n < 10);

  return 0;
}

