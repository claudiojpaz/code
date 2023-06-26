#include <stdio.h>

int main (void) {
  int nota = 11;

  if (nota >= 1)
    if (nota <= 10)
      printf("Ok\n");
    else
      printf("No Ok\n");
  else
    printf("No Ok\n");

  return 0;
}

