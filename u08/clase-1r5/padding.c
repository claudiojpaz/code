#include <stdio.h>

int main (void) {
  int a = 2;
  char b = 2;
  int c = 2;
  int d = 2;

  printf("%p\n", &a);
  printf("%p\n", &b);
  printf("%p\n", &c);
  printf("%p\n", &d);

  return 0;
}

