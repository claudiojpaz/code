#include <stdio.h>

int main (void) {
  int nota = 8;

  if ( nota >= 6 ) {
    printf("Aprobado!\n");
    if ( nota >= 9 )
      printf("Excelente!\n");
  }
  else
    printf("Desaprobado\n");

  return 0;
}
