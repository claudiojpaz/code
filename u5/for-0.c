#include <stdio.h>

int main (void) {
  int nota = 6;

#if 0
  if (nota >= 6) {
    printf("Aprobado\n");
    /* printf("Felicitaciones\n"); */
  } else {
    printf("Desaprobado\n");
  }
#endif

  if (nota >= 8)
    printf("Promoción\n");

  return 0;
}

