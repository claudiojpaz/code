#include <stdio.h>

void func1 (int x)
{
  x++;
  printf("En la función: %d\n", x);
}

int main (void)
{
  int x = 3;

  func1(x);
  printf("En el main: %d\n", x);
  return 0;
}

