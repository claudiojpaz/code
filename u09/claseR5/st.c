#include <stdio.h>

struct punto2d {
  float x;
  float y;
};


int main (void) {
  struct punto2d p1, p2 = {3,2};

  p1 = p2;

  printf("(%.2f, %.2f)\n", p1.x, p1.y);


  return 0;
}

