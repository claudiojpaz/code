#include <stdio.h>
#include <stdlib.h>

#if defined __unix__
#define ERASE "clear"
#else
#define ERASE "cls"
#endif

int main (void) {
  system(ERASE);

  printf("Hola, mundo!\n");

  return 0;
}

