#include <stdio.h>

struct punto2D {
  float x;
  float y;
  float m[10][10];
};

int main (void) {
  struct punto2D p1 = {1,2};
  struct punto2D p2;

  p2 = p1;

  printf("(%.2f, %.2f)\n", p2.x, p2.y);


  return 0;
}

