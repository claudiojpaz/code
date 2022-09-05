#include <stdio.h>

void buscar(char **q) {
  for ( ; **q != ' ' && **q != 0; (*q)++)
    ;

  (*q)++;
}

int main (void) {
  char nombre[40] = "claudio paz";
  char *p;

  p = nombre;

  printf("%s\n", p);
  buscar(&p);

  printf("%s\n", p);

  return 0;
}

