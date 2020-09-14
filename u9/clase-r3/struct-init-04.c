#include <stdio.h>

struct dato {
  int a;
  float temp[10];
  char b;
};

struct otrodato {
  int a;
  float temp[10];
  char b;
};

int main (void)
{
  struct dato d1, d2 = {1, .b='c'};
  struct otrodato d;

  d1 = d2;
  d = d1; // error

  printf("miembro a = %d\n", d1.a);
  printf("miembro b = %c\n", d1.b);

  for (int i = 0; i < 10; i++)
    printf("miembro temp[%d] = %.2f\n", i, d1.temp[i]);

  return 0;
}

