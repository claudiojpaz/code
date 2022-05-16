#include <stdio.h>

int main (void) {
  char a;

  a = 1;
  while (a < 128) {
    printf("\t%d\n", a);
    a++ ;
  }

  return 0;
}

