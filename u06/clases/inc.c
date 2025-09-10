#include <stdio.h>

int f(void) {
  static int c = 0;
  return c++;
}

int main (void) {
  for (int i = 0; i < 10; i++) {
    printf("%d\n", f());
  }

  return 0;
}

