#include <stdio.h>

struct punto_2d {
  float x;
  float y;
};

int main (void) {
  struct punto_2d p1 = {3,2};

  struct punto_2d *pp;

  pp = &p1;

  printf("%.2f\n", (*pp).x);

  return 0;
}
