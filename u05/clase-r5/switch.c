#include <stdio.h>

int main (void) {
  int n;

  printf("Ingrese un número: ");
  scanf("%d", &n);

  switch (n) {
    case 1:
      printf("Ingresó un uno\n");
      break;
    case 2:
      printf("Ingresó un dos\n");
      break;
    case 3:
      printf("Ingresó un tres\n");
      break;
    default:
      printf("No se que ingresó\n");
  }

  return 0;
}

