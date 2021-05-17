#include <stdio.h>

int main (void) {
  int n = 0;

  while (n < 10);  // ojo! bucle infinito
    printf("%d\n", n++);

  return 0;
}

