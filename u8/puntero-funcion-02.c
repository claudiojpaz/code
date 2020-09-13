#include <stdio.h>

int suma (int a, int b) {
  return a+b;
}
int resta (int a, int b) {
  return a-b;
}
void pregunta (int (*p)(int,int), int a, int b, char signo){
  int r;
  printf("¿Cuánto es %d%c%d? ", a, signo, b);
  scanf("%d", &r);

  if (r == (*p)(a,b))
    printf("Correcto\n");
  else
    printf("Incorrecto\n");

}

int main (void) {

  pregunta(suma, 4,5, '+');

  return 0;
}

