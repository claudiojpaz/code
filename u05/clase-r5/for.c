#include <stdio.h>

#define N 10
#define PI 3.14
#define MSG "hola, mundo!\n"

int main (void) {
  int i;
  // comentario

  printf(MSG);
  for (i = 0; i < N; i++) {
    if (i == 5)
      continue;

    printf("%d\n", i);
  }

  printf("%f\n", PI);
  return 0;
}

