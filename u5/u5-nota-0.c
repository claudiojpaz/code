#include <stdio.h>

int main (void) {
  int nota = 7;

  if (nota >= 6) {
    printf("Aprobado\n");
    if ( nota >= 8 ) {
      printf("Promocionado\n");
    }
  } else {
    printf("Desaprobado\n");
  }

  return 0;
}
