#include <stdio.h>

int main (void) {
  float altura;

  printf("ingrese su altura en mentros: ");
  scanf("%f", &altura);

  printf("Su altura es %.2f metros\n", altura);
  printf("Su altura es %f metros\n", altura);

  return 0;
}

