#include <stdio.h>

int inc (void) {
  static int c = 1;

  return c++;
}

int main (void) {

  for(int i = 0; i < 5; i++)
    printf("%d\n", inc());

  return 0;
}

