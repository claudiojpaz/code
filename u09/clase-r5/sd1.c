#include <stdio.h>

struct numero {
  int entero;
  float real;
  char cadena[20];
};

int main (void) {
  struct numero n = {.cadena="2.14"};

  n.cadena[0] = '3';
  printf("%s\n", n.cadena);

  return 0;
}

