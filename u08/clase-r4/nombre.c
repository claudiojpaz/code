#include <stdio.h>

char * buscar(char *p) {
  char *f;

  for ( ; *p != ' ' && *p != 0; p++)
    ;

  f = ++p;

  return f;
}

int main (void) {
  char nombre[40] = "claudio paz";
  char *p, *q;

  p = nombre;

  printf("%s\n", p);
  q = buscar(p);

  printf("%s\n", q);

  return 0;
}

