#include <stdio.h>

int main (void) {
  int a = 3, b = 0;

  if (a || ++b )
    printf("%d\n", b);

  return 0;
}

