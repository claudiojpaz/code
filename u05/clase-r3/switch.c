#include <stdio.h>

int main (void) {
  int n;

  printf("Ingrese un número: ");
  scanf("%d", &n);

  switch (n) {
    default:
      printf("No conozco ese número\n");
      break;
    case 1:
      printf("Ingresó un uno\n");
      break;
    case 2:
      printf("Ingresó un dos\n");
      break;
    case 3:
      printf("Ingresó un tres\n");
      break;
    case 4:
      printf("Ingresó un cuatro\n");
      break;
    case 5:
      printf("Ingresó un cinco\n");
      break;
    case 6:
      printf("Ingresó un seis\n");
      break;
    case 7:
      printf("Ingresó un siete\n");
      break;
    case 8:
      printf("Ingresó un ocho\n");
      break;
    case 9:
      printf("Ingresó un nueve\n");
      break;
    case 10:
      printf("Ingresó un diez\n");
      break;
  }

  return 0;
}

