#include <stdio.h>
// u3-intro-operadores-4.c

int main (void)
{
  int resultado;

  resultado = 6 / 3 * 2;

  printf("%d\n", resultado);

  resultado = 6 * 3 / 2;

  printf("%d\n", resultado);

  resultado = 6 / (3 * 2);

  printf("%d\n", resultado);

  return 0;
}
