#include <stdio.h>

struct ieee754 {
  unsigned int mantisa:23;
  unsigned int exponente:8;
  unsigned int signo:1;
};

union ieee_float {
  float dato;
  struct ieee754 dato_ieee;
};

int main(void){
  union ieee_float u;

  u.dato = 3.125;

  printf("  %d\n", u.dato_ieee.signo);
  printf("  %d\n", u.dato_ieee.exponente);
  printf("  %d\n", u.dato_ieee.mantisa);

  return 0;
}

