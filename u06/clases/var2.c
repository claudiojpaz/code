#include <stdio.h>

void f1 (int x) {
  x++;
  printf("%d\n", x);
}

int main (void) {
  int a = 4;

  f1(a);
  printf("%d\n", a);

  return 0;
}

