#include <stdio.h>

int main (void) {
  int par;
  int n;

  par = 0;
  while ( par ) {
    printf("Ingrese un número par: ");
    scanf("%d", &n);
    if (n % 2 == 0)
      par = 1;

  }

  return 0;
}

