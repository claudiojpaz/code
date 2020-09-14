#include <stdio.h>

struct dato {
  int a;
  char b;
  float temp[10];
};

int main (void)
{
  struct dato d1, d2;

  d1.a = 1;
  d1.b = 'c';
  d1.temp[0] = 22.2;

  printf("miembro a = %d\n", d1.a);
  printf("miembro b = %c\n", d1.b);
  printf("miembro temp[0] = %.2f\n", d1.temp[0]);

  return 0;
}

