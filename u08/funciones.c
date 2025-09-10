#include <stdio.h>

int promocionado(int, int);
int desaprobado(int, int);
int aprobado(int, int);
int contar(int (*)(int, int), int, int *, int);

int main (void) {
  int notas[10] = {1,4,5,6,7,4,8,2,7,10};
  int nota_aprobado = 6;
  int nota_promocionado = 8;

  int promocionados = contar(promocionado, nota_promocionado, notas, 10);
  printf("Promocionados: %d\n", promocionados);

  int desaprobados = contar(desaprobado, nota_aprobado, notas, 10);
  printf("Desaprobados: %d\n", desaprobados);

  int aprobados = contar(aprobado, nota_aprobado, notas, 10);
  printf("Aprobados: %d\n", aprobados);

  return 0;
}

int promocionado(int nota, int nota_promo) {
  if (nota >= nota_promo)
    return 1;
  else
    return 0;
}

int desaprobado(int nota, int nota_aprobado) {
  if (nota < nota_aprobado)
    return 1;
  else
    return 0;
}

int aprobado(int nota, int nota_aprobado) {
  if (nota >= nota_aprobado)
    return 1;
  else
    return 0;
}

int contar(int (*criterio)(int, int), int valor, int *notas, int n) {
  int c = 0;
  for (int i = 0; i < n; i++)
    if ((*criterio)(*(notas+i), valor))
      c++;

  return c;
}
