#include <stdio.h>

void addone (int *p) {
  (*p)++;
}

int main (void) {
  int x = 0;
  int *q = &x;

  addone(q);
  addone(&x);
  printf("%d\n", x);

  return 0;
}

