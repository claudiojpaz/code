#include <stdio.h>

int main (void) {
  int nota = 0;

  if (0 <= nota && ++nota <= 10)
    printf("Nota ok\n");
  else
    printf("Nota no ok\n");

  printf("Nota %d\n", nota);
  return 0;
}

