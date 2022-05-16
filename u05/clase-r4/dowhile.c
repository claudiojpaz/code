#include <stdio.h>

int main (void) {
  int n;

  do {
    printf("Ingrese un número par: ");
    scanf("%d", &n);
  } while (n % 2 != 0);

  printf("Ok\n");


  return 0;
}

