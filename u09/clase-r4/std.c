#include <stdio.h>

struct test {
  char a;
  char x;
  float b;
  char c;
};

struct punto2D {
  float x;
  float y;
};

int main (void) {
  struct punto2D p1;

  printf("%ld\n", sizeof (struct test));

  p1.x = 3;
  p1.y = 4;

  printf("%.2f %.2f\n", p1.x, p1.y);

  return 0;
}

