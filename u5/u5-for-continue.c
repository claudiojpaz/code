#include <stdio.h>
// u5-for-continue.c

int main (void) {
  for (int i = 0; i < 10; i++) {
    if (i == 3) {
      continue;
    }
    printf("%d  ", i);
  }

  return 0;
}

