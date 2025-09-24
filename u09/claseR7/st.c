#include <stdio.h>

struct dato {
  int entero;
  char caracter;
};

struct punto2D {
  float x;
  float y;
};

int main (void) {
  struct dato d1 = {1, 'c'};
  struct punto2D p1 = {1.2, 2.3};

  printf("%d\n", d1.entero);
  printf("%c\n", d1.caracter);

  printf("(%.2f, %.2f)\n", p1.x, p1.y);
  return 0;
}

