#include <stdio.h>

int main (void) {
  char *saludo = "hola, mundo!";

  char saludo2[] = "hola, mundo!";

  printf("%p\n", (void*) saludo);
  printf("%p\n", (void*) &saludo[0]);

  printf("%p\n", (void*) &saludo2);
  printf("%p\n", (void*) &saludo2[0]);

  return 0;
}

