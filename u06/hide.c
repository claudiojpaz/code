#include <stdio.h>

int main (void) {
  int var = 0;

  for (int i = 0; i < 5; i++) {
    int var = 3;
    printf("%d\n", var);
  }

  printf("%d\n", var);

  return 0;
}

