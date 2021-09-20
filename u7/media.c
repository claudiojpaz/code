#include <stdio.h>

float media (int n1, int n2) {
  return (n1+n2) / 2.0;
}

int main (void) {
  int a = 7, b = 8;

  printf("La media entre %d y %d es %.2f\n", a, b, media(a,b));

  return 0;
}

