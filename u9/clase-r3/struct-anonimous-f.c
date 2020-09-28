#include <stdio.h>

typedef struct punto2d {
  float x;
  float y;
} punto2d_t;

typedef struct {
  int a;
  char b;
} d_t;

int main (void)
{
  punto2d_t p = {0};

  d_t d;

  d.a= 1; // probar otro nombre de miembro
  d.b = 'c';

  printf("miembro a = %d\n", d.a);
  printf("miembro b = %c\n", d.b);

  printf("miembro x = %f\n", p.x);

  return 0;
}

