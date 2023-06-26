#include <stdio.h>

int main (void) {
  int nota = 10;

  if (1 <= nota)
    if (nota <= 10)
      printf("Nota ok\n");
    else
      printf("Nota no ok\n");
  else
    printf("Nota no ok\n");

  return 0;
}

