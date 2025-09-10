#include <stdio.h>

void print_one(const int *p) {
  printf("%d\n", *p);
}

int main (void) {
  int var = 5;

  print_one(&var);
  printf("%d\n", var);

  return 0;
}

