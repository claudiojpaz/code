#include <stdio.h>

struct punto_2d {
  float x;
  float y;
};

int main (void) {
  struct punto_2d p1 = {3, 2};

  printf("(%.2f, %.2f)\n", p1.x, p1.y);

  return 0;
}

