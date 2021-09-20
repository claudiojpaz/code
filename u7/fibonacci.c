#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
int c = 0;

int fibo (int n) {
  c++;

  if (n == 0)
    return 0;

  if (n == 1)
    return 1;

  return fibo(n-1) + fibo(n-2);
}

int main (void) {

  for (int i = 0; i < 30; i++)
    printf("%d, ", fibo(i));

  printf("\n%d\n", c);
  return 0;
}

