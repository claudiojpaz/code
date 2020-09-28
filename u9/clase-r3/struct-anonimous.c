#include <stdio.h>

struct {
  int a;
  char b;
} d;

int main (void)
{

  d.a= 1; // probar otro nombre de miembro
  d.b = 'c';

  printf("miembro a = %d\n", d.a);
  printf("miembro b = %c\n", d.b);

  return 0;
}

