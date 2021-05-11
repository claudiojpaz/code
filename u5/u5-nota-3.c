#include <stdio.h>

int main (void) {
  int nota = 5;

  // if (1 <= nota <= 10) { // ojo!!!
  if (1 <= nota && nota <= 10) {
    printf("Ingreso correcto!\n");
  } else {
    printf("Ingreso incorrecto!\n");
  }

  return 0;
}
