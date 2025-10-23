#include <stdio.h>

void print_n_bits (unsigned int b, int n) {
  unsigned int mask = 1 << (n-1) ;
  for(int i = 0; i < n; i++) {
    if (mask & b)
      printf("1");
    else
      printf("0");
    mask >>= 1;
  }
  printf("\n");
}

void print_bits (unsigned char b) {
  unsigned char mask = 128;
  for(int i = 0; i < 8; i++) {
    if (mask & b)
      printf("1");
    else
      printf("0");
    mask >>= 1;
  }
  printf("\n");
}

struct ieee754 {
  unsigned int mantisa:23;
  unsigned int exponente:8;
  unsigned int signo:1;
};

union ieee_float {
  float dato;
  struct ieee754 dato_ieee;
  int dato_i;
};

int main(void){
  union ieee_float u;

  u.dato = 3.125;

  printf("  %d  ", u.dato_ieee.signo);
  print_n_bits(u.dato_ieee.signo, 1);
  printf("  %d  ", u.dato_ieee.exponente);
  print_n_bits(u.dato_ieee.exponente, 8);
  printf("  %d  ", u.dato_ieee.mantisa);
  print_n_bits(u.dato_ieee.mantisa, 23);
  printf("\n");
  print_n_bits(u.dato_i, 32);

  return 0;
}

