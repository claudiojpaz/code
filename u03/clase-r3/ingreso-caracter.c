#include <stdio.h>

int main (void) {
  char x, y;

  printf("Ingrese dos caracters: ");
  scanf(" %c", &x);
  printf("Ingrese otro caracter: ");
  scanf(" %c", &y);

  printf("Ud. ingresó %c y %c.\n", x, y);

  return 0;
}

