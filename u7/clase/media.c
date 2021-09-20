#include <stdio.h>

float media (int n1, int n2);

int main (void) {
  int a = 7, b = 8;
  float m;

  m = media(a,b);

  printf("La media entre %d y %d es %.2f\n", a, b, m);

  return 0;
}

float media (int n1, int n2) {
  return (float) (n1+n2) / 2;
}
