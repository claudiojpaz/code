#include <stdio.h>

int main (void) {
  int numero;
  char letra;
  float real;

  printf("ingrese un número: ");
  scanf("%d", &numero);
  printf("ud ingresó un %d\n", numero);

  printf("ingrese un caracter: ");
  scanf(" %c", &letra);
  printf("ud ingresó un %c\n", letra);

  printf("ingrese un real: ");
  scanf("%f", &real);
  printf("ud ingresó un %.2f\n", real);
  printf("ud ingresó un %f\n", real);

  return 0;
}

