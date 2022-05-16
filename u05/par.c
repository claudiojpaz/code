#include <stdio.h>

int main (void) {
  int n;
  int es_impar = 1;

  while (es_impar) {
      printf("Ingrese un número par: ");
      scanf("%d", &n);
      if (n % 2 == 0)
        es_impar = 0;
  }

  printf("Ok\n");

  return 0;
}

