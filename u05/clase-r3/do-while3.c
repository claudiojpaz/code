#include <stdio.h>

int main (void) {
  int nota;
  int dato_ok;

  do {
    printf("Ingrese la nota: ");
    scanf("%d", &nota);
    if (nota < 1 || nota > 10) {
      printf("fuera de rango\n");
      dato_ok = 0;
    } else {
      dato_ok = 1;
    }
  //} while (dato_ok == 0);
  } while (!dato_ok);

  printf("nota: %d\n", nota);

  return 0;
}

