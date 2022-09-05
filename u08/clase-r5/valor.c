#include <stdio.h>

int cuadrado (const int a) {
  a++;
  return a*a;
}

int main (void) {
  int var = 4;

  printf("%d\n", cuadrado(var));
  var = 3;
  printf("%d\n", cuadrado(var));
  return 0;
}

