#include <stdio.h>

typedef struct {
  float x;
  float y;
} p2d_t;

int main (void) {
  p2d_t p1 = {1, 2};
  p2d_t *p;

  p = &p1;

  printf("%.2f\n", *p.z);

  return 0;
}

