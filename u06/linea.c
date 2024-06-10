#include <stdio.h>

void linea (int x) {
  int i;

  for (i = 0; i < x; i++)
    if (i % 2 == 0 )
      printf("*");
    else
      printf("+");

  printf("\n");
}
