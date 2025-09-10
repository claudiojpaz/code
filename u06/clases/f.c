#include <stdio.h>

int main (void) {
  int n1;

  imprime_linea(30);
  printf("Ingrese un número: ");
  scanf("%d", &n1);
  imprime_linea(20);

  printf("Ingresó %d\n", n1);
  imprime_linea(30);


  return 0;
}

void imprime_linea (int n) {
  for (int i = 0; i < n; i++)
    if (i % 2)
      printf("*");
    else
      printf("+");
  printf("\n");

}

