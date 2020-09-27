#include <stdio.h>

union int_float {
  int entero;
  float real;
};

int main (void)
{
  union int_float u;

  printf("Asignando a float\n") ;
  u.real = 3.125;
  printf("Imprimiendo float  => %.3f\n", u.real) ;
  printf("Imprimiendo entero => %d\n", u.entero) ;

  return 0;
}
