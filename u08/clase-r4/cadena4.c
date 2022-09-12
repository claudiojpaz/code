#include <stdio.h>

int main (void) {
  char *saludo = "hola, mundo!";
  char *despedida = "chau, mundo!";

  char *p[2];

  p[0] = saludo;
  p[1] = despedida;

  printf("%s\n", p[1]);


  return 0;
}

