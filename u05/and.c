#include <stdio.h>

int main (void) {
  int a = 2, b = 2;

  if (a++ == 2 && --b == 1)
    printf("Entró al if\n");

  printf("%d\n", a);
  printf("%d\n", b);

  return 0;
}

