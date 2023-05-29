#include <stdio.h>

int main (void) {
  int a=4;
  int b = 1;
  int c;

  // c = b++ += a; // no anda
  c = b += a++;

  printf("%d", c);
  printf("%d", a);

  return 0;
}

