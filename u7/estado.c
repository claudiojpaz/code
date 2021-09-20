#include <stdio.h>

int aprobado (int p1, int p2) {
  int resultado;

  if (p1 >= 6 && p2 >= 6)
    resultado = 1;
  else
    resultado = 0;

  return resultado;
}


int main (void) {
  int p1 = 1, p2 = 5;

  if (aprobado(p1,p2))
    printf("Felicitaciones\n");
  else
    printf("Hay que estudiar más\n");


  return 0;
}

