#include <stdio.h>

struct p2D {
  float x;
  float y;
};

typedef struct p2D p2D_t;

int main(void){
  p2D_t p1 = {1,2};
  p2D_t p2 = {1,2};

  p1 = p2;

  printf("(%.2f, %.2f)\n", p1.x, p1.y);

  return 0;
}

