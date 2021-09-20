#include <stdio.h>

void addone (const int *p) {
  (*p)++;
}

int main (void) {
  int x = 3;

  x++;

  addone(&x);
  printf("%d\n", x);

  return 0;
}

