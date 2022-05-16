#include <stdio.h>

int main (void) {
  int a = 3, b = 0;

  if (++b && a == 3)
    printf("OK\n");

  printf("%d\n", b);

  return 0;
}

