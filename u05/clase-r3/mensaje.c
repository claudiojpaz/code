#include <stdio.h>

#define EN

int main (void) {

#ifdef EN
  printf("hello\n");
#else
  printf("hola\n");
#endif

  return 0;
}

