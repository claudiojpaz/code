#include <stdio.h>

int main (void) {
  char *saludo = "hola, mundo!";

  printf("%s\n", saludo);
  //*(saludo+6) = 'M';
  saludo[6] = 'M';
  printf("%s\n", saludo);

  return 0;
}

