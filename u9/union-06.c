#include <stdio.h>

struct int_float {
  int es_entero;
  union {
    int entero;
    float real;
  } num;
};

int main (void)
{
  struct int_float n;

  n.es_entero = 0;   // si se usa un entero, poner en 1
  n.num.real = 42;

  if (n.es_entero == 1)
    printf ("Imprimiendo int => %d\n", n.num.entero);
  else
    printf ( "Imprimiendo float => %.2f\n" , n.num.real);

  return 0;
}
