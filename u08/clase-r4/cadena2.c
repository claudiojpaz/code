#include <stdio.h>

int main (void) {
  char saludo[] = "hola, mundo!";

  saludo[6] = 'M';
  printf("%s\n", saludo);
  printf("%ld\n", sizeof saludo);
  printf("%d\n", saludo[12]);

  return 0;
}

