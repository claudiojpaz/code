#include <stdio.h>

int c = 0;

void inc_c (void) {
  c++;
}

int main (void) {
  printf("%d\n", c);
  int c = 4;
  printf("%d\n", c);
  if (c == 4) {
    float c = 3;
    printf("%f\n", c);
  }
  inc_c();
  printf("el c global vale %d\n", c);

  return 0;
}

