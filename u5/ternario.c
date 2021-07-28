#include <stdio.h>

int main (void) {
  int n = 1;
  char caracter;

  printf("hay %d caramelo%c \n", n, n > 1 ? 's' : ' ');

  return 0;
}

