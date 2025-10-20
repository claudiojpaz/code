#include <stdio.h>

struct ieee {
  unsigned int mantisa:23;
  unsigned int exponente:8;
  unsigned int signo:1;
};


union float_ieee {
  float dato;
  struct ieee ieee754;
};

int main(void){
  union float_ieee u;

  u.dato = 3.125;

  printf("%d\n", u.ieee754.signo);
  printf("%d\n", u.ieee754.exponente);
  printf("%d\n", u.ieee754.mantisa);

  return 0;
}

