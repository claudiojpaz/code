#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void)
{
  struct dato d = {1, 'a', 3.14}; // error con -pedantic-errors

  printf("miembro a: %d\n", d.a);
  printf("miembro b: %c\n", d.b);

  return 0;
}



