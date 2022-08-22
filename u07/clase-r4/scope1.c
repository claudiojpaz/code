#include <stdio.h>

int inc (void) {
  static int c;

  return ++c;
}

int main (void) {
  int j = 33;

  for (int i = 0; i < 5; i++) {
    int j = i;
    printf("%d\n", j);
  }

  printf("%d\n", j);


  return 0;
}

