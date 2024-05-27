#include <stdio.h>

int main (void) {
  char c = 1;
  int i = 0;

  while (c < 128) {
    printf("%d\n", c*=2);
    if (i++ > 8)
      break;
  }



  return 0;
}

