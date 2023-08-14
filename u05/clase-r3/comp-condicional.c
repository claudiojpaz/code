#include <stdio.h>
#include <stdlib.h>

#ifdef __unix__
#define ERASE_COMM "clear"
#else
#define ERASE_COMM "cls"
#endif

#if defined ES
#define MSG "Hola, mundo!\n"
#else
#define MSG "Hello, world!\n"
#endif

int main (void) {
  system(ERASE_COMM);

  printf(MSG);

  return 0;
}

