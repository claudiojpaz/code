#include <stdio.h>

int func1 (int a) {
  int ok = 0;

  if (a >= 0) {
    printf("%d\n", a);
    printf("%d\n", a);
    printf("%d\n", a);
    printf("%d\n", a);
    ok = 1;
  }

  return ok;
}

int func2 (int a) {
  if (a < 0)
    return 0;

  printf("%d\n", a);
  printf("%d\n", a);
  printf("%d\n", a);
  printf("%d\n", a);

  return 1;
}

int main (void) {

  return 0;
}

