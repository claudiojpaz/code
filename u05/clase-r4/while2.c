#include <stdio.h>

int main (void) {
  int n;
  int impar = 1;

  while (impar) {
    printf("Ingrese un número par: ");
    scanf("%d", &n);
    if (n % 2 == 0)
      impar = 0;
  }

  printf("Ok\n");


  return 0;
}

