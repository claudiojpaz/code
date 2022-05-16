#include <stdio.h>

int main (void) {
  int cuantos;

  cuantos = printf("%c", 97);
  printf("%d\n", cuantos);

  cuantos = putchar(97);
  printf("%d\n", cuantos);

  return 0;
}

