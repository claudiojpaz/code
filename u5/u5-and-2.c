#include <stdio.h>

int main (void) {
  int a = 0;
  int b = 1;

  if (a++ && b++) {
    printf("a=%d\n", a);
  }
  printf("b=%d\n", b);

  return 0;
}
