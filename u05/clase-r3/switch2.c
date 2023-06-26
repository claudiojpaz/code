#include <stdio.h>

int main (void) {
  int numero = 3;

  switch (numero) {
    case 1:
    case 2:
    case 3:
    case 4:
      printf("uno, dos, tres o cuatro\n");
      break;
  }

  return 0;
}

