#include <stdio.h>

struct punto_2d {
  float x;
  float y;
};

typedef struct punto_2d p2D_t;
typedef struct punto_2d * p2DPtr;

int main (void) {
  p2D_t p1 = {0, 1};
  p2DPtr p;

  p = &p1;

  printf("%.2f %.2f\n", (*p).x, p->y);

  return 0;
}

