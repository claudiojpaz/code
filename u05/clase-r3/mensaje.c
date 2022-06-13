#include <stdio.h>

#if defined EN
#define MSG "Hello\n"
#else
#define MSG "Hola\n"
#endif

int main (void) {

  printf(MSG);

  return 0;
}

