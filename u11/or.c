#include <stdio.h>

int main (void) {
  char a = 77; // 0 1 0 0 1 1 0 1
  char b = 42; // 0 0 1 0 1 0 1 0
  char c;      // 0 1 1 0 1 1 1 1

  c = a | b;

  printf("%d\n", c);

  return 0;
}

