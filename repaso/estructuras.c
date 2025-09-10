#include <stdio.h>

struct dato {
  char cadena[30];
  char *p;
};

void mayus (struct dato *p) {
  p->cadena[0] -= ' ';
}

int main (void) {
  struct dato d = {"hola, mundo!"};

  d.p = d.cadena;

  mayus(&d);

  printf("%s\n", d.p);

  return 0;
}

