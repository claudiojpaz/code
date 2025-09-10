#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dato {
  char cadena[30];
  char *p;
};

int main (void) {
  struct dato *p;
  char *c = "hola, mundo!";

  p = malloc(10*sizeof (struct dato));


  for (int i = 0; i < 10; i++) {
    (p+i)->p = (p+i)->cadena;
    strcpy((p+i)->p, c);
  }

  for (int i = 0; i < 10; i++)
    (p+i)->p[0] = 'H';

  for (int i = 0; i < 10; i++)
    printf("%s\n", (p+i)->p);

  free(p);

  return 0;
}

