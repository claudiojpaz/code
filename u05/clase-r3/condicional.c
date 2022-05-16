#include <stdio.h>

int main (void) {
  int a = 3, b = 4;

  if (a > 3 && b == ++a)
    printf("perfecto\n");
  else
    printf("no perfecto\n");

  printf("%d\n", a);


  return 0;
}

