#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void)
{
  struct dato d = {.b='a'};

  printf("miembro a: %d\n", d.a);
  printf("miembro b: %c\n", d.b);

  return 0;
}


