#include <stdio.h>

union int_char {
  char caract;
  int entero;
};

int main (void) {
  union int_char u = {.entero=256};

  printf("%d\n", u.entero);
  printf("%d\n", u.caract);

  return 0;
}
