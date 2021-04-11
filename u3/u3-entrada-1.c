#include <stdio.h>
// u3-entrada-1.c

int main (void)
{
  int sum1, sum2;
  int res;

  printf("Ingrese un número: ");
  scanf("%d", &sum1);
  printf("Ingrese otro número: ");
  scanf("%d", &sum2);

  res = sum1 + sum2;

  printf("%d+%d=%d\n", sum1, sum2, res);

  return 0;
}
