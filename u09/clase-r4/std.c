#include <stdio.h>

typedef struct {
  float x;
  float y;
} p2D_t;

typedef p2D_t * pp2D_t;

int main (void) {
  p2D_t p1;
  pp2D_t p; // no hacer esto

  p = &p1;

  p1.x = 3;
  p1.y = 4;

  printf("%.2f %.2f\n", p->x, p1.y);

  return 0;
}

