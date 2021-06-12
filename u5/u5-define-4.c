#include <stdio.h>

int main (void) {
  int nota = 6;

#if 0
  if (nota > 6) {
    /* el siguiente printf
       imprime una felicitación por la nota */
    printf("Felicitaciones\n");
  } else {
    /* el siguiente printf
       no festeja nada */
    printf("Flojo\n");
  }
#endif

#if 1
  if (nota >= 6) {
    printf("Aprobado\n");
  } else {
    printf("Desaprobado\n");
  }
#endif

  return 0;
}

