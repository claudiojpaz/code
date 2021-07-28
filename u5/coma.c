#include <stdio.h>

int main (void) {
  int var;
  int a = 1, b = 2;

  var = (a++,b++);

  printf("%d\n", var);
  printf("%d\n", a);
  printf("%d\n", b);

  return 0;
}

