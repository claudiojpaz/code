#include <stdio.h>

#ifndef ES
#define MENSAJE "hola\n"
#else
#define MENSAJE "hello\n"
#endif

int main (void) {

  printf(MENSAJE);

  return 0;
}

