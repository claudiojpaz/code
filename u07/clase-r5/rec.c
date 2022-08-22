#include <stdio.h>

void dec (int n) {
  if (n > 0) {
    printf("%d\n", n);
    dec(--n);
  }
}

int main (void) {

  dec(5);

  return 0;
}

