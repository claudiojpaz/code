#include <stdio.h>

// si alguno de los dos números es cero, que devuelva cero
int division_entera (int n, int d) {
  if (d == 0)
    return 0;

  return n / d;
}

int main (void) {

  printf("el resultado de la división es %d\n", division_entera(0,1));

  return 0;
}

