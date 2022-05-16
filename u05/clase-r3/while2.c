#include <stdio.h>

int main (void) {
  int impar;
  int n;

  n = 3;
  impar = 1;
  while ( impar ) {
    printf("Ingrese un número par: ");
    scanf("%d", &n);
    if (n % 2 == 0)
      impar = 0;

  }

  return 0;
}

