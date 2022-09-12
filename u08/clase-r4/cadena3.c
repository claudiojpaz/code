#include <stdio.h>

int main (void) {
  char *saludo = "hola, mundo!";

  printf("%s\n", saludo);

  for (int i = 0; *(saludo+i) != 0; i++)
    printf("%p %c\n", saludo+i, *(saludo+i));

  return 0;
}

