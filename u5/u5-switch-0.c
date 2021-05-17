#include <stdio.h>

int main (void) {
  int n;

  printf("Ingrese un número: ");
  scanf("%d", &n);

  switch (n) {
    case 0:
      printf("cero\n");
      break;
    case 1:
      printf("uno\n");
      break;
    case 2:
      printf("dos\n");
      break;
    default:
      printf("no se que es\n");
  }

  return 0;
}

