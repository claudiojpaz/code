#include <stdio.h>

int suma (int a, int b){
  return a+b;
}

int resta (int a, int b){
  return a-b;
}

int mult (int a, int b){
  return a*b;
}

void pregunta( int (*p)(int,int), int a, int b, char signo) {
  int r;

  printf("Cuanto es %d%c%d? ", a, signo, b);
  scanf("%d", &r);

  if (r == (*p)(a,b))
    printf("Correcto!\n");
  else
    printf("Incorrecto!\n");

}

int main(void) {

  pregunta(suma, 3, 4, '+');
  pregunta(resta, 3, 4, '-');
  pregunta(mult, 3, 4, '*');

  return 0;
}

