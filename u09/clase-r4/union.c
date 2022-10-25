#include <stdio.h>

union int_float {
  int entero;
  float real;
};

int main (void)
{
  union int_float u;

  printf("Asignando a float\n") ;
  u.entero = 42;

  printf("Imprimiendo float  => %.47f\n", u.real) ;
  printf("Imprimiendo entero => %d\n", u.entero) ;

  return 0;
}

