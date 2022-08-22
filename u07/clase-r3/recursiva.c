#include <stdio.h>

int dec (int n) {
  if (n > 0) {
    printf("%d\n", n);
    dec(--n);
  }

  return 0;
}

int main (void) {

  dec(5);

  return 0;
}

