#include <stdio.h>

union int_float {
  char carac;
  float real;
};

int main (void)
{
  union int_float u;

  u.real = 2;   // probar primero asignar al char
  u.carac = 42;

  printf("Imprimiendo float  => %.2f\n", u.real) ;
  printf("Imprimiendo entero => %d\n", u.carac) ;

  return 0;
}



