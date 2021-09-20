#include <stdio.h>

void imp (int n)
{
  printf("Ingresa a la función donde n vale %d\n", n);

  if (n > 1)
    imp(n-1);

  printf("Sale de la función donde n vale %d\n", n);
}

int main (void)
{
  imp(5);
  return 0;
}

