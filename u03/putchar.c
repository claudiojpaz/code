#include <stdio.h>

int main (void) {
  int n;

  printf("printf devolvió %d\n", printf("hola mundo\n"));

  n = putchar(65);
  putchar(10);

  printf("putchar devolvió %d\n", n);

  return 0;
}

