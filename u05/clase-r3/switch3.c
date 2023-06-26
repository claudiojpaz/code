#include <stdio.h>

int main (void) {
  int numero = 6;

  switch (numero) {
    case 1:
      printf("uno\n");
      break;
    case 2:
      printf("dos\n");
      break;
    case 3:
      printf("tres\n");
      break;
    case 4:
      printf("cuatro\n");
      break;
    default:
      printf("no se\n");
  }

  return 0;
}

