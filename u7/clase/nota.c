#include <stdio.h>

int ingreso_nota (void);
void impresion_estado (int nota);

int main (void) {
  int nota;

  nota = ingreso_nota();
  impresion_estado(nota);

  return 0;
}

int ingreso_nota (void) {
  int nota;

  do {
    printf("Ingrese una calificación: ");
    scanf("%d", &nota);
  } while (nota < 1 || nota > 10);

  return nota;
}

void impresion_estado (int nota) {
  if (nota >= 6)
    printf("Aprobado\n");
  else
    printf("Desaprobado\n");
}
