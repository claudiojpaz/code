#include <stdio.h>

int add (int a, int b) {
  return a+b;
}
int sub (int a, int b) {
  return a-b;
}
/* typedef int (*op_t)(int, int); */

int main (void) {
  int (*p[2])(int, int) = {add, sub};

  printf("%d\n", p[1](2,3));

  return 0;
}

