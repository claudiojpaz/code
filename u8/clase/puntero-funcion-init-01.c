#include <stdio.h>

void saludo (void)
{
  printf("hola, mundo!\n");
}

int main (void) {
  void (*p)(void);

  p = saludo;

  saludo();
  (*p)();

  return 0;
}
