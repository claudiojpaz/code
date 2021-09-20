#include <stdio.h>

void imprime_linea (int n) {
  for (int i = 0; i < n; i++)
    if ( i % 2 == 0 )
      printf("*");
    else
      printf("+");
  printf("\n");
}

void saludo (void) {
  printf(" Hola, mundo!\n");
}

int main (void) {
  imprime_linea(14);
  imprime_linea(14);
  saludo();
  imprime_linea(14);
  imprime_linea(14);

  return 0;
}

