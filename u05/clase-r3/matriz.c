#include <stdio.h>

int main (void) {

  for (int i = 0; i < 5; i++, printf("\n"))
    for (int j = 0; j < 5; j++)
      printf("*");

  return 0;
}

