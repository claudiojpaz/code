#include <stdio.h>

int op(int (*p)(int, int), int a, int b) {
  return (*p)(a, b);
}

int add (int a, int b) {
  return a + b;
}

int sub (int a, int b) {
  return a - b;
}

int main (void) {
  int (*p[])(int, int) = {add, sub};

  printf("%d\n", op((*p[0])(4,3)));

  return 0;
}

