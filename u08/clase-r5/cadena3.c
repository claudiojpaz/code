#include <stdio.h>

int main (void) {
  char *saludo = "hola, mundo!";

  printf("%s\n", saludo);
  printf("%c\n", saludo[0]);
  printf("%p\n", &saludo[0]);
  printf("%ld\n", sizeof saludo);
  printf("%d\n", *(saludo+12));
  saludo[6] = 'M';
  printf("%s\n", saludo);

  return 0;
}

