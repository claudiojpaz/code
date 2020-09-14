#include <stdio.h>

struct punto_2d {
  float x;
  float y;
};

int main (void)
{
  struct punto_2d puntos[5] = {{0,0},{6,7}};
  int i;

  puntos[0].x = 3; puntos[0].y = 3;
  puntos[3].x = 4; puntos[3].y = 5;

  for(i=0; i<5 ; i++)
    printf("(%.2f, %.2f)\n", puntos[i].x, puntos[i].y);

  return 0;
}
