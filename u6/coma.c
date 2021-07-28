#include <stdio.h>

int main (void) {
  int var;
  int a = 1, b = 5;

  var = (a++,b++);

  printf("var=%d\n", var);
  printf("a=%d\n", a);
  printf("b=%d\n", b);

  return 0;
}

