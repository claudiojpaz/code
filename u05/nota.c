#include <stdio.h>

int main (void) {
  int nota;


  do
  {
    printf("Ingrese calificación: ");
    scanf("%d", &nota);
  }
  while (nota < 1 || nota > 10 );

  if (nota >= 6)
    printf("Aprobado\n");
  else
    printf("Desaprobado\n");




  return 0;
}

