#include <stdio.h>

int suma (int a, int b)
{
  return a+b;
}

int resta (int a, int b)
{
  return a-b;
}

int pregunta (int a, int b, char signo)
{
  int r;
  printf("¿Cuánto es %d%c%d? ", a, signo, b);
  scanf("%d", &r);

  return r;
}

void respuesta (int (*p)(int,int), int a, int b, int r)
{
  int v;

  if (r == (v = (*p)(a,b)))
    printf("Correcto\n");
  else
    printf("Incorrecto, es %d\n", v);
}

int main (void) {
  int r;

  r = pregunta(4,5, '+');
  respuesta(suma, 4,5, r);

  return 0;
}


