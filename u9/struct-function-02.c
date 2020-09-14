#include <stdio.h>
#include <math.h>

struct punto2D {
  float x;
  float y;
};

float norma2d (struct punto2D p, struct punto2D q)
{
  return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}

int main (void)
{
  struct punto2D p1 = {1, 1};
  float norma;

  norma = norma2d(p1, (struct punto2D) {0,0});
  printf("%.2f\n", norma);

  return 0;
}

